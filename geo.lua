--Contains Geo Functions
function geo_switch_rolo_hand(node, matStackIndex)
    local switchCase = cast_graph_node(node);
    local bodyState = geo_get_body_state();

    if (bodyState.handState == MARIO_HAND_FISTS) then
        switchCase.selectedCase = ((bodyState.action & ACT_FLAG_SWIMMING_OR_FLYING) ~= 0);
    else
        if switchCase.parameter == 0 then
            switchCase.selectedCase = (bodyState.handState < 6) and bodyState.handState or MARIO_HAND_OPEN;
        else
            switchCase.selectedCase = (bodyState.handState < 2) and bodyState.handState or MARIO_HAND_FISTS;
        end
    end
    return nil;
end