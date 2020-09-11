#include "displays.h"
#include "brender.h"
#include "common/flicplay.h"
#include "common/globvars.h"
#include "common/graphics.h"
#include <stdlib.h>

br_font* gBR_fonts[4];
tQueued_headup gQueued_headups[4];
int gOld_times[10];
int gLast_fancy_headup;
tU32 gLast_time_earn_time;
tU32 gLast_centre_headup;
tU32 gLast_fancy_time;
int gQueued_headup_count;
tU32 gLast_earn_time;
tU32 gLast_time_credit_amount;
int gLast_credit_amount;
tDR_font* gCached_font;
int gLast_time_credit_headup;
int gLast_fancy_index;
int gLast_credit_headup;
tHeadup gHeadups[15];
int gLaps_headup;
int gCar_kill_count_headup;
int gTimer_headup;
int gTime_awarded_headup;
int gPed_kill_count_headup;
int gDim_amount;
br_pixelmap* gHeadup_images[31];
int gNet_cash_headup;
int gNet_ped_headup;
int gCredits_lost_headup;
int gCredits_won_headup;

// Offset: 0
// Size: 56
void GetTimerString(char* pStr, int pFudge_colon) {
    NOT_IMPLEMENTED();
}

// Offset: 56
// Size: 116
void InitHeadups() {
    int i;
    LOG_TRACE("()");
    for (i = 0; i < 15; i++) {
        gHeadups[i].type = 0;
    }
    gBR_fonts[0] = BrFontProp7x9;
    gBR_fonts[1] = BrFontFixed3x5;
    gBR_fonts[2] = gFont_7;
    gBR_fonts[3] = gHeadup_font;
}

// Offset: 172
// Size: 54
void ClearHeadup(int pIndex) {
    NOT_IMPLEMENTED();
}

// Offset: 228
// Size: 110
void ClearHeadupSlot(int pSlot_index) {
    int i;
    tHeadup* the_headup;
    NOT_IMPLEMENTED();
}

// Offset: 340
// Size: 204
void ClearHeadups() {
    NOT_IMPLEMENTED();
}

// Offset: 544
// Size: 78
int HeadupActive(int pIndex) {
    NOT_IMPLEMENTED();
}

// Offset: 624
// Size: 406
void DRPixelmapText(br_pixelmap* pPixelmap, int pX, int pY, tDR_font* pFont, char* pText, int pRight_edge) {
    int i;
    int x;
    int len;
    int chr;
    int ch_width;
    unsigned char* ch;
    LOG_TRACE("(%p, %d, %d, %p, \"%s\", %d)", pPixelmap, pX, pY, pFont, pText, pRight_edge);

    len = strlen(pText);
    if (pX >= 0 && pPixelmap->width >= pRight_edge && pY >= 0 && pY + pFont->height <= pPixelmap->height) {
        x = pX;
        for (i = 0; i < len; i++) {
            chr = pText[i] - pFont->offset;
            DRPixelmapRectangleOnscreenCopy(
                gBack_screen,
                x,
                pY,
                pFont->images,
                0,
                pFont->height * chr,
                pFont->width_table[chr],
                pFont->height);

            x += pFont->width_table[chr] + pFont->spacing;
        }
    } else {
        NOT_IMPLEMENTED();
    }
}

// Offset: 1032
// Size: 550
void DRPixelmapCleverText2(br_pixelmap* pPixelmap, int pX, int pY, tDR_font* pFont, signed char* pText, int pRight_edge) {
    int i;
    int x;
    int len;
    int chr;
    int ch_width;
    unsigned char* ch;
    tDR_font* new_font;
    NOT_IMPLEMENTED();
}

// Offset: 1584
// Size: 248
void DeviouslyDimRectangle(br_pixelmap* pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners) {
    NOT_IMPLEMENTED();
}

// Offset: 1832
// Size: 461
void DimRectangle(br_pixelmap* pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners) {
    tU8* ptr;
    tU8* depth_table_ptr;
    tU8* right_ptr;
    int x;
    int y;
    int line_skip;
    int width;
    NOT_IMPLEMENTED();
}

// Offset: 2296
// Size: 352
void DimAFewBits() {
    NOT_IMPLEMENTED();
}

