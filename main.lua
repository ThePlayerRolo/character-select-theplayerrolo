-- name: [CS] ThePlayerRolo
-- description: Write mod description here!\n\nMade by: You!\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!



local TEXT_MOD_NAME = "ThePlayerRolo Pack"
ICEDAGGER_HEAL_ANIM = 'IceDaggerHeal'
E_MODEL_BT_HEALEFFECT1 = smlua_model_util_get_id("BTHealthEffect1_geo")
ICEDAGGER_SOUND = audio_sample_load("IceDaggerHeal.ogg");

if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

local E_MODEL_THEPLAYERROLO_YOSHI =      smlua_model_util_get_id("theplayerrolo_yoshi_geo")      -- Located in "actors"

local TEX_THEPLAYERROLO_LIFE_ICON = get_texture_info("ThePlayerRoloYoshiIcon") -- Located in "textures"

-- All sound files are located in "sound" folder
-- Remember to include the file extention in the name
local VOICETABLE_CHAR = {
    [CHAR_SOUND_OKEY_DOKEY] =        'StartGame.ogg', -- Starting game
	[CHAR_SOUND_LETS_A_GO] =         'StartLevel.ogg', -- Starting level
	[CHAR_SOUND_PUNCH_YAH] =         'Punch1.ogg', -- Punch 1
	[CHAR_SOUND_PUNCH_WAH] =         'Punch2.ogg', -- Punch 2
	[CHAR_SOUND_PUNCH_HOO] =         'Punch3.ogg', -- Punch 3
	[CHAR_SOUND_YAH_WAH_HOO] =       {'Jump1.ogg', 'Jump2.ogg', 'Jump3.ogg'}, -- First Jump Sounds
	[CHAR_SOUND_HOOHOO] =            'DoubleJump.ogg', -- Second jump sound
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'TripleJump1.ogg', 'TripleJump2.ogg'}, -- Triple jump sounds
	[CHAR_SOUND_UH] =                'Bonk.ogg', -- Wall bonk
	[CHAR_SOUND_UH2] =               'LongJumpLand.ogg', -- Landing after long jump
	[CHAR_SOUND_UH2_2] =             'LongJumpLand.ogg',
	[CHAR_SOUND_HAHA] =              'TripleJumpLand.ogg', -- Landing triple jump
	[CHAR_SOUND_YAHOO] =             'LongJump.ogg', -- Long jump
	[CHAR_SOUND_DOH] =               'Bonk.ogg', -- Long jump wall bonk
	[CHAR_SOUND_WHOA] =              'GrabLedge.ogg', -- Grabbing ledge
	[CHAR_SOUND_EEUH] =              'ClimbLedge.ogg', -- Climbing over ledge
	[CHAR_SOUND_WAAAOOOW] =          'Falling.ogg', -- Falling a long distance
	[CHAR_SOUND_TWIRL_BOUNCE] =      'FlowerBounce.ogg', -- Bouncing off of a flower spring
	[CHAR_SOUND_GROUND_POUND_WAH] =  'GroundPound.ogg', 
	[CHAR_SOUND_HRMM] =              'Lift.ogg', -- Lifting something
	[CHAR_SOUND_HERE_WE_GO] =        'GetStar.ogg', -- Star get
	[CHAR_SOUND_SO_LONGA_BOWSER] =   'ThrowBowser.ogg', -- Throwing Bowser
--DAMAGE
	[CHAR_SOUND_ATTACKED] = 'Damaged.ogg', -- Damaged
	[CHAR_SOUND_PANTING] = 'Panting.ogg', -- Low health
	[CHAR_SOUND_ON_FIRE] = 'Burned.ogg', -- Burned
--SLEEP SOUNDS
	[CHAR_SOUND_IMA_TIRED] = 'Tired.ogg', -- Mario feeling tired
	[CHAR_SOUND_YAWNING] = 'Yawn.ogg', -- Mario yawning before he sits down to sleep
	[CHAR_SOUND_SNORING1] = 'Snore.ogg', -- Snore Inhale
	[CHAR_SOUND_SNORING2] = 'Exhale.ogg', -- Exhale
	[CHAR_SOUND_SNORING3] = 'SleepTalk.ogg', -- Sleep talking / mumbling
--COUGHING (USED IN THE GAS MAZE)
	[CHAR_SOUND_COUGHING1] = 'Cough1.ogg', -- Cough take 1
	[CHAR_SOUND_COUGHING2] = 'Cough2.ogg', -- Cough take 2
	[CHAR_SOUND_COUGHING3] = 'Cough3.ogg', -- Cough take 3
--DEATH
	[CHAR_SOUND_DYING] = 'Dying.ogg', -- Dying from damage
	[CHAR_SOUND_DROWNING] = 'Drowning.ogg', -- Running out of air underwater
	[CHAR_SOUND_MAMA_MIA] = 'LeaveLevel.ogg' -- Booted out of level
}


local CAPTABLE_THEPLAYERROLO = {
    normal = smlua_model_util_get_id("theplayerrolo_ncap_geo"),
    wing = smlua_model_util_get_id("theplayerrolo_wcap_geo"),
    metal = smlua_model_util_get_id("theplayerrolo_mcap_geo"),
}

local PALETTE_THEPLAYERROLO_YOSHI = {
    [PANTS]  = "ffffff",
    [SHIRT]  = "1B2A35", --Black
    [GLOVES] = "ffffff", -- White 
    [SHOES]  = "717171", --Grey
    [HAIR]   = "F4CC43", --Yellow
    [SKIN]   = "C4281C", --Red
    [CAP]    = "1B2A35", --Black (Shell)
	[EMBLEM] = "1B2A35"  --Black (Spines)
}

-- All Located in "textures" folder
-- (Textures do not exist in template)
--[[
local HEALTH_METER_CHAR = {
    label = {
        left = get_texture_info("healthleft"),
        right = get_texture_info("healthright"),
    },
    pie = {
        [1] = get_texture_info("Pie1"),
        [2] = get_texture_info("Pie2"),
        [3] = get_texture_info("Pie3"),
        [4] = get_texture_info("Pie4"),
        [5] = get_texture_info("Pie5"),
        [6] = get_texture_info("Pie6"),
        [7] = get_texture_info("Pie7"),
        [8] = get_texture_info("Pie8"),
    }
}
]]



local CSloaded = false
local function on_character_select_load()
    -- Adds the custom character to the Character Select Menu
    CT_PLAYERROLO = _G.charSelect.character_add(
        "ThePlayerRolo (Yoshi)", -- Character Name
        "Its a me, a Yoshi!", -- Description
        "ThePlayerRolo, Models Resource", -- Credits
        "C4281C",           -- Menu Color
        E_MODEL_THEPLAYERROLO_YOSHI,       -- Character Model
        CT_MARIO,           -- Override Character
        TEX_THEPLAYERROLO_LIFE_ICON, -- Life Icon
        1,                  -- Camera Scale
        0                   -- Vertical Offset
    )
     _G.charSelect.character_add_caps(E_MODEL_THEPLAYERROLO_YOSHI, CAPTABLE_THEPLAYERROLO)
    -- _G.charSelect.character_add_voice(E_MODEL_THEPLAYERROLO_YOSHI, VOICETABLE_CHAR)
    _G.charSelect.character_add_palette_preset(E_MODEL_THEPLAYERROLO_YOSHI, PALETTE_THEPLAYERROLO_YOSHI)
    -- _G.charSelect.character_add_health_meter(CT_CHAR, HEALTH_METER_CHAR)
    _G.charSelect.credit_add(TEXT_MOD_NAME, "You", "Pack")
    _G.charSelect.character_hook_moveset(CT_PLAYERROLO, HOOK_MARIO_UPDATE, rolo_update)
    CSloaded = true
end


_G.charSelect.config_character_sounds()

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)