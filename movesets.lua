if not _G.charSelectExists then return end   

ACT_ICEDAGGER = allocate_mario_action(ACT_GROUP_STATIONARY | ACT_FLAG_ALLOW_FIRST_PERSON | ACT_FLAG_PAUSE_EXIT | ACT_FLAG_INVULNERABLE)

gPlayerSyncTable[0].ICEDAGGER_TIMER = 0;
gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE = false;
gPlayerSyncTable[0].SWORD_ENERGY = 2;

function act_icedagger(m)
    m.forwardVel = 0.0;
    m.vel.y = 0.0;
    if gPlayerSyncTable[0].ICEDAGGER_TIMER < 30 then
        m.marioBodyState.handState = 5;        
    else
        m.marioBodyState.handState = 1; 
    end

    m.marioObj.header.gfx.angle.y = m.area.camera.yaw
    m.marioObj.header.gfx.animInfo.animAccel = 98303
    smlua_anim_util_set_animation(m.marioObj, ICEDAGGER_HEAL_ANIM)

    if gPlayerSyncTable[0].ICEDAGGER_TIMER >= 30 and gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE == false then
        m.health = m.health + (4 << 8)
        spawn_sync_object(id_bhvBTHealthEffect1, E_MODEL_BT_HEALEFFECT1, m.pos.x, m.pos.y + 100, m.pos.z, nil)
        gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE = true;
    end

    if is_anim_at_end(m) ~=  0 then 
    set_mario_action(m, ACT_IDLE, 0);
    audio_sample_stop(ICEDAGGER_SOUND)
    end

    gPlayerSyncTable[0].ICEDAGGER_TIMER = gPlayerSyncTable[0].ICEDAGGER_TIMER + 1;
    return false
end

local function iceDaggerCheck(m)
    return m.action & ACT_FLAG_STATIONARY ~= 0 and m.health > 0 and gPlayerSyncTable[0].SWORD_ENERGY >= 1;
end

function ground_pound_dive(m)
    if m.action  ==  ACT_GROUND_POUND then
        if (m.controller.buttonPressed & B_BUTTON) ~= 0 then 
            set_mario_action(m, ACT_DIVE, 0);
            m.vel.y = 30.0;
            m.forwardVel = 40.0;
            m.faceAngle.y = m.intendedYaw;
            return false;
        end
    end 
end

function ground_pound_jump(m)
    if m.action  ==  ACT_GROUND_POUND_LAND then
        if (m.controller.buttonPressed & A_BUTTON) ~= 0 then
            m.vel.y = 30.0;
            m.faceAngle.y = m.intendedYaw;
            return set_mario_action(m, ACT_TRIPLE_JUMP, 0);
        end
    end 
end


-- Based on CoinStores check.
local function RoloSwordEnergyEarnPassive(m,o,interactType)
    if (CT_PLAYERROLO == _G.charSelect.character_get_current_number())  then
    if m.playerIndex ~= 0 then 
        return
    else
         if interactType == INTERACT_COIN and (o.oDamageOrCoinValue > 0) then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY +  (o.oDamageOrCoinValue / 40);
         end
         if interactType == INTERACT_STAR_OR_KEY or obj_is_mushroom_1up(o) then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY + 1;
         end
    end
end
end

function RoloSwordEnergyEarnAttack(m, o, interationID)
    if (CT_PLAYERROLO == _G.charSelect.character_get_current_number())  then
    if m.playerIndex ~= 0 then
        return
    else
         if o.oDamageOrCoinValue > 0 then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY +  0.05; 
         end
    end
end
end

function rolo_update(m)
    if (m.controller.buttonPressed & X_BUTTON) ~= 0 then
        if iceDaggerCheck(m) then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY - 1;
            gPlayerSyncTable[0].ICEDAGGER_TIMER = 0;
            gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE = false;
            audio_sample_play(ICEDAGGER_SOUND, gMarioStates[0].pos, 1);
            set_mario_action(m, ACT_ICEDAGGER, 0); 
        end
     end
    ground_pound_dive(m);
    ground_pound_jump(m);
end


hook_mario_action(ACT_ICEDAGGER, act_icedagger)
hook_event(HOOK_ON_INTERACT, RoloSwordEnergyEarnPassive)
hook_event(HOOK_ON_ATTACK_OBJECT, RoloSwordEnergyEarnAttack)
