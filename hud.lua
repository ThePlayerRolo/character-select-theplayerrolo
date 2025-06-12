ICEDAGGER_CARD = get_texture_info("IceDaggerCardIcon")
ICEDAGGER_CARD_DARKENED = get_texture_info("IceDaggerCardIconDarkened")

local function on_hud_renderbehind()
    if (CT_PLAYERROLO == _G.charSelect.character_get_current_number())  then
        djui_hud_set_resolution(RESOLUTION_N64)
        djui_hud_render_texture(ICEDAGGER_CARD, 340, 170, 1, 1)
        djui_hud_print_text("NRG: " .. gPlayerSyncTable[0].SWORD_ENERGY, 340, 130, 1)
    end
end


hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_renderbehind);