#include "regsupt.h"

char rscid[51];

// Offset: 11
// Size: 148
br_model* BrModelAdd(br_model *model) {
}

// Offset: 173
// Size: 85
br_model* BrModelRemove(br_model *model) {
}

// Offset: 270
// Size: 49
br_model* BrModelFind(char *pattern) {
}

// Offset: 335
// Size: 83
br_model_find_cbfn* BrModelFindHook(br_model_find_cbfn *hook) {
    br_model_find_cbfn *old;
}

// Offset: 433
// Size: 158
br_uint_32 BrModelAddMany(br_model **items, int n) {
    int i;
    int r;
}

// Offset: 609
// Size: 158
br_uint_32 BrModelRemoveMany(br_model **items, int n) {
    int i;
    int r;
}

// Offset: 783
// Size: 55
br_uint_32 BrModelFindMany(char *pattern, br_model **items, int max) {
}

// Offset: 851
// Size: 49
br_uint_32 BrModelCount(char *pattern) {
}

// Offset: 912
// Size: 55
br_uint_32 BrModelEnum(char *pattern, br_model_enum_cbfn *callback, void *arg) {
}

// Offset: 981
// Size: 185
br_material* BrMaterialAdd(br_material *material) {
}

// Offset: 1183
// Size: 88
br_material* BrMaterialRemove(br_material *material) {
}

// Offset: 1286
// Size: 49
br_material* BrMaterialFind(char *pattern) {
}

// Offset: 1354
// Size: 55
br_material_find_cbfn* BrMaterialFindHook(br_material_find_cbfn *hook) {
    br_material_find_cbfn *old;
}

// Offset: 1427
// Size: 164
br_uint_32 BrMaterialAddMany(br_material **items, int n) {
    int i;
    int r;
}

// Offset: 1612
// Size: 164
br_uint_32 BrMaterialRemoveMany(br_material **items, int n) {
    int i;
    int r;
}

// Offset: 1795
// Size: 55
br_uint_32 BrMaterialFindMany(char *pattern, br_material **items, int max) {
}

// Offset: 1866
// Size: 49
br_uint_32 BrMaterialCount(char *pattern) {
}

// Offset: 1930
// Size: 55
br_uint_32 BrMaterialEnum(char *pattern, br_material_enum_cbfn *callback, void *arg) {
}

// Offset: 1994
// Size: 101
br_pixelmap* BrMapAdd(br_pixelmap *pixelmap) {
}

// Offset: 2107
// Size: 88
br_pixelmap* BrMapRemove(br_pixelmap *pixelmap) {
}

// Offset: 2205
// Size: 49
br_pixelmap* BrMapFind(char *pattern) {
}

// Offset: 2268
// Size: 86
br_map_find_cbfn* BrMapFindHook(br_map_find_cbfn *hook) {
    br_map_find_cbfn *old;
}

// Offset: 2367
// Size: 164
br_uint_32 BrMapAddMany(br_pixelmap **items, int n) {
    int i;
    int r;
}

// Offset: 2547
// Size: 164
br_uint_32 BrMapRemoveMany(br_pixelmap **items, int n) {
    int i;
    int r;
}

// Offset: 2725
// Size: 55
br_uint_32 BrMapFindMany(char *pattern, br_pixelmap **items, int max) {
}

// Offset: 2791
// Size: 49
br_uint_32 BrMapCount(char *pattern) {
}

// Offset: 2850
// Size: 55
br_uint_32 BrMapEnum(char *pattern, br_map_enum_cbfn *callback, void *arg) {
}

// Offset: 2916
// Size: 101
br_pixelmap* BrTableAdd(br_pixelmap *pixelmap) {
}

// Offset: 3031
// Size: 88
br_pixelmap* BrTableRemove(br_pixelmap *pixelmap) {
}

// Offset: 3131
// Size: 49
br_pixelmap* BrTableFind(char *pattern) {
}

// Offset: 3196
// Size: 86
br_table_find_cbfn* BrTableFindHook(br_table_find_cbfn *hook) {
    br_table_find_cbfn *old;
}

// Offset: 3297
// Size: 164
br_uint_32 BrTableAddMany(br_pixelmap **items, int n) {
    int i;
    int r;
}

// Offset: 3479
// Size: 164
br_uint_32 BrTableRemoveMany(br_pixelmap **items, int n) {
    int i;
    int r;
}

// Offset: 3659
// Size: 55
br_uint_32 BrTableFindMany(char *pattern, br_pixelmap **items, int max) {
}

// Offset: 3727
// Size: 49
br_uint_32 BrTableCount(char *pattern) {
}

// Offset: 3788
// Size: 55
br_uint_32 BrTableEnum(char *pattern, br_table_enum_cbfn *callback, void *arg) {
}
