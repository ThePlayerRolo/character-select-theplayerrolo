function bhv_BTHealthEffect1_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE;
    obj_set_billboard(obj)
    obj.oIntangibleTimer = 0;
    network_init_object(obj, false, nil)
end


function bhv_BTHealthEffect1_loop(obj)
    --[[if obj.oTimer == 0 then
        obj_translate_xz_random(obj, 40.0);
        obj.pos.y  = obj.pos.y + 10;
    end ]]
end

id_bhvBTHealthEffect1 = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_BTHealthEffect1_init, bhv_BTHealthEffect1_loop)
