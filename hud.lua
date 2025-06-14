

local ROLO_HUD_TABLE = {
    {
        --IceDagger 
        CARD_NORMAL = get_texture_info("IceDaggerCardIcon"),
        CARD_DARKENED = get_texture_info("IceDaggerCardIconDarkened"),
        CARD_X = 340,
        CARD_Y = 170,
        CARD_SCALE_X = 1,
        CARD_SCALE_Y = 1,
    }
}
local function on_hud_renderbehind()
    if (CT_PLAYERROLO == _G.charSelect.character_get_current_number())  then
        djui_hud_set_resolution(RESOLUTION_N64)
        for i = 1, #ROLO_HUD_TABLE do
        local CURRENT_CARD = ROLO_HUD_TABLE[i];
        djui_hud_render_texture(CURRENT_CARD.CARD_NORMAL, CURRENT_CARD.CARD_X, CURRENT_CARD.CARD_Y, CURRENT_CARD.CARD_SCALE_X, CURRENT_CARD.CARD_SCALE_Y)
        end
        djui_hud_print_text("NRG: " .. gPlayerSyncTable[0].SWORD_ENERGY, 340, 130, 1)
    end
end


hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_renderbehind);