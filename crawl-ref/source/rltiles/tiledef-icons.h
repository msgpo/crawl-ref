// This file has been automatically generated.

#ifndef TILEDEF_ICONS_H
#define TILEDEF_ICONS_H

#include "tiledef_defines.h"



enum tile_icons_type
{
    TILEI_ICONS_FILLER_0 = 0,
    TILEI_TRAP_NET,
    TILEI_MASK_DEEP_WATER,
    TILEI_MASK_SHALLOW_WATER,
    TILEI_MASK_DEEP_WATER_MURKY,
    TILEI_MASK_SHALLOW_WATER_MURKY,
    TILEI_MASK_DEEP_WATER_SHOALS,
    TILEI_MASK_SHALLOW_WATER_SHOALS,
    TILEI_MASK_LAVA,
    TILEI_CURSOR,
    TILEI_CURSOR2,
    TILEI_CURSOR3,
    TILEI_TUTORIAL_CURSOR,
    TILEI_TRAP_WEB,
    TILEI_HEART,
    TILEI_GOOD_NEUTRAL,
    TILEI_NEUTRAL,
    TILEI_ANIMATED_WEAPON,
    TILEI_SUMMONED,
    TILEI_PERM_SUMMON,
    TILEI_POISON,
    TILEI_STICKY_FLAME,
    TILEI_INNER_FLAME,
    TILEI_CONSTRICTED,
    TILEI_BERSERK,
    TILEI_GLOWING,
    TILEI_SLOWED,
    TILEI_HASTED,
    TILEI_MIGHT,
    TILEI_PETRIFYING,
    TILEI_PETRIFIED,
    TILEI_BLIND,
    TILEI_FLEEING,
    TILEI_MAY_STAB_BRAND,
    TILEI_STAB_BRAND,
    TILEI_PAIN_MIRROR,
    TILEI_DEATHS_DOOR,
    TILEI_RECALL,
    TILEI_DRAIN,
    TILEI_SOMETHING_UNDER,
    TILEI_TRIED,
    TILEI_NEW_STAIR,
    TILEI_MESH,
    TILEI_OOR_MESH,
    TILEI_MAGIC_MAP_MESH,
    TILEI_TRAVEL_EXCLUSION_FG,
    TILEI_TRAVEL_EXCLUSION_CENTRE_FG,
    TILEI_NUM0,
    TILEI_NUM1,
    TILEI_NUM2,
    TILEI_NUM3,
    TILEI_NUM4,
    TILEI_NUM5,
    TILEI_NUM6,
    TILEI_NUM7,
    TILEI_NUM8,
    TILEI_NUM9,
    TILEI_NUM_MINUS5,
    TILEI_NUM_MINUS4,
    TILEI_NUM_MINUS3,
    TILEI_NUM_MINUS2,
    TILEI_NUM_MINUS1,
    TILEI_NUM_ZERO,
    TILEI_NUM_PLUS1,
    TILEI_NUM_PLUS2,
    TILEI_NUM_PLUS3,
    TILEI_NUM_PLUS4,
    TILEI_NUM_PLUS5,
    TILEI_DEMON_NUM1,
    TILEI_DEMON_NUM2,
    TILEI_DEMON_NUM3,
    TILEI_DEMON_NUM4,
    TILEI_DEMON_NUM5,
    TILEI_ITEM_SLOT_SELECTED,
    TILEI_MDAM_LIGHTLY_DAMAGED,
    TILEI_MDAM_MODERATELY_DAMAGED,
    TILEI_MDAM_HEAVILY_DAMAGED,
    TILEI_MDAM_SEVERELY_DAMAGED,
    TILEI_MDAM_ALMOST_DEAD,
    TILEI_TRAVEL_PATH_FROM,
    TILEI_TRAVEL_PATH_FROM_1,
    TILEI_TRAVEL_PATH_FROM_2,
    TILEI_TRAVEL_PATH_FROM_3,
    TILEI_TRAVEL_PATH_FROM_4,
    TILEI_TRAVEL_PATH_FROM_5,
    TILEI_TRAVEL_PATH_FROM_6,
    TILEI_TRAVEL_PATH_FROM_7,
    TILEI_TRAVEL_PATH_TO,
    TILEI_TRAVEL_PATH_TO_1,
    TILEI_TRAVEL_PATH_TO_2,
    TILEI_TRAVEL_PATH_TO_3,
    TILEI_TRAVEL_PATH_TO_4,
    TILEI_TRAVEL_PATH_TO_5,
    TILEI_TRAVEL_PATH_TO_6,
    TILEI_TRAVEL_PATH_TO_7,
    TILEI_ICONS_MAX
};

unsigned int tile_icons_count(tileidx_t idx);
tileidx_t tile_icons_basetile(tileidx_t idx);
int tile_icons_probs(tileidx_t idx);
const char *tile_icons_name(tileidx_t idx);
tile_info &tile_icons_info(tileidx_t idx);
bool tile_icons_index(const char *str, tileidx_t *idx);
bool tile_icons_equal(tileidx_t tile, tileidx_t idx);
tileidx_t tile_icons_coloured(tileidx_t idx, int col);

#endif