// Offset: 2648
// Size: 65
void KillOldestQueuedHeadup() {
    NOT_IMPLEMENTED();
}

// Offset: 2716
// Size: 120
void DubreyBar(int pX_index, int pY, int pColour) {
    int x;
    NOT_IMPLEMENTED();
}

// Offset: 2836
// Size: 329
void DoPSPowerHeadup(int pY, int pLevel, char* pName, int pBar_colour) {
    char s[16];
    int i;
    NOT_IMPLEMENTED();
}

// Offset: 3168
// Size: 163
void DoPSPowerupHeadups() {
    NOT_IMPLEMENTED();
}

// Offset: 3332
// Size: 2340
void DoHeadups(tU32 pThe_time) {
    int i;
    int x_offset;
    int y_offset;
    tHeadup* the_headup;
    int time_factor;
    NOT_IMPLEMENTED();
}

// Offset: 5672
// Size: 136
int FindAHeadupHoleWoofBarkSoundsABitRude(int pSlot_index) {
    int i;
    int empty_one;
    tHeadup* the_headup;
    NOT_IMPLEMENTED();
}

// Offset: 5808
// Size: 144
int DRTextWidth(tDR_font* pFont, char* pText) {
    int i;
    int len;
    int result;
    char* c;
    LOG_TRACE("(%p, \"%s\")", pFont, pText);

    c = pText;
    result = 0;
    len = strlen(pText);

    for (i = 0; i < len; i++) {
        result += pFont->width_table[*c - pFont->offset];
        c++;
    }
    return result + pFont->spacing * (len - 1);
}

// Offset: 5952
// Size: 206
int DRTextCleverWidth(tDR_font* pFont, signed char* pText) {
    int i;
    int len;
    int result;
    unsigned char* c;
    NOT_IMPLEMENTED();
}

// Offset: 6160
// Size: 98
void DRPixelmapCentredText(br_pixelmap* pPixelmap, int pX, int pY, tDR_font* pFont, char* pText) {
    int width_over_2;
    NOT_IMPLEMENTED();
}

// Offset: 6260
// Size: 77
int IsHeadupTextClever(signed char* pText) {
    NOT_IMPLEMENTED();
}

// Offset: 6340
// Size: 562
int MungeHeadupWidth(tHeadup* pHeadup) {
    int width;
    NOT_IMPLEMENTED();
}

// Offset: 6904
// Size: 605
int NewTextHeadupSlot2(int pSlot_index, int pFlash_rate, int pLifetime, int pFont_index, char* pText, int pQueue_it) {
    int index;
    tHeadup* the_headup;
    tHeadup_slot* headup_slot;
    tU32 time;
    NOT_IMPLEMENTED();
}

// Offset: 7512
// Size: 71
int NewTextHeadupSlot(int pSlot_index, int pFlash_rate, int pLifetime, int pFont_index, char* pText) {
    NOT_IMPLEMENTED();
}

// Offset: 7584
// Size: 496
int NewImageHeadupSlot(int pSlot_index, int pFlash_rate, int pLifetime, int pImage_index) {
    int index;
    tHeadup* the_headup;
    tHeadup_slot* headup_slot;
    NOT_IMPLEMENTED();
}

// Offset: 8080
// Size: 284
void DoFancyHeadup(int pIndex) {
    tU32 the_time;
    tHeadup* the_headup;
    int temp_ref;
    NOT_IMPLEMENTED();
}

// Offset: 8364
// Size: 407
void AdjustHeadups() {
    int i;
    int delta_x;
    int delta_y;
    tHeadup* the_headup;
    NOT_IMPLEMENTED();
}

// Offset: 8772
// Size: 107
void MoveHeadupTo(int pHeadup_index, int pNew_x, int pNew_y) {
    int delta_x;
    tHeadup* the_headup;
    NOT_IMPLEMENTED();
}

// Offset: 8880
// Size: 83
void ChangeHeadupText(int pHeadup_index, char* pNew_text) {
    tHeadup* the_headup;
    NOT_IMPLEMENTED();
}

// Offset: 8964
// Size: 199
void ChangeHeadupImage(int pHeadup_index, int pNew_image) {
    tHeadup* the_headup;
    NOT_IMPLEMENTED();
}

