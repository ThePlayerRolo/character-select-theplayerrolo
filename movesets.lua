ACT_ICEDAGGER = allocate_mario_action(ACT_GROUP_STATIONARY | ACT_FLAG_ALLOW_FIRST_PERSON | ACT_FLAG_PAUSE_EXIT | ACT_FLAG_INVULNERABLE)

if not _G.charSelectExists then return end    

ICEDAGGER_HEAL_ANIM = 'IceDaggerHeal'
E_MODEL_BT_HEALEFFECT1 = smlua_model_util_get_id("BTHealthEffect1_geo")
ICEDAGGER_SOUND = audio_sample_load("IceDaggerHeal.ogg");
ICEDAGGER_TIMER = 0;
ICEDAGGER_DEBOUNCE = false;
--m.marioObj.header.gfx.animInfo.animFrame

function act_icedagger(m)
    --98303 65335
    m.forwardVel = 0.0;
    m.vel.y = 0.0;
    m.marioObj.header.gfx.angle.y = m.area.camera.yaw
    m.marioObj.header.gfx.animInfo.animAccel = 98303
    smlua_anim_util_set_animation(m.marioObj, ICEDAGGER_HEAL_ANIM)

    if ICEDAGGER_TIMER >= 30 and ICEDAGGER_DEBOUNCE == false then
        m.health = m.health + (4 << 8)
        ICEDAGGER_DEBOUNCE = true;
    end
    if is_anim_at_end(m) ~=  0 then 
    set_mario_action(m, ACT_IDLE, 0);
    audio_sample_stop(ICEDAGGER_SOUND)
    end

    ICEDAGGER_TIMER = ICEDAGGER_TIMER + 1;
    return false
end

local function iceDaggerCheck(m)
    return m.action & ACT_FLAG_STATIONARY ~= 0 and m.health > 0;
end

function rolo_update(m)
    if (m.controller.buttonPressed & X_BUTTON) ~= 0 then
    if iceDaggerCheck(m) then
        spawn_sync_object(id_bhvBTHealthEffect1, E_MODEL_BT_HEALEFFECT1, m.pos.x, m.pos.y + 100, m.pos.z, nil)
        ICEDAGGER_TIMER = 0;
        ICEDAGGER_DEBOUNCE = false;
        audio_sample_play(ICEDAGGER_SOUND, gMarioStates[0].pos, 1);
        set_mario_action(m, ACT_ICEDAGGER, 0);
        end
    end
end


hook_mario_action(ACT_ICEDAGGER, act_icedagger)
