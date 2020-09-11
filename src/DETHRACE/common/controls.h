#ifndef _CONTROLS_H_
#define _CONTROLS_H_

#include "br_types.h"
#include "dr_types.h"

extern int _unittest_controls_lastGetPowerup;

void AbortRace();

void F4Key();

void SetFlag(int i);

void FinishLap(int i);

void EnsureSpecialVolumesHidden();

void ShowSpecialVolumesIfRequ();

void DoEditModeKey(int pIndex);

void F5Key();

void F6Key();

void F7Key();

void F8Key();

void F10Key();

void F11Key();

void F12Key();

void NumberKey0();

void NumberKey1();

void NumberKey2();

void NumberKey3();

void NumberKey4();

void NumberKey5();

void NumberKey6();

void NumberKey7();

void NumberKey8();

void NumberKey9();

void LookLeft();

void LookForward();

void LookRight();

void DamageTest();

void TDamageEngine();

void TDamageDriver();

void TDamageTrans();

void TDamageSteering();

void TDamageLFWheel();

void TDamageLFBrake();

void TDamageLRBrake();

void TDamageLRWheel();

void TDamageRFWheel();

void TDamageRFBrake();

void TDamageRRBrake();

void TDamageRRWheel();

void MoveBonnetForward();

void SaveBonnet();

void MoveBonnetBackward();

void MoveBonnetLeft();

void ShrinkBonnetX();

void SwellBonnetX();

void ShrinkBonnetY();

void SwellBonnetY();

void ShrinkBonnetZ();

void SwellBonnetZ();

void MoveBonnetDown();

void MoveBonnetRight();

void MoveBonnetUp();

void TiltBonnetDownX();

void TiltBonnetUpX();

void TiltBonnetDownY();

void TiltBonnetUpY();

void TiltBonnetDownZ();

void TiltBonnetUpZ();

void ToggleCockpit();

void ToggleMirror();

void ConcussMe();

void CheckHelp();

void CheckLoadSave();

void CheckToggles(int pRacing);

int CarWorldOffFallenCheckThingy(tCar_spec* pCar, int pCheck_around);

int HasCarFallenOffWorld(tCar_spec* pCar);

void CheckForBeingOutOfThisWorld();

void CheckHornLocal(tCar_spec* pCar);

void CheckHorn3D(tCar_spec* pCar);

void CheckHorns();

void SetRecovery();

void RecoverCar();

void CheckMapRenderMove();

void ExplodeCar(tCar_spec* pCar);

void CheckRecoveryOfCars(tU32 pEndFrameTime);

void LoseSomePSPowerups(int pNumber);

void CheckOtherRacingKeys();

int CheckRecoverCost();

void SortOutRecover(tCar_spec* pCar);

void SetFlipUpCar(tCar_spec* pCar);

void FlipUpCar(tCar_spec* car);

void GetPowerup(int pNum);

void CheckSystemKeys(int pRacing);

void CheckKevKeys();

void BrakeInstantly();

void PollCarControls(tU32 pTime_difference);

void PollCameraControls(tU32 pTime_difference);

void SetFlag2(int i);

void ToggleFlying();

void ToggleInvulnerability();

void MoreTime();

void MuchMoreTime();

void ToggleTimerFreeze();

void EarnDosh();

void LoseDosh();

void ToggleMap();

int HornBlowing();

void ToggleArrow();

int GetRecoverVoucherCount();

void AddVouchers(int pCount);

void ResetRecoveryVouchers();

void CycleCarTexturingLevel();

void CycleWallTexturingLevel();

void CycleRoadTexturingLevel();

void CycleYonFactor();

void SetSoundDetailLevel(int pLevel);

void ReallySetSoundDetailLevel(int pLevel);

int GetSoundDetailLevel();

void CycleSoundDetailLevel();

void CycleCarSimplificationLevel();

void ToggleAccessoryRendering();

void ToggleSmoke();

void DrawSomeText2(tDR_font* pFont);

void DrawSomeText();

void SaySorryYouLittleBastard();

void UserSendMessage();

void EnterUserMessage();

void DisplayUserMessage();

void InitAbuseomatic();

void DisposeAbuseomatic();

#endif