// Offset: 9164
// Size: 69
void ChangeHeadupColour(int pHeadup_index, int pNew_colour) {
    NOT_IMPLEMENTED();
}

// Offset: 9236
// Size: 427
void DoDamageScreen(tU32 pThe_time) {
    int i;
    int y_pitch;
    int the_step;
    int the_wobble_x;
    int the_wobble_y;
    br_pixelmap* the_image;
    tDamage_unit* the_damage;
    NOT_IMPLEMENTED();
}

// Offset: 9664
// Size: 404
void PoshDrawLine(float pAngle, br_pixelmap* pDestn, int pX1, int pY1, int pX2, int pY2, int pColour) {
    NOT_IMPLEMENTED();
}

// Offset: 10068
// Size: 3133
void DoInstruments(tU32 pThe_time) {
    br_pixelmap* speedo_image;
    br_pixelmap* tacho_image;
    int the_wobble_x;
    int the_wobble_y;
    int gear;
    double the_angle;
    double the_angle2;
    double sin_angle;
    double cos_angle;
    double speed_mph;
    NOT_IMPLEMENTED();
}

// Offset: 13204
// Size: 386
void DoSteeringWheel(tU32 pThe_time) {
    br_pixelmap* hands_image;
    int hands_index;
    NOT_IMPLEMENTED();
}

// Offset: 13592
// Size: 557
void ChangingView() {
    NOT_IMPLEMENTED();
}

// Offset: 14152
// Size: 445
void EarnCredits2(int pAmount, char* pPrefix_text) {
    char s[256];
    int original_amount;
    tU32 the_time;
    NOT_IMPLEMENTED();
}

// Offset: 14600
// Size: 50
void EarnCredits(int pAmount) {
    NOT_IMPLEMENTED();
}

// Offset: 14652
// Size: 103
int SpendCredits(int pAmount) {
    int amount;
    NOT_IMPLEMENTED();
}

// Offset: 14756
// Size: 279
void AwardTime(tU32 pTime) {
    char s[256];
    tU32 original_amount;
    tU32 the_time;
    int i;
    NOT_IMPLEMENTED();
}

// Offset: 15036
// Size: 170
void DrawRectangle(br_pixelmap* pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pColour) {
    NOT_IMPLEMENTED();
}

// Offset: 15208
// Size: 178
void DrawRRectangle(br_pixelmap* pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pColour) {
    NOT_IMPLEMENTED();
}

// Offset: 15388
// Size: 620
void OoerrIveGotTextInMeBoxMissus(int pFont_index, char* pText, br_pixelmap* pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pCentred) {
    tDR_font* font;
    int width;
    int current_width;
    int i;
    int centre;
    int line_char_index;
    int input_str_index;
    int start_line;
    int current_y;
    int font_needed_loading;
    char line[256];
    NOT_IMPLEMENTED();
}

// Offset: 16008
// Size: 117
void TransBrPixelmapText(br_pixelmap* pPixelmap, int pX, int pY, br_uint_32 pColour, br_font* pFont, signed char* pText) {
    int i;
    int len;
    NOT_IMPLEMENTED();
}

// Offset: 16128
// Size: 250
void TransDRPixelmapText(br_pixelmap* pPixelmap, int pX, int pY, tDR_font* pFont, char* pText, int pRight_edge) {
    LOG_TRACE("(%p, %d, %d, %p, \"%s\", %d)", pPixelmap, pX, pY, pFont, pText, pRight_edge);

    if (gAusterity_mode && FlicsPlayedFromDisk() && pFont != gCached_font) {
        if (gCached_font && gCached_font - gFonts > 13) {
            DisposeFont(gCached_font - gFonts);
        }
        gCached_font = pFont;
    }
    LoadFont(pFont - gFonts);
    DRPixelmapText(pPixelmap, pX, pY - (TranslationMode() ? 2 : 0), pFont, pText, pRight_edge);
}

// Offset: 16380
// Size: 250
void TransDRPixelmapCleverText(br_pixelmap* pPixelmap, int pX, int pY, tDR_font* pFont, char* pText, int pRight_edge) {
    NOT_IMPLEMENTED();
}
