/*
Copyright (c) 2019-2020 Péter Magyar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef ENTITY_DATA_MANAGER_H
#define ENTITY_DATA_MANAGER_H

#include "core/object.h"

#include "core/array.h"
#include "core/engine.h"
#include "core/hash_map.h"
#include "core/io/json.h"
#include "core/variant.h"
#include "core/vector.h"

#include "core/resource.h"
#include "core/ustring.h"
#include "scene/main/node.h"

#include "core/bind/core_bind.h"

#include "../item_enums.h"

#include "../data/entities/xp_data.h"

#include "../world_spells/world_spell_data.h"

class Aura;
class Spell;
class EntityData;
class CraftRecipe;
class ItemTemplate;
class EntityResourceData;
class EntitySkillData;
class EntityCreateInfo;
class WorldSpellData;
class SpellCastInfo;

class EntityDataManager : public Object {
	GDCLASS(EntityDataManager, Object);

public:
	static EntityDataManager *get_instance();

	bool get_automatic_load();
	void set_automatic_load(bool load);

	Ref<Aura> get_skill_for_armor_type(int index);
	void set_skill_for_armor_type(int index, const Ref<Aura> &aura);

	String get_xp_data_path();
	void set_xp_data_path(String path);
	Ref<XPData> get_xp_data();

	String get_entity_resources_folder();
	void set_entity_resources_folder(String folder);
	Vector<Ref<EntityResourceData> > *get_entity_resources();
	Ref<EntityResourceData> get_entity_resource(int class_id);
	Ref<EntityResourceData> get_entity_resource_index(int index);
	int get_entity_resource_count();
	void add_entity_resource(const Ref<EntityResourceData> &cls);

	String get_entity_skills_folder();
	void set_entity_skills_folder(String folder);
	Vector<Ref<EntitySkillData> > *get_entity_skills();
	Ref<EntitySkillData> get_entity_skill(int class_id);
	Ref<EntitySkillData> get_entity_skill_index(int index);
	int get_entity_skill_count();
	void add_entity_skill(const Ref<EntitySkillData> &cls);

	String get_entity_datas_folder();
	void set_entity_datas_folder(String folder);
	Vector<Ref<EntityData> > *get_entity_datas();
	Ref<EntityData> get_entity_data(int class_id);
	Ref<EntityData> get_entity_data_index(int index);
	int get_entity_data_count();
	void add_entity_data(const Ref<EntityData> &cls);

	String get_spells_folder();
	void set_spells_folder(String folder);
	Vector<Ref<Spell> > *get_spells();
	Ref<Spell> get_spell(int spell_id);
	Ref<Spell> get_spell_index(int index);
	int get_spell_count();
	void add_spell(const Ref<Spell> &spell);

	String get_auras_folder();
	void set_auras_folder(String folder);
	Vector<Ref<Aura> > *get_auras();
	Ref<Aura> get_aura(int aura_id);
	Ref<Aura> get_aura_index(int index);
	int get_aura_count();
	void add_aura(const Ref<Aura> &aura);

	String get_world_spell_datas_folder();
	void set_world_spell_datas_folder(String folder);
	Vector<Ref<WorldSpellData> > *get_world_spell_datas();
	Ref<WorldSpellData> get_world_spell_data(int class_id);
	Ref<WorldSpellData> get_world_spell_data_index(int index);
	int get_world_spell_data_count();
	void add_world_spell_data(const Ref<WorldSpellData> &cls);

	String get_craft_data_folder();
	void set_craft_data_folder(String folder);
	Vector<Ref<CraftRecipe> > *get_craft_datas();
	Ref<CraftRecipe> get_craft_data(int craft_id);
	Ref<CraftRecipe> get_craft_data_index(int index);
	int get_craft_data_count();
	void add_craft_data(const Ref<CraftRecipe> &aura);

	String get_item_template_folder();
	void set_item_template_folder(String folder);
	Vector<Ref<ItemTemplate> > *get_item_templates();
	void add_item_template(const Ref<ItemTemplate> &aura);
	Ref<ItemTemplate> get_item_template(int item_id);
	Ref<ItemTemplate> get_item_template_index(int index);
	int get_item_template_count();

	String get_mob_data_folder();
	void set_mob_data_folder(String folder);
	Vector<Ref<EntityData> > *get_mob_datas();
	void add_mob_data(const Ref<EntityData> &aura);
	Ref<EntityData> get_mob_data(int item_id);
	Ref<EntityData> get_mob_data_index(int index);
	int get_mob_data_count();

	String get_player_character_data_folder();
	void set_player_character_data_folder(String folder);
	Vector<Ref<EntityData> > *get_player_character_datas();
	void add_player_character_data(const Ref<EntityData> &aura);
	Ref<EntityData> get_player_character_data(int item_id);
	Ref<EntityData> get_player_character_data_index(int index);
	int get_player_character_data_count();

	void load_all();
	void load_entity_resources();
	void load_entity_skills();
	void load_xp_data();
	void load_spells();
	void load_auras();
	void load_world_spell_datas();
	void load_characters();
	void load_craft_datas();
	void load_item_templates();
	void load_mob_datas();
	void load_player_character_datas();

	void request_entity_spawn(const Ref<EntityCreateInfo> &info);
	void request_world_spell_spawn(const Ref<WorldSpellData> &data, const Ref<SpellCastInfo> &info);

	EntityDataManager();
	~EntityDataManager();

protected:
	static void _bind_methods();

private:
	String _xp_data_path;
	Ref<XPData> _xp_data;

	String _entity_resources_folder;
	Vector<Ref<EntityResourceData> > _entity_resources;
	HashMap<int, Ref<EntityResourceData> > _entity_resource_map;

	String _entity_skills_folder;
	Vector<Ref<EntitySkillData> > _entity_skills;
	HashMap<int, Ref<EntitySkillData> > _entity_skill_map;

	String _entity_datas_folder;
	Vector<Ref<EntityData> > _entity_datas;
	HashMap<int, Ref<EntityData> > _entity_data_map;

	String _spells_folder;
	Vector<Ref<Spell> > _spells;
	HashMap<int, Ref<Spell> > _spell_map;

	String _auras_folder;
	Vector<Ref<Aura> > _auras;
	HashMap<int, Ref<Aura> > _aura_map;

	String _world_spell_datas_folder;
	Vector<Ref<WorldSpellData> > _world_spell_datas;
	HashMap<int, Ref<WorldSpellData> > _world_spell_data_map;

	String _craft_data_folder;
	Vector<Ref<CraftRecipe> > _craft_datas;
	HashMap<int, Ref<CraftRecipe> > _craft_data_map;

	String _item_template_folder;
	Vector<Ref<ItemTemplate> > _item_templates;
	HashMap<int, Ref<ItemTemplate> > _item_template_map;

	String _mob_data_folder;
	Vector<Ref<EntityData> > _mob_datas;
	HashMap<int, Ref<EntityData> > _mob_data_map;

	String _player_character_data_folder;
	Vector<Ref<EntityData> > _player_character_datas;
	HashMap<int, Ref<EntityData> > _player_character_data_map;

	Ref<Aura> _armor_type_skills[ItemEnums::ARMOR_TYPE_MAX];

	static EntityDataManager *instance;

	bool _automatic_load;
};

#endif
