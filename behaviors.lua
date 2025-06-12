define_custom_obj_fields({
    oBTHealthEffect1Timer = 'u32',
})

function bhv_BTHealthEffect1_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE;
    obj_set_billboard(obj)
    obj.oIntangibleTimer = 0;
    obj.oBTHealthEffect1Timer = 0;
    network_init_object(obj, false, nil)
end


function bhv_BTHealthEffect1_loop(obj)
        obj.oPosY = obj.oPosY + 1;
        if obj.oBTHealthEffect1Timer >= 30 then
            obj.activeFlags = ACTIVE_FLAG_DEACTIVATED;
        end
        obj.oBTHealthEffect1Timer = obj.oBTHealthEffect1Timer + 1;

end

id_bhvBTHealthEffect1 = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_BTHealthEffect1_init, bhv_BTHealthEffect1_loop)
