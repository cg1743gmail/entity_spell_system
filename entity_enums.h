#ifndef ENTITY_ENUMS_H
#define ENTITY_ENUMS_H

#include "core/object.h"
#include "core/ustring.h"

class EntityEnums : public Object {
	GDCLASS(EntityEnums, Object);

public:
	static const String BINDING_STRING_PLAYER_RESOURCE_TYPES;
	static const String BINDING_STRING_ENTITY_TYPES;
	static const String BINDING_STRING_ENTITY_STATE_TYPES;
    static const String BINDING_STRING_CHARCATER_SKELETON_POINTS;
    static const String BINDING_STRING_AI_STATES;

	enum PlayerResourceTypes {
		PLAYER_RESOURCE_TYPES_NONE,
		PLAYER_RESOURCE_TYPES_RAGE,
		PLAYER_RESOURCE_TYPES_MANA,
		PLAYER_RESOURCE_TYPES_ENERGY,
		PLAYER_RESOURCE_TYPES_TIME_ANOMALY,
	};

	enum EntityType {
		ENITIY_TYPE_NONE,
		ENITIY_TYPE_PLAYER,
		ENITIY_TYPE_AI,
		ENITIY_TYPE_MOB
	};

	enum EntityStateTypeFlags {
		ENTITY_STATE_TYPE_FLAG_NONE = 0,
		ENTITY_STATE_TYPE_FLAG_STUN = 1 << 0,
		ENTITY_STATE_TYPE_FLAG_ROOT = 1 << 1,
		ENTITY_STATE_TYPE_FLAG_FROZEN = 1 << 2,
		ENTITY_STATE_TYPE_FLAG_SILENCED = 1 << 3,
		ENTITY_STATE_TYPE_FLAG_DISORIENTED = 1 << 4,
		ENTITY_STATE_TYPE_FLAG_FEARED = 1 << 5,
		ENTITY_STATE_TYPE_FLAG_BURNING = 1 << 6,
		ENTITY_STATE_TYPE_FLAG_COLD = 1 << 7,
		ENTITY_STATE_TYPE_FLAG_CURSED = 1 << 8,
		ENTITY_STATE_TYPE_FLAG_PACIFIED = 1 << 9,
	};

	enum EntityStateTypeIndexes {
		ENTITY_STATE_TYPE_INDEX_NONE = 0,
		ENTITY_STATE_TYPE_INDEX_STUN = 1,
		ENTITY_STATE_TYPE_INDEX_ROOT = 2,
		ENTITY_STATE_TYPE_INDEX_FROZEN = 3,
		ENTITY_STATE_TYPE_INDEX_SILENCED = 4,
		ENTITY_STATE_TYPE_INDEX_DISORIENTED = 5,
		ENTITY_STATE_TYPE_INDEX_FEARED = 6,
		ENTITY_STATE_TYPE_INDEX_BURNING = 7,
		ENTITY_STATE_TYPE_INDEX_COLD = 8,
		ENTITY_STATE_TYPE_INDEX_CURSED = 9,
		ENTITY_STATE_TYPE_INDEX_PACIFIED = 10,

		ENTITY_STATE_TYPE_INDEX_MAX = 11,
	};

	static EntityStateTypeFlags get_state_flag_for_index(int index) {
		switch (index) {
			case ENTITY_STATE_TYPE_INDEX_STUN:
				return ENTITY_STATE_TYPE_FLAG_STUN;
			case ENTITY_STATE_TYPE_INDEX_ROOT:
				return ENTITY_STATE_TYPE_FLAG_ROOT;
			case ENTITY_STATE_TYPE_INDEX_FROZEN:
				return ENTITY_STATE_TYPE_FLAG_FROZEN;
			case ENTITY_STATE_TYPE_INDEX_SILENCED:
				return ENTITY_STATE_TYPE_FLAG_SILENCED;
			case ENTITY_STATE_TYPE_INDEX_DISORIENTED:
				return ENTITY_STATE_TYPE_FLAG_DISORIENTED;
			case ENTITY_STATE_TYPE_INDEX_FEARED:
				return ENTITY_STATE_TYPE_FLAG_FEARED;
			case ENTITY_STATE_TYPE_INDEX_BURNING:
				return ENTITY_STATE_TYPE_FLAG_BURNING;
			case ENTITY_STATE_TYPE_INDEX_COLD:
				return ENTITY_STATE_TYPE_FLAG_COLD;
			case ENTITY_STATE_TYPE_INDEX_CURSED:
				return ENTITY_STATE_TYPE_FLAG_CURSED;
			case ENTITY_STATE_TYPE_INDEX_PACIFIED:
				return ENTITY_STATE_TYPE_FLAG_PACIFIED;
		}

		return ENTITY_STATE_TYPE_FLAG_NONE;
	}
    
    enum CharacterSkeletonPoints {
		SKELETON_POINT_ROOT = 0,
		SKELETON_POINT_PELVIS = 1,
		SKELETON_POINT_SPINE = 2,
		SKELETON_POINT_SPINE_1 = 3,
		SKELETON_POINT_SPINE_2 = 4,
		SKELETON_POINT_NECK = 5,
		SKELETON_POINT_HEAD = 6,

		SKELETON_POINT_LEFT_CLAVICLE = 7,
		SKELETON_POINT_LEFT_UPPER_ARM = 8,
		SKELETON_POINT_LEFT_FOREARM = 9,
		SKELETON_POINT_LEFT_HAND = 10,
		SKELETON_POINT_LEFT_THUMB_BASE = 11,
		SKELETON_POINT_LEFT_THUMB_END = 12,
		SKELETON_POINT_LEFT_FINGERS_BASE = 13,
		SKELETON_POINT_LEFT_FINGERS_END = 14,

		SKELETON_POINT_RIGHT_CLAVICLE = 15,
		SKELETON_POINT_RIGHT_UPPER_ARM = 16,
		SKELETON_POINT_RIGHT_FOREARM = 17,
		SKELETON_POINT_RIGHT_HAND = 18,
		SKELETON_POINT_RIGHT_THUMB_BASE = 19,
		SKELETON_POINT_RIGHT_THUMB_END = 20,
		SKELETON_POINT_RIGHT_FINGERS_BASE = 21,
		SKELETON_POINT_RIGHT_FINGERS_END = 22,

		SKELETON_POINT_LEFT_THIGH = 23,
		SKELETON_POINT_LEFT_CALF = 24,
		SKELETON_POINT_LEFT_FOOT = 25,

		SKELETON_POINT_RIGHT_THIGH = 26,
		SKELETON_POINT_RIGHT_CALF = 27,
		SKELETON_POINT_RIGHT_FOOT = 28,

		SKELETON_POINTS_MAX = 29,
	};

	enum AIStates {
		AI_STATE_OFF,
		AI_STATE_REST,
		AI_STATE_REGENERATE,
		AI_STATE_ATTACK,
	};

	EntityEnums() {}

protected:
	static void _bind_methods() {
		BIND_ENUM_CONSTANT(PLAYER_RESOURCE_TYPES_NONE);
		BIND_ENUM_CONSTANT(PLAYER_RESOURCE_TYPES_RAGE);
		BIND_ENUM_CONSTANT(PLAYER_RESOURCE_TYPES_MANA);
		BIND_ENUM_CONSTANT(PLAYER_RESOURCE_TYPES_ENERGY);
		BIND_ENUM_CONSTANT(PLAYER_RESOURCE_TYPES_TIME_ANOMALY);

		BIND_ENUM_CONSTANT(ENITIY_TYPE_NONE);
		BIND_ENUM_CONSTANT(ENITIY_TYPE_PLAYER);
		BIND_ENUM_CONSTANT(ENITIY_TYPE_AI);
		BIND_ENUM_CONSTANT(ENITIY_TYPE_MOB);

		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_NONE);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_STUN);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_ROOT);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_FROZEN);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_SILENCED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_DISORIENTED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_FEARED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_BURNING);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_COLD);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_CURSED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_FLAG_PACIFIED);

		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_NONE);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_STUN);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_ROOT);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_FROZEN);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_SILENCED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_DISORIENTED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_FEARED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_BURNING);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_COLD);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_CURSED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_PACIFIED);
		BIND_ENUM_CONSTANT(ENTITY_STATE_TYPE_INDEX_MAX);
        
        BIND_ENUM_CONSTANT(SKELETON_POINT_ROOT);
		BIND_ENUM_CONSTANT(SKELETON_POINT_PELVIS);
		BIND_ENUM_CONSTANT(SKELETON_POINT_SPINE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_SPINE_1);
		BIND_ENUM_CONSTANT(SKELETON_POINT_SPINE_2);
		BIND_ENUM_CONSTANT(SKELETON_POINT_NECK);
		BIND_ENUM_CONSTANT(SKELETON_POINT_HEAD);

		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_CLAVICLE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_UPPER_ARM);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_FOREARM);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_HAND);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_THUMB_BASE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_THUMB_END);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_FINGERS_BASE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_FINGERS_END);

		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_CLAVICLE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_UPPER_ARM);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_FOREARM);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_HAND);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_THUMB_BASE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_THUMB_END);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_FINGERS_BASE);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_FINGERS_END);

		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_THIGH);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_CALF);
		BIND_ENUM_CONSTANT(SKELETON_POINT_LEFT_FOOT);

		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_THIGH);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_CALF);
		BIND_ENUM_CONSTANT(SKELETON_POINT_RIGHT_FOOT);

		BIND_ENUM_CONSTANT(SKELETON_POINTS_MAX);


		BIND_ENUM_CONSTANT(AI_STATE_OFF);
		BIND_ENUM_CONSTANT(AI_STATE_REST);
		BIND_ENUM_CONSTANT(AI_STATE_REGENERATE);
		BIND_ENUM_CONSTANT(AI_STATE_ATTACK);
	}
};

VARIANT_ENUM_CAST(EntityEnums::EntityType);
VARIANT_ENUM_CAST(EntityEnums::PlayerResourceTypes);
VARIANT_ENUM_CAST(EntityEnums::EntityStateTypeFlags);
VARIANT_ENUM_CAST(EntityEnums::EntityStateTypeIndexes);
VARIANT_ENUM_CAST(EntityEnums::CharacterSkeletonPoints);
VARIANT_ENUM_CAST(EntityEnums::AIStates);

#endif
