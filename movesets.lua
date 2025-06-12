if not _G.charSelectExists then return end   

ACT_ICEDAGGER = allocate_mario_action(ACT_GROUP_STATIONARY | ACT_FLAG_ALLOW_FIRST_PERSON | ACT_FLAG_PAUSE_EXIT | ACT_FLAG_INVULNERABLE)

gPlayerSyncTable[0].ICEDAGGER_TIMER = 0;
gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE = false;
gPlayerSyncTable[0].SWORD_ENERGY = 0;

function act_icedagger(m)
    m.forwardVel = 0.0;
    m.vel.y = 0.0;
    m.marioBodyState.handState = 5;
    m.marioObj.header.gfx.angle.y = m.area.camera.yaw
    m.marioObj.header.gfx.animInfo.animAccel = 98303
    smlua_anim_util_set_animation(m.marioObj, ICEDAGGER_HEAL_ANIM)

    if gPlayerSyncTable[0].ICEDAGGER_TIMER >= 30 and gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE == false then
        m.health = m.health + (4 << 8)
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



-- Based on CoinStores check.
local function RoloSwordEnergyEarn(m,o,interactType)
    if m.playerIndex ~= 0 then 
        return
    else
         if interactType == INTERACT_COIN and (o.oDamageOrCoinValue > 0) then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY +  (o.oDamageOrCoinValue / 40);
         end
         -- (m.flags & MARIO_METAL_CAP)  ~= 0 
         if interactType == INTERACT_BOUNCE_TOP and (o.oDamageOrCoinValue > 0) then
            if determine_interaction(m,o) == INT_FAST_ATTACK_OR_SHELL  or determine_interaction(m,o) == INT_PUNCH then
                gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY +  0.1;
            end
            if  (m.flags & ACT_FLAG_INVULNERABLE) ~= 0  or (m.flags & MARIO_METAL_CAP)  ~= 0 then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY +  0.1;
            end
         end
         if interactType == INTERACT_STAR_OR_KEY then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY + 1;
         end
    end
end

function rolo_update(m)
    if (m.controller.buttonPressed & X_BUTTON) ~= 0 then
        if iceDaggerCheck(m) then
            gPlayerSyncTable[0].SWORD_ENERGY = gPlayerSyncTable[0].SWORD_ENERGY - 1;
            spawn_sync_object(id_bhvBTHealthEffect1, E_MODEL_BT_HEALEFFECT1, m.pos.x, m.pos.y + 100, m.pos.z, nil)
            gPlayerSyncTable[0].ICEDAGGER_TIMER = 0;
            gPlayerSyncTable[0].ICEDAGGER_DEBOUNCE = false;
            audio_sample_play(ICEDAGGER_SOUND, gMarioStates[0].pos, 1);
            set_mario_action(m, ACT_ICEDAGGER, 0); 
        end
     end
end


hook_mario_action(ACT_ICEDAGGER, act_icedagger)
hook_event(HOOK_ON_INTERACT, RoloSwordEnergyEarn)