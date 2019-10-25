#include "species_model_data.h"

SpeciesModelData::SpeciesModelData() {
}
SpeciesModelData::~SpeciesModelData() {
}

void SpeciesModelData::_bind_methods() {
	/*
	ClassDB::bind_method(D_METHOD("get_bone_path", "index"), &SpeciesModelData::get_bone_path);
	ClassDB::bind_method(D_METHOD("set_bone_path", "index", "path"), &SpeciesModelData::set_bone_path);

	ClassDB::bind_method(D_METHOD("get_visual", "index"), &SpeciesModelData::get_visual);
	ClassDB::bind_method(D_METHOD("set_visual", "index", "entry"), &SpeciesModelData::set_visual);

	ADD_GROUP("Visuals", "visual_");
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_root", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_ROOT);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_pelvis", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_PELVIS);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_spine", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_SPINE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_spine_1", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_SPINE_1);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_spine_2", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_SPINE_2);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_neck", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_NECK);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_head", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_HEAD);

	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_clavicle", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_CLAVICLE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_upper_arm", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_UPPER_ARM);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_forearm", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_FOREARM);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_hand", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_HAND);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_thumb_base", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_THUMB_BASE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_thumb_end", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_THUMB_END);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_fingers_base", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_FINGERS_BASE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_fingers_end", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_FINGERS_END);

	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_clavicle", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_CLAVICLE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_upper_arm", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_UPPER_ARM);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_forearm", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_FOREARM);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_hand", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_HAND);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_thumb_base", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_THUMB_BASE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_thumb_end", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_THUMB_END);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_fingers_base", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_FINGERS_BASE);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_fingers_end", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_FINGERS_END);

	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_thigh", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_THIGH);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_calf", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_CALF);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_left_foot", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_LEFT_FOOT);

	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_thigh", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_THIGH);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_calf", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_CALF);
	ADD_PROPERTYI(PropertyInfo(Variant::OBJECT, "visual_right_foot", PROPERTY_HINT_RESOURCE_TYPE, "CharacterSkeletonVisualEntry"), "set_visual", "get_visual", EntityEnums::SKELETON_POINT_RIGHT_FOOT);

	ADD_GROUP("Bone Paths", "bone_path_");
	ADD_PROPERTYI(PropertyInfo(Variant::NODE_PATH, "bone_path_root"), "set_bone_path", "get_bone_path", EntityEnums::SKELETON_POINT_ROOT);

	ClassDB::bind_method(D_METHOD("get_bone_node", "bone_idx"), &SpeciesModelData::get_bone_node);

	ClassDB::bind_method(D_METHOD("get_animation_player_path"), &SpeciesModelData::get_animation_player_path);
	ClassDB::bind_method(D_METHOD("set_animation_player_path", "path"), &SpeciesModelData::set_animation_player_path);
	ADD_PROPERTY(PropertyInfo(Variant::NODE_PATH, "animation_player_path"), "set_animation_player_path", "get_animation_player_path");

	ClassDB::bind_method(D_METHOD("get_animation_tree_path"), &SpeciesModelData::get_animation_tree_path);
	ClassDB::bind_method(D_METHOD("set_animation_tree_path", "path"), &SpeciesModelData::set_animation_tree_path);
	ADD_PROPERTY(PropertyInfo(Variant::NODE_PATH, "animation_tree_path"), "set_animation_tree_path", "get_animation_tree_path");

	ClassDB::bind_method(D_METHOD("get_animation_player"), &SpeciesModelData::get_animation_player);
	ClassDB::bind_method(D_METHOD("get_animation_tree"), &SpeciesModelData::get_animation_tree);

	ClassDB::bind_method(D_METHOD("update_nodes"), &SpeciesModelData::update_nodes);
	*/
}