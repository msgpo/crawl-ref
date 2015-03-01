// This file has been automatically generated.

#include "AppHdr.h"
#include "tiledef-icons.h"

static unsigned int _tile_icons_count[TILEI_ICONS_MAX - 0] =
{
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    8,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    8,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    1,
    1,
};

unsigned int tile_icons_count(tileidx_t idx)
{
    ASSERT_RANGE(idx, 0, TILEI_ICONS_MAX);
    return _tile_icons_count[idx - 0];
}

static tileidx_t _tile_icons_basetiles[TILEI_ICONS_MAX - 0] =
{
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    32,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    79,
    79,
    79,
    79,
    79,
    79,
    79,
    79,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    87,
    95,
    95,
    95,
};

tileidx_t tile_icons_basetile(tileidx_t idx)
{
    ASSERT_RANGE(idx, 0, TILEI_ICONS_MAX);
    return _tile_icons_basetiles[idx - 0] + 0;
}

static int _tile_icons_probs[TILEI_ICONS_MAX - 0] =
{
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    1,
    2,
    3,
};

int tile_icons_probs(tileidx_t idx)
{
    ASSERT_RANGE(idx, 0, TILEI_ICONS_MAX);
    return _tile_icons_probs[idx - 0];
}

static const char *_tile_icons_name[TILEI_ICONS_MAX - 0] =
{
    "ICONS_FILLER_0",
    "TRAP_NET",
    "MASK_DEEP_WATER",
    "MASK_SHALLOW_WATER",
    "MASK_DEEP_WATER_MURKY",
    "MASK_SHALLOW_WATER_MURKY",
    "MASK_DEEP_WATER_SHOALS",
    "MASK_SHALLOW_WATER_SHOALS",
    "MASK_LAVA",
    "CURSOR",
    "CURSOR2",
    "CURSOR3",
    "TUTORIAL_CURSOR",
    "TRAP_WEB",
    "HEART",
    "GOOD_NEUTRAL",
    "NEUTRAL",
    "ANIMATED_WEAPON",
    "SUMMONED",
    "PERM_SUMMON",
    "POISON",
    "STICKY_FLAME",
    "INNER_FLAME",
    "CONSTRICTED",
    "BERSERK",
    "GLOWING",
    "SLOWED",
    "HASTED",
    "MIGHT",
    "PETRIFYING",
    "PETRIFIED",
    "BLIND",
    "FLEEING",
    "MAY_STAB_BRAND",
    "STAB_BRAND",
    "PAIN_MIRROR",
    "DEATHS_DOOR",
    "RECALL",
    "DRAIN",
    "SOMETHING_UNDER",
    "TRIED",
    "NEW_STAIR",
    "MESH",
    "OOR_MESH",
    "MAGIC_MAP_MESH",
    "TRAVEL_EXCLUSION_FG",
    "TRAVEL_EXCLUSION_CENTRE_FG",
    "NUM0",
    "NUM1",
    "NUM2",
    "NUM3",
    "NUM4",
    "NUM5",
    "NUM6",
    "NUM7",
    "NUM8",
    "NUM9",
    "NUM_MINUS5",
    "NUM_MINUS4",
    "NUM_MINUS3",
    "NUM_MINUS2",
    "NUM_MINUS1",
    "NUM_ZERO",
    "NUM_PLUS1",
    "NUM_PLUS2",
    "NUM_PLUS3",
    "NUM_PLUS4",
    "NUM_PLUS5",
    "DEMON_NUM1",
    "DEMON_NUM2",
    "DEMON_NUM3",
    "DEMON_NUM4",
    "DEMON_NUM5",
    "ITEM_SLOT_SELECTED",
    "MDAM_LIGHTLY_DAMAGED",
    "MDAM_MODERATELY_DAMAGED",
    "MDAM_HEAVILY_DAMAGED",
    "MDAM_SEVERELY_DAMAGED",
    "MDAM_ALMOST_DEAD",
    "TRAVEL_PATH_FROM",
    "TRAVEL_PATH_FROM_1",
    "TRAVEL_PATH_FROM_2",
    "TRAVEL_PATH_FROM_3",
    "TRAVEL_PATH_FROM_4",
    "TRAVEL_PATH_FROM_5",
    "TRAVEL_PATH_FROM_6",
    "TRAVEL_PATH_FROM_7",
    "TRAVEL_PATH_TO",
    "TRAVEL_PATH_TO_1",
    "TRAVEL_PATH_TO_2",
    "TRAVEL_PATH_TO_3",
    "TRAVEL_PATH_TO_4",
    "TRAVEL_PATH_TO_5",
    "TRAVEL_PATH_TO_6",
    "TRAVEL_PATH_TO_7",
    "GOLD_SPARKLES",
    "GOLD_SPARKLES_1",
    "GOLD_SPARKLES_2",
};

const char *tile_icons_name(tileidx_t idx)
{
    ASSERT_RANGE(idx, 0, TILEI_ICONS_MAX);
    return _tile_icons_name[idx - 0];
}

static tile_info _tile_icons_info[TILEI_ICONS_MAX - 0] =
{
    tile_info(32, 32, 0, 0, 0, 0, 32, 32),
    tile_info(32, 32, 1, 1, 32, 0, 62, 30),
    tile_info(32, 32, 0, 16, 62, 0, 94, 16),
    tile_info(32, 32, 0, 16, 94, 0, 126, 16),
    tile_info(32, 32, 0, 16, 126, 0, 158, 16),
    tile_info(32, 32, 0, 16, 158, 0, 190, 16),
    tile_info(32, 32, 0, 16, 190, 0, 222, 16),
    tile_info(32, 32, 0, 16, 222, 0, 254, 16),
    tile_info(32, 32, 0, 16, 254, 0, 286, 16),
    tile_info(32, 32, 0, 0, 286, 0, 318, 32),
    tile_info(32, 32, 0, 0, 318, 0, 350, 32),
    tile_info(32, 32, 0, 0, 350, 0, 382, 32),
    tile_info(32, 32, 0, 0, 382, 0, 414, 32),
    tile_info(32, 32, 0, 0, 414, 0, 446, 32),
    tile_info(32, 32, 21, 1, 446, 0, 457, 9),
    tile_info(32, 32, 24, 1, 446, 9, 454, 18),
    tile_info(32, 32, 24, 1, 446, 18, 454, 27),
    tile_info(32, 32, 1, 0, 457, 0, 466, 13),
    tile_info(32, 32, 1, 1, 457, 13, 463, 19),
    tile_info(32, 32, 1, 1, 457, 19, 463, 25),
    tile_info(32, 32, 26, 0, 466, 0, 472, 11),
    tile_info(32, 32, 25, 0, 466, 11, 473, 22),
    tile_info(32, 32, 24, 0, 473, 0, 481, 11),
    tile_info(32, 32, 21, 1, 473, 11, 484, 20),
    tile_info(32, 32, 19, 22, 473, 20, 486, 30),
    tile_info(32, 32, 24, 0, 486, 0, 494, 11),
    tile_info(32, 32, 25, 0, 486, 11, 493, 22),
    tile_info(32, 32, 25, 0, 494, 0, 501, 11),
    tile_info(32, 32, 25, 0, 494, 11, 501, 22),
    tile_info(32, 32, 25, 0, 501, 0, 508, 11),
    tile_info(32, 32, 25, 0, 501, 11, 508, 22),
    tile_info(32, 32, 21, 2, 501, 22, 512, 29),
    tile_info(32, 32, 28, 0, 512, 0, 516, 12),
    tile_info(32, 32, 24, 0, 512, 12, 520, 24),
    tile_info(32, 32, 19, 0, 520, 0, 533, 11),
    tile_info(32, 32, 24, 0, 520, 11, 528, 22),
    tile_info(32, 32, 25, 0, 520, 22, 527, 31),
    tile_info(32, 32, 23, 0, 533, 0, 542, 10),
    tile_info(32, 32, 25, 0, 533, 10, 540, 21),
    tile_info(32, 32, 0, 23, 533, 21, 549, 30),
    tile_info(8, 16, 0, 2, 549, 0, 556, 12),
    tile_info(32, 32, 23, 1, 549, 12, 558, 21),
    tile_info(32, 32, 0, 0, 558, 0, 590, 32),
    tile_info(32, 32, 0, 0, 590, 0, 622, 32),
    tile_info(32, 32, 0, 0, 622, 0, 654, 32),
    tile_info(32, 32, 0, 0, 654, 0, 686, 32),
    tile_info(32, 32, 0, 0, 686, 0, 718, 32),
    tile_info(8, 14, 0, 2, 718, 0, 726, 9),
    tile_info(6, 14, 0, 2, 718, 9, 724, 18),
    tile_info(8, 14, 0, 2, 718, 18, 726, 27),
    tile_info(8, 14, 0, 2, 726, 0, 734, 10),
    tile_info(8, 14, 0, 1, 726, 10, 734, 21),
    tile_info(8, 14, 0, 2, 726, 21, 734, 31),
    tile_info(8, 14, 0, 1, 734, 0, 742, 10),
    tile_info(8, 14, 0, 2, 734, 10, 742, 20),
    tile_info(8, 14, 0, 1, 734, 20, 742, 30),
    tile_info(8, 14, 0, 2, 742, 0, 750, 10),
    tile_info(32, 32, 15, 20, 742, 10, 756, 20),
    tile_info(32, 32, 15, 19, 742, 20, 756, 31),
    tile_info(32, 32, 16, 20, 756, 0, 769, 10),
    tile_info(32, 32, 16, 20, 756, 10, 769, 19),
    tile_info(32, 32, 17, 20, 756, 19, 768, 28),
    tile_info(32, 32, 21, 20, 769, 0, 777, 9),
    tile_info(32, 32, 18, 20, 769, 9, 780, 18),
    tile_info(32, 32, 17, 20, 769, 18, 781, 27),
    tile_info(32, 32, 17, 20, 781, 0, 793, 10),
    tile_info(32, 32, 16, 19, 781, 10, 794, 21),
    tile_info(32, 32, 16, 20, 781, 21, 794, 31),
    tile_info(32, 32, 1, 21, 794, 0, 805, 10),
    tile_info(32, 32, 1, 21, 794, 10, 805, 20),
    tile_info(32, 32, 1, 21, 794, 20, 805, 30),
    tile_info(32, 32, 1, 21, 805, 0, 816, 10),
    tile_info(32, 32, 1, 21, 805, 10, 816, 20),
    tile_info(32, 32, 0, 0, 816, 0, 848, 32),
    tile_info(32, 32, 0, 30, 848, 0, 880, 2),
    tile_info(32, 32, 0, 30, 848, 2, 880, 4),
    tile_info(32, 32, 0, 30, 848, 4, 880, 6),
    tile_info(32, 32, 0, 30, 848, 6, 880, 8),
    tile_info(32, 32, 0, 30, 848, 8, 880, 10),
    tile_info(32, 32, 12, 0, 848, 10, 856, 26),
    tile_info(32, 32, 16, 2, 880, 0, 896, 12),
    tile_info(32, 32, 16, 12, 880, 12, 896, 20),
    tile_info(32, 32, 18, 16, 896, 0, 908, 16),
    tile_info(32, 32, 12, 16, 908, 0, 916, 16),
    tile_info(32, 32, 0, 18, 908, 16, 924, 28),
    tile_info(32, 32, 0, 12, 924, 0, 940, 8),
    tile_info(32, 32, 2, 0, 924, 8, 936, 24),
    tile_info(32, 32, 12, 0, 940, 0, 948, 16),
    tile_info(32, 32, 16, 2, 940, 16, 956, 28),
    tile_info(32, 32, 16, 12, 956, 0, 972, 8),
    tile_info(32, 32, 18, 16, 956, 8, 968, 24),
    tile_info(32, 32, 12, 16, 972, 0, 980, 16),
    tile_info(32, 32, 0, 18, 972, 16, 988, 28),
    tile_info(32, 32, 0, 12, 988, 0, 1004, 8),
    tile_info(32, 32, 2, 0, 988, 8, 1000, 24),
    tile_info(32, 32, 0, 0, 0, 32, 32, 64),
    tile_info(32, 32, 2, 1, 32, 32, 61, 61),
    tile_info(32, 32, 3, 1, 61, 32, 89, 62),
};

tile_info &tile_icons_info(tileidx_t idx)
{
    ASSERT_RANGE(idx, 0, TILEI_ICONS_MAX);
    return _tile_icons_info[idx - 0];
}


typedef pair<const char*, tileidx_t> _name_pair;

static _name_pair icons_name_pairs[] =
{
    _name_pair("animated_weapon", 17 + 0),
    _name_pair("berserk", 24 + 0),
    _name_pair("blind", 31 + 0),
    _name_pair("constricted", 23 + 0),
    _name_pair("cursor", 9 + 0),
    _name_pair("cursor2", 10 + 0),
    _name_pair("cursor3", 11 + 0),
    _name_pair("deaths_door", 36 + 0),
    _name_pair("demon_num1", 68 + 0),
    _name_pair("demon_num2", 69 + 0),
    _name_pair("demon_num3", 70 + 0),
    _name_pair("demon_num4", 71 + 0),
    _name_pair("demon_num5", 72 + 0),
    _name_pair("drain", 38 + 0),
    _name_pair("fleeing", 32 + 0),
    _name_pair("glowing", 25 + 0),
    _name_pair("gold_sparkles", 95 + 0),
    _name_pair("good_neutral", 15 + 0),
    _name_pair("hasted", 27 + 0),
    _name_pair("heart", 14 + 0),
    _name_pair("inner_flame", 22 + 0),
    _name_pair("item_slot_selected", 73 + 0),
    _name_pair("magic_map_mesh", 44 + 0),
    _name_pair("mask_deep_water", 2 + 0),
    _name_pair("mask_deep_water_murky", 4 + 0),
    _name_pair("mask_deep_water_shoals", 6 + 0),
    _name_pair("mask_lava", 8 + 0),
    _name_pair("mask_shallow_water", 3 + 0),
    _name_pair("mask_shallow_water_murky", 5 + 0),
    _name_pair("mask_shallow_water_shoals", 7 + 0),
    _name_pair("may_stab_brand", 33 + 0),
    _name_pair("mdam_almost_dead", 78 + 0),
    _name_pair("mdam_heavily_damaged", 76 + 0),
    _name_pair("mdam_lightly_damaged", 74 + 0),
    _name_pair("mdam_moderately_damaged", 75 + 0),
    _name_pair("mdam_severely_damaged", 77 + 0),
    _name_pair("mesh", 42 + 0),
    _name_pair("might", 28 + 0),
    _name_pair("neutral", 16 + 0),
    _name_pair("new_stair", 41 + 0),
    _name_pair("num0", 47 + 0),
    _name_pair("num1", 48 + 0),
    _name_pair("num2", 49 + 0),
    _name_pair("num3", 50 + 0),
    _name_pair("num4", 51 + 0),
    _name_pair("num5", 52 + 0),
    _name_pair("num6", 53 + 0),
    _name_pair("num7", 54 + 0),
    _name_pair("num8", 55 + 0),
    _name_pair("num9", 56 + 0),
    _name_pair("num_minus1", 61 + 0),
    _name_pair("num_minus2", 60 + 0),
    _name_pair("num_minus3", 59 + 0),
    _name_pair("num_minus4", 58 + 0),
    _name_pair("num_minus5", 57 + 0),
    _name_pair("num_plus1", 63 + 0),
    _name_pair("num_plus2", 64 + 0),
    _name_pair("num_plus3", 65 + 0),
    _name_pair("num_plus4", 66 + 0),
    _name_pair("num_plus5", 67 + 0),
    _name_pair("num_zero", 62 + 0),
    _name_pair("oor_mesh", 43 + 0),
    _name_pair("pain_mirror", 35 + 0),
    _name_pair("perm_summon", 19 + 0),
    _name_pair("petrified", 30 + 0),
    _name_pair("petrifying", 29 + 0),
    _name_pair("poison", 20 + 0),
    _name_pair("recall", 37 + 0),
    _name_pair("slowed", 26 + 0),
    _name_pair("something_under", 39 + 0),
    _name_pair("stab_brand", 34 + 0),
    _name_pair("sticky_flame", 21 + 0),
    _name_pair("summoned", 18 + 0),
    _name_pair("trap_net", 1 + 0),
    _name_pair("trap_web", 13 + 0),
    _name_pair("travel_exclusion_centre_fg", 46 + 0),
    _name_pair("travel_exclusion_fg", 45 + 0),
    _name_pair("travel_path_from", 79 + 0),
    _name_pair("travel_path_to", 87 + 0),
    _name_pair("tried", 40 + 0),
    _name_pair("tutorial_cursor", 12 + 0),
};

bool tile_icons_index(const char *str, tileidx_t *idx)
{
    ASSERT(str);
    if (!str)
        return false;

    string lc = str;
    for (unsigned int i = 0; i < lc.size(); i++)
        lc[i] = tolower(lc[i]);

    int num_pairs = sizeof(icons_name_pairs) / sizeof(icons_name_pairs[0]);
    bool result = binary_search<const char *, tileidx_t>(
       lc.c_str(), &icons_name_pairs[0], num_pairs, &strcmp, idx);
    return result;
}

bool tile_icons_equal(tileidx_t tile, tileidx_t idx)
{
    ASSERT_RANGE(tile, 0, TILEI_ICONS_MAX);
    return idx >= tile && idx < tile + tile_icons_count(tile);
}


typedef pair<tile_variation, tileidx_t> _colour_pair;

static _colour_pair icons_colour_pairs[] =
{
    _colour_pair(tile_variation(0, 0), 0),
};

tileidx_t tile_icons_coloured(tileidx_t idx, int col)
{
    int num_pairs = sizeof(icons_colour_pairs) / sizeof(icons_colour_pairs[0]);
    tile_variation key(idx, col);
    tileidx_t found;
    bool result = binary_search<tile_variation, tileidx_t>(
       key, &icons_colour_pairs[0], num_pairs,
       &tile_variation::cmp, &found);
    return (result ? found : idx);
}

