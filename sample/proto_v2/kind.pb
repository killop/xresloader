
D
dep_level2.proto"0
dep2_cfg
id (Rid
level (	Rlevel
�
dependency.protoxresloader.protodep_level2.proto"L
dep_cfg
id (Rid
name (	Rname
dep2 (2	.dep2_cfgRdep2*�
game_const_config
EN_GCC_PERCENT_BASE�N
EN_GCC_RANDOM_RANGE_UNIT
 
EN_GCC_RESOURCE_MAX_LIMIT���
EN_GCC_LEVEL_LIMIT�
EN_GCC_SOLDIER_TYPE_MASKd
EN_GCC_ACTIVITY_TYPE_MASK�
EN_GCC_FORMULAR_TYPE_MASK

EN_GCC_SCREEN_WIDTH�
EN_GCC_SCREEN_HEIGHT�
EN_GCC_CAMERA_OFFSET�*Z
	cost_type
EN_CT_UNKNOWN 
EN_CT_MONEY�N	�>金币
EN_CT_DIAMOND�N	�>钻石
�

kind.protoxresloader.protoxresloader_ue.protodep_level2.protodependency.proto"�
role_cfg
id (Rid!
unlock_level (RunlockLevel
	cost_type (RcostType

cost_value (R	costValue
name (	Rname#
dep_test
 (2.dep_cfgRdepTest

test_array (	R	testArray"
int_as_string (	RintAsString=
test_plain_enum_array (2
.cost_typeRtestPlainEnumArray"�
role_upgrade_cfg
Id (B�D�RId
Level (B�DRLevel=
CostType (B!�>	cost_type�?Refer to cost_typeRCostType
	CostValue (R	CostValue
ScoreAdd (RScoreAdd:1�Dhelper�>%Test role_upgrade_cfg with multi keys"h
test_msg_verifier
	test_id_1�N (RtestId1/
	test_id_2�N (B�?测试ID别名2RtestId2:�?-^"�

arr_in_arr3
name (	B�?This is a test name in arrayRname
int_arr (BRintArr
str_arr (	RstrArr:�Dhelper�D"�
arr_in_arr_cfg#
id (B�D�?This is a KeyRid
arr (2.arr_in_arrRarr+
test_plain_int_arr (RtestPlainIntArr9
test_plain_enum_arr (2
.cost_typeRtestPlainEnumArr>
test_plain_msg (2.test_msg_verifierB�?&RtestPlainMsg?
test_plain_msg_arr (2.test_msg_verifierRtestPlainMsgArr>
test_map_is (2.arr_in_arr_cfg.TestMapIsEntryR	testMapIsD
test_map_sm (2.arr_in_arr_cfg.TestMapSmEntryB�?|R	testMapSm<
TestMapIsEntry
key (Rkey
value (	Rvalue:8G
TestMapSmEntry
key (	Rkey
value (2	.dep2_cfgRvalue:8:�Dhelper�>Test arr_in_arr_cfg"�
event_reward_item
item_id (RitemId

item_count (R	itemCount2
nested_note (	B�?描述文本H R
nestedNoteG
nested_enum_type (2
.cost_typeB�?货币类型H RnestedEnumTypeB
nested"�
event_rule_item
rule_id (RruleId

rule_param (R	ruleParam2
nested_note (	B�?描述文本H R
nestedNoteG
nested_enum_type (2
.cost_typeB�?货币类型H RnestedEnumTypeB
nested"�
	event_cfg
id (B�DdRid
process (B�DRprocess$
rule (2.event_rule_itemRrule5
specify_field (2.event_rule_itemRspecifyField9
item (2.event_reward_itemB�?奖励道具H Ritem,
user_exp (B�?奖励经验H RuserExp%
note (	B�?描述文本H Rnote:
	enum_type (2
.cost_typeB�?货币类型H RenumType0

user_level3 (B�?玩家等级HR	userLevel1
test_arr[ (2.event_rule_itemB�?;RtestArr<
test_empty_arr\ (2.event_rule_itemB�?;RtestEmptyArr:,�Dhelper�> Test event_cfg with oneof fieldsB
rewardB
unlock_type"�
keep_or_strip_empty_list_cfg#
id (B�D�?This is a KeyRid&
	array_msg (2	.dep2_cfgRarrayMsg1
array_plain_msg (2	.dep2_cfgRarrayPlainMsg
array_int32 (R
arrayInt32
array_int64 (R
arrayInt64:	�Dhelper