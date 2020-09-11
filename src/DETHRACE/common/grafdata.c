#include "grafdata.h"
#include <stdlib.h>

#include "errors.h"
#include "globvars.h"
#include "pc-dos/dossys.h"

tGraf_data gGraf_data[2] = {
    { 320,
        200,
        21,
        18,
        8,
        54,
        167,
        199,
        17,
        24,
        { 1,
            3,
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
            19,
            21,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0 },
        134,
        { 57, 182 },
        { 85, 210 },
        118,
        67,
        58,
        147,
        124,
        190,
        58,
        270,
        124,
        15,
        10,
        350,
        220,
        { 38, 166 },
        { 29, 96 },
        66,
        58,
        62,
        30,
        174,
        174,
        30,
        174,
        82,
        95,
        260,
        61,
        282,
        28,
        149,
        20,
        75,
        65,
        72,
        132,
        125,
        137,
        207,
        71,
        39,
        15,
        62,
        78,
        56,
        41,
        280,
        141,
        60,
        165,
        235,
        3,
        6,
        57,
        39,
        112,
        110,
        174,
        106,
        0,
        12,
        6,
        60,
        42,
        116,
        89,
        67,
        111,
        67,
        137,
        67,
        123,
        122,
        41,
        132,
        60,
        25,
        188,
        192,
        233,
        52,
        59,
        76,
        83,
        101,
        108,
        20,
        124,
        135,
        172,
        183,
        121,
        163,
        168,
        211,
        120,
        169,
        126,
        83,
        238,
        178,
        191,
        181,
        11,
        20,
        298,
        149,
        4,
        22,
        40,
        18,
        4,
        137,
        65,
        133,
        277,
        65,
        31,
        277,
        127,
        31,
        131,
        318,
        2,
        1,
        1,
        5,
        5,
        70,
        182,
        182,
        70,
        100,
        126,
        152,
        174,
        200,
        226,
        252,
        278,
        170,
        42,
        90,
        185,
        224,
        290,
        66,
        13,
        40,
        292,
        4294967293,
        8,
        126,
        163,
        62,
        60,
        270,
        118,
        67,
        92,
        200,
        305,
        35,
        23,
        58,
        152,
        48,
        113,
        170,
        235,
        12,
        37,
        153,
        48,
        152,
        3,
        3,
        2,
        53,
        51,
        0,
        14,
        9,
        1,
        2,
        0,
        7,
        2,
        8,
        5,
        49,
        8,
        { 27, 67 },
        { 36, 76 },
        { 45, 85 },
        288,
        318,
        7,
        312,
        1,
        2,
        2,
        1,
        309,
        4,
        132,
        50,
        53,
        211,
        150,
        171,
        55,
        85,
        162,
        195,
        235,
        51,
        13,
        141,
        81,
        141,
        44,
        8,
        100,
        194,
        22 },
    { 640,
        480,
        21,
        18,
        8,
        54,
        167,
        199,
        17,
        24,
        { 1,
            3,
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
            19,
            21,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0 },
        134,
        { 57, 182 },
        { 85, 210 },
        118,
        67,
        58,
        147,
        124,
        190,
        58,
        270,
        124,
        32,
        24,
        704,
        528,
        { 38, 166 },
        { 29, 96 },
        66,
        58,
        62,
        30,
        174,
        174,
        30,
        174,
        82,
        95,
        260,
        61,
        282,
        28,
        149,
        20,
        75,
        65,
        72,
        132,
        125,
        137,
        207,
        71,
        39,
        15,
        62,
        78,
        56,
        56,
        268,
        141,
        60,
        165,
        235,
        3,
        6,
        57,
        39,
        112,
        110,
        174,
        106,
        0,
        12,
        6,
        60,
        42,
        116,
        89,
        67,
        111,
        67,
        137,
        67,
        123,
        122,
        41,
        132,
        60,
        25,
        188,
        192,
        233,
        52,
        59,
        76,
        83,
        101,
        108,
        20,
        124,
        135,
        172,
        183,
        121,
        163,
        168,
        211,
        120,
        169,
        126,
        83,
        238,
        178,
        191,
        181,
        11,
        20,
        298,
        149,
        8,
        44,
        96,
        43,
        10,
        137,
        65,
        133,
        277,
        65,
        31,
        277,
        127,
        31,
        131,
        636,
        5,
        2,
        2,
        10,
        12,
        140,
        437,
        437,
        140,
        200,
        252,
        304,
        348,
        400,
        452,
        504,
        556,
        408,
        42,
        90,
        185,
        224,
        290,
        66,
        13,
        40,
        292,
        4294967293,
        8,
        126,
        163,
        62,
        60,
        270,
        118,
        67,
        92,
        200,
        305,
        35,
        23,
        58,
        152,
        48,
        113,
        170,
        235,
        12,
        37,
        150,
        48,
        152,
        6,
        7,
        4,
        106,
        102,
        0,
        31,
        18,
        2,
        4,
        0,
        17,
        4,
        18,
        12,
        98,
        19,
        { 65, 161 },
        { 86, 182 },
        { 107, 203 },
        576,
        636,
        18,
        624,
        3,
        2,
        4,
        3,
        618,
        11,
        132,
        50,
        53,
        211,
        150,
        171,
        55,
        85,
        162,
        195,
        235,
        51,
        13,
        141,
        81,
        141,
        44,
        16,
        200,
        388,
        55 }
};

tGraf_data* gCurrent_graf_data;
int gGraf_data_index;

// IDA: void __cdecl CalcGrafDataIndex()
void CalcGrafDataIndex() {
    int i;

    for (i = 0; i < 2; i++) {
        if (gGraf_specs[gGraf_spec_index].total_width == gGraf_data[i].width && gGraf_specs[gGraf_spec_index].total_height == gGraf_data[i].height) {
            gReal_graf_data_index = i;
            gGraf_data_index = i;
            gCurrent_graf_data = &gGraf_data[i];
            return;
        }
    }
    FatalError(0x18);
}
