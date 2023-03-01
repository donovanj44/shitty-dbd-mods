// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EDBDScoreTypes_generated_h
#error "EDBDScoreTypes.generated.h already included, missing '#pragma once' in EDBDScoreTypes.h"
#endif
#define DEADBYDAYLIGHT_EDBDScoreTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EDBDScoreTypes_h


#define FOREACH_ENUM_EDBDSCORETYPES(op) \
	op(EDBDScoreTypes::DBDCamperScore_SurviveHealthy) \
	op(EDBDScoreTypes::DBDCamperScore_SurviveWounded) \
	op(EDBDScoreTypes::DBDCamperScore_SurviveKO) \
	op(EDBDScoreTypes::DBDCamperScore_UnlockHatch) \
	op(EDBDScoreTypes::DBDCamperScore_EscapeThroughHatch) \
	op(EDBDScoreTypes::DBDCamperScore_AllEscapeThroughHatch) \
	op(EDBDScoreTypes::DBDCamperScore_EscapeCarry) \
	op(EDBDScoreTypes::DBDCamperScore_SurviveStreakSmall) \
	op(EDBDScoreTypes::DBDCamperScore_SurviveStreakBig) \
	op(EDBDScoreTypes::DBDCamperScore_DamageStateChanged) \
	op(EDBDScoreTypes::DBDCamperScore_NearFriendInNeed) \
	op(EDBDScoreTypes::DBDCamperScore_NearFriendInNeed_PostExit) \
	op(EDBDScoreTypes::DBDCamperScore_FoundCamper) \
	op(EDBDScoreTypes::DBDCamperScore_CoopObjectives) \
	op(EDBDScoreTypes::DBDCamperScore_OpenDoorPercent) \
	op(EDBDScoreTypes::DBDCamperScore_OpenDoor) \
	op(EDBDScoreTypes::DBDCamperScore_GeneratorPercent) \
	op(EDBDScoreTypes::DBDCamperScore_GeneratorSkillCheckSuccess) \
	op(EDBDScoreTypes::DBDCamperScore_GeneratorSkillCheckBonus) \
	op(EDBDScoreTypes::DBDCamperScore_SearchablePercent) \
	op(EDBDScoreTypes::DBDCamperScore_SearchCompleteFinalContributionPercent) \
	op(EDBDScoreTypes::DBDCamperScore_AddItemToMap) \
	op(EDBDScoreTypes::DBDCamperScore_FixGenerator) \
	op(EDBDScoreTypes::DBDCamperScore_FixSpecialMapGenerator) \
	op(EDBDScoreTypes::DBDCamperScore_LastSurvivorFixGenerator) \
	op(EDBDScoreTypes::DBDCamperScore_RepairDamagedGenerator) \
	op(EDBDScoreTypes::DBDCamperScore_PowerExitGates) \
	op(EDBDScoreTypes::DBDCamperScore_CoopAltruism) \
	op(EDBDScoreTypes::DBDCamperScore_HealPercent) \
	op(EDBDScoreTypes::DBDCamperScore_HealPercent_PostExit) \
	op(EDBDScoreTypes::DBDCamperScore_HealFromDying) \
	op(EDBDScoreTypes::DBDCamperScore_HealFromDying_PostExit) \
	op(EDBDScoreTypes::DBDCamperScore_HealFromInjured) \
	op(EDBDScoreTypes::DBDCamperScore_HealFromInjured_PostExit) \
	op(EDBDScoreTypes::DBDCamperScore_HealSkillCheckSuccess) \
	op(EDBDScoreTypes::DBDCamperScore_HealSkillCheckBonus) \
	op(EDBDScoreTypes::DBDCamperScore_HealSelfPercent) \
	op(EDBDScoreTypes::DBDCamperScore_HealSelfSkillCheckSuccess) \
	op(EDBDScoreTypes::DBDCamperScore_HealSelfSkillCheckBonus) \
	op(EDBDScoreTypes::DBDCamperScore_HitAfterHookSave) \
	op(EDBDScoreTypes::DBDCamperScore_HitNearFriendInNeed) \
	op(EDBDScoreTypes::DBDCamperScore_HitNearUnhookedFriendInNeed) \
	op(EDBDScoreTypes::DBDCamperScore_SabotageHook) \
	op(EDBDScoreTypes::DBDCamperScore_SabotageHookSkillCheckSuccess) \
	op(EDBDScoreTypes::DBDCamperScore_SabotageHookSkillCheckBonus) \
	op(EDBDScoreTypes::DBDCamperScore_EscapeFromHook) \
	op(EDBDScoreTypes::DBDCamperScore_HookStrugglePerSecond) \
	op(EDBDScoreTypes::DBDCamperScore_SaveFromHook) \
	op(EDBDScoreTypes::DBDCamperScore_SaveFromHook_PostExit) \
	op(EDBDScoreTypes::DBDCamperScore_WasUnhooked) \
	op(EDBDScoreTypes::DBDCamperScore_SabotageBearTrap) \
	op(EDBDScoreTypes::DBDCamperScore_SabotageBearTrapSkillCheckSuccess) \
	op(EDBDScoreTypes::DBDCamperScore_SabotageBearTrapSkillCheckBonus) \
	op(EDBDScoreTypes::DBDCamperScore_DisableBearTrap) \
	op(EDBDScoreTypes::DBDCamperScore_SaveFromBearTrap) \
	op(EDBDScoreTypes::DBDCamperScore_SaveFromBearTrap_PostExit) \
	op(EDBDScoreTypes::DBDCamperScore_EscapeBearTrap) \
	op(EDBDScoreTypes::DBDCamperScore_BasementChillingPerSecond) \
	op(EDBDScoreTypes::DBDCamperScore_CoopBoldness) \
	op(EDBDScoreTypes::DBDCamperScore_SlasherStun) \
	op(EDBDScoreTypes::DBDCamperScore_SlasherStunCarrying) \
	op(EDBDScoreTypes::DBDCamperScore_SlasherBlind) \
	op(EDBDScoreTypes::DBDCamperScore_SlasherBurnInvisibility) \
	op(EDBDScoreTypes::DBDCamperScore_ChasePerSecond) \
	op(EDBDScoreTypes::DBDCamperScore_ChaseEscape) \
	op(EDBDScoreTypes::DBDCamperScore_ChaseSteal) \
	op(EDBDScoreTypes::DBDCamperScore_ChaseBlind) \
	op(EDBDScoreTypes::DBDCamperScore_VaultInChase) \
	op(EDBDScoreTypes::DBDCamperScore_NoiseDistraction) \
	op(EDBDScoreTypes::DBDCamperScore_SprintingNearSlasherPerSecond) \
	op(EDBDScoreTypes::DBDCamperScore_UnhideNearSlasher) \
	op(EDBDScoreTypes::DBDCamperScore_EscapeWhileChased) \
	op(EDBDScoreTypes::DBDCamperScore_DestroyPhantomTrap) \
	op(EDBDScoreTypes::DBDCamperScore_NewItem) \
	op(EDBDScoreTypes::DBDCamperScore_StartMatchWithUltraRareItem) \
	op(EDBDScoreTypes::DBDCamperScore_ItemFrom) \
	op(EDBDScoreTypes::DBDCamperScore_ExposerAdded) \
	op(EDBDScoreTypes::DBDSlasherScore_Destroy) \
	op(EDBDScoreTypes::DBDSlasherScore_Kill) \
	op(EDBDScoreTypes::DBDSlasherScore_BleedOut) \
	op(EDBDScoreTypes::DBDSlasherScore_BleedOutPercent) \
	op(EDBDScoreTypes::DBDSlasherScore_AttackSuccess) \
	op(EDBDScoreTypes::DBDSlasherScore_AttackDeviousness) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptGenerator) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptWindow) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptHide) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptExit) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptUnhook) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptChest) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptOpenHatch) \
	op(EDBDScoreTypes::DBDSlasherScore_InterruptExitHatch) \
	op(EDBDScoreTypes::DBDSlasherScore_FindHiding) \
	op(EDBDScoreTypes::DBDSlasherScore_PlaceTrap) \
	op(EDBDScoreTypes::DBDSlasherScore_Trap) \
	op(EDBDScoreTypes::DBDSlasherScore_TrapPickup) \
	op(EDBDScoreTypes::DBDSlasherScore_Hook) \
	op(EDBDScoreTypes::DBDSlasherScore_SacrificePercent) \
	op(EDBDScoreTypes::DBDSlasherScore_SacrificeSuccess) \
	op(EDBDScoreTypes::DBDSlasherScore_SacrificedCount) \
	op(EDBDScoreTypes::DBDSlasherScore_NoEscape) \
	op(EDBDScoreTypes::DBDSlasherScore_ChaseStart) \
	op(EDBDScoreTypes::DBDSlasherScore_ChasePerSecond) \
	op(EDBDScoreTypes::DBDSlasherScore_CloakStalkPerSecond) \
	op(EDBDScoreTypes::DBDSlasherScore_UncloakInView) \
	op(EDBDScoreTypes::DBDSlasherScore_UncloakAttack) \
	op(EDBDScoreTypes::DBDSlasherScore_EvadeInvisBurn) \
	op(EDBDScoreTypes::DBDSlasherScore_EvadeBlind) \
	op(EDBDScoreTypes::DBDSlasherScore_CamperDisconnect) \
	op(EDBDScoreTypes::DBDSlasherScore_HitCamperWithChainsaw) \
	op(EDBDScoreTypes::DBDSlasherScore_RunningWithChainsaw) \
	op(EDBDScoreTypes::DBDSlasherScore_ChainBlinkAttack) \
	op(EDBDScoreTypes::DBDSlasherScore_ChainBlinkInterrupt) \
	op(EDBDScoreTypes::DBDSlasherScore_ChainBlinkInterruptAfter3) \
	op(EDBDScoreTypes::DBDSlasherScore_ChainBlinkStartChase) \
	op(EDBDScoreTypes::DBDSlasherScore_StalkpointGained) \
	op(EDBDScoreTypes::DBDSlasherScore_StalkerTierIncrement) \
	op(EDBDScoreTypes::DBDSlasherScore_StalkerTierFirstTime) \
	op(EDBDScoreTypes::DBDSlasherScore_StalkerKillAllCampers) \
	op(EDBDScoreTypes::DBDSlasherScore_PhantomTrapSet) \
	op(EDBDScoreTypes::DBDSlasherScore_PhantomTrapTrigger) \
	op(EDBDScoreTypes::DBDSlasherScore_PhantomTrapTriggerAttack) \
	op(EDBDScoreTypes::DBDSlasherScore_PhantomTrapTeleportAttack) \
	op(EDBDScoreTypes::DBDSlasherScore_PhantomTrapTeleportAttackAllCampers) \
	op(EDBDScoreTypes::DBDSlasherScore_ThrillOfTheHunt) \
	op(EDBDScoreTypes::DBDPlayerScore_BloodwebLevelUp) \
	op(EDBDScoreTypes::DBDPlayerScore_BloodwebPrestigeLevelUp) \
	op(EDBDScoreTypes::DBDPlayerScore_BloodwebPrestige3LevelUp) \
	op(EDBDScoreTypes::DBDPlayerScore_AwardPips) \
	op(EDBDScoreTypes::DBDPlayerScore_AddBloodpoints) \
	op(EDBDScoreTypes::DBDPlayerScore_BloodpointsOneCategory) \
	op(EDBDScoreTypes::DBDPlayerScore_MaxBloodpointsAllCategories) \
	op(EDBDScoreTypes::DBDPlayerScore_AddNewPerk) \
	op(EDBDScoreTypes::DBDPlayerScore_PerkLevelUp) \
	op(EDBDScoreTypes::DBDPlayerScore_BurnOfferingUltraRare) \
	op(EDBDScoreTypes::DBDPlayerScore_StartGame) \
	op(EDBDScoreTypes::DBDPlayerScore_UnlockRanking) \
	op(EDBDScoreTypes::DBDPlayerScore_FinishWithPerks) \
	op(EDBDScoreTypes::DBDCamperScore_CheatObjectives) \
	op(EDBDScoreTypes::DBDCamperScore_CheatSurvival) \
	op(EDBDScoreTypes::DBDCamperScore_CheatAltruism) \
	op(EDBDScoreTypes::DBDCamperScore_CheatBoldness) \
	op(EDBDScoreTypes::DBDSlasherScore_CheatSacrifice) \
	op(EDBDScoreTypes::DBDSlasherScore_CheatBrutality) \
	op(EDBDScoreTypes::DBDSlasherScore_CheatDeviousness) \
	op(EDBDScoreTypes::DBDSlasherScore_CheatHunter) \
	op(EDBDScoreTypes::DBDCamperScore_CleanseDullTotem) \
	op(EDBDScoreTypes::DBDCamperScore_CleanseHexTotem) \
	op(EDBDScoreTypes::DBDPlayerScore_BalancedLanding) \
	op(EDBDScoreTypes::DBDPlayerScore_Lithe) \
	op(EDBDScoreTypes::DBDSlasherScore_DamageGenerator) \
	op(EDBDScoreTypes::DBDSlasherScore_Vault) \
	op(EDBDScoreTypes::DBDCamperScore_StartInjuredBleedout) \
	op(EDBDScoreTypes::DBDCamperScore_FullRecovery) \
	op(EDBDScoreTypes::DBDCamperScore_FirstTimeDying) \
	op(EDBDScoreTypes::DBDCamperScore_SecondTimeDying) \
	op(EDBDScoreTypes::DBDCamperScore_FirecrackerDisturbance) \
	op(EDBDScoreTypes::DBDCamperScore_GeneratorSkillCheckRuinBonus) \
	op(EDBDScoreTypes::DBDCamperScore_SlasherBurnBlink) \
	op(EDBDScoreTypes::DBDCamperScore_DieSacrificed) \
	op(EDBDScoreTypes::DBDCamperScore_DieBleedOut) \
	op(EDBDScoreTypes::DBDCamperScore_DieKill) \
	op(EDBDScoreTypes::DBDPlayerScore_EndGame) \
	op(EDBDScoreTypes::DBDPlayerScore_EnterParadise) \
	op(EDBDScoreTypes::DBDSlasherScore_CamperHookedFirstTime) \
	op(EDBDScoreTypes::DBDSlasherScore_CamperEnterHookStrugglePhase) \
	op(EDBDScoreTypes::DBDSlasherScore_ElectroShockSurvivor) \
	op(EDBDScoreTypes::DBDSlasherScore_BringAllSurvivorsToMadnessTier3) \
	op(EDBDScoreTypes::DBDSlasherScore_BringSurvivorUpOneMadnessTier) \
	op(EDBDScoreTypes::DBDSlasherScore_HitSurvivorAfterElectroShock) \
	op(EDBDScoreTypes::DBDSlasherScore_PickupCamper) \
	op(EDBDScoreTypes::DBDSlasherScore_Blink) \
	op(EDBDScoreTypes::DBDSlasherScore_TeleportToPhantomTrap) \
	op(EDBDScoreTypes::DBDSlasherScore_HatchetThrow) \
	op(EDBDScoreTypes::DBDSlasherScore_HatchetHit) \
	op(EDBDScoreTypes::DBDSlasherScore_HatchetSkillShotHit) \
	op(EDBDScoreTypes::DBDSlasherScore_HatchetFarHit) \
	op(EDBDScoreTypes::DBDCamperScore_QuickVault) \
	op(EDBDScoreTypes::DBDCamperScore_QuickCloset) \
	op(EDBDScoreTypes::DBDCamperScore_StartGeneratorRepair) \
	op(EDBDScoreTypes::DBDCamperScore_StartCleansingTotem) \
	op(EDBDScoreTypes::DBDCamperScore_FirstRepairSkillCheck) \
	op(EDBDScoreTypes::DBDSlasherScore_CamperDisconnectedBeforeMatchStart) \
	op(EDBDScoreTypes::DBDSlasherScore_CamperDisconnectedDuringMatch) \
	op(EDBDScoreTypes::DBDCamperScore_NearFriendInNeed_GeneratorsComplete) \
	op(EDBDScoreTypes::DBDCamperScore_HealPercent_GeneratorsComplete) \
	op(EDBDScoreTypes::DBDCamperScore_HealFromDying_GeneratorsComplete) \
	op(EDBDScoreTypes::DBDCamperScore_SaveFromHook_GeneratorsComplete) \
	op(EDBDScoreTypes::DBDCamperScore_SaveFromBearTrap_GeneratorsComplete) \
	op(EDBDScoreTypes::DBDCamperScore_SnapOutOfIt) \
	op(EDBDScoreTypes::DBDSlasherScore_HookInBasement) \
	op(EDBDScoreTypes::DBDSlasherScore_LFChainsawHit) \
	op(EDBDScoreTypes::DBDCamperScore_PalletDrop) \
	op(EDBDScoreTypes::DBDCamperScore_Vault) \
	op(EDBDScoreTypes::DBDSlasherScore_StartChaseWithChainsawAttack) \
	op(EDBDScoreTypes::DBDSlasherScore_MissedAttackInChase) \
	op(EDBDScoreTypes::DBDCamperScore_DodgeAndVault) \
	op(EDBDScoreTypes::DBDCamperScore_BeginQuickVault) \
	op(EDBDScoreTypes::DBDSlasherScore_StartChainsawAttack) \
	op(EDBDScoreTypes::DBDCamperScore_WakeUpBySkillCheck) \
	op(EDBDScoreTypes::DBDCamperScore_FallAsleep) \
	op(EDBDScoreTypes::DBDCamperScore_WakeUpSelf) \
	op(EDBDScoreTypes::DBDCamperScore_WakeUpOther) \
	op(EDBDScoreTypes::DBDSlasherScore_RecentlyAsleepAttack) \
	op(EDBDScoreTypes::DBDSlasherScore_SurvivorPartyOnBasementHooks) \
	op(EDBDScoreTypes::DBDCamperScore_LootBasementChest) \
	op(EDBDScoreTypes::DBDPlayerScore_OpenMysteryBox) \
	op(EDBDScoreTypes::DBDGameEvent_SurvivorDowned) \
	op(EDBDScoreTypes::DBDGameEvent_SurvivorDied) \
	op(EDBDScoreTypes::DBDGameEvent_KillerCloak) \
	op(EDBDScoreTypes::DBDSlasherScore_SetReverseBearTrap) \
	op(EDBDScoreTypes::DBDSlasherScore_AbductionDash) \
	op(EDBDScoreTypes::DBDSlasherScore_DashHitSuccess) \
	op(EDBDScoreTypes::DBDSlasherScore_KillWithReverseBearTrap) \
	op(EDBDScoreTypes::DBDCamperScore_SearchRBTKey) \
	op(EDBDScoreTypes::DBDCamperScore_EscapeRBT) \
	op(EDBDScoreTypes::DBDGameEvent_ReplacedGoodSkillCheckAsGreat) \
	op(EDBDScoreTypes::DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess) \
	op(EDBDScoreTypes::DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus) \
	op(EDBDScoreTypes::DBDSlasherScore_DamageGeneratorWhileHooked) \
	op(EDBDScoreTypes::DBDGameEvent_SurvivorDamaged) \
	op(EDBDScoreTypes::DBDGameEvent_SurvivorHealed) \
	op(EDBDScoreTypes::DBDGameEvent_Interruption) \
	op(EDBDScoreTypes::DBDGameEvent_SurvivorFailedHealSkillcheck) \
	op(EDBDScoreTypes::DBDGameEvent_HookedSurvivorSacrificeBegin) \
	op(EDBDScoreTypes::DBDGameEvent_AcquireEventKillerCoin) \
	op(EDBDScoreTypes::DBDGameEvent_AcquireEventSurvivorCoin) \
	op(EDBDScoreTypes::DBDCamperScore_EventGeneratorFixed) \
	op(EDBDScoreTypes::DBDSlasherScore_HookedOnEventHook) \
	op(EDBDScoreTypes::DBDGameEvent_GeneratorProgress) \
	op(EDBDScoreTypes::DBDSlasherScore_DownSmokedCamper) \
	op(EDBDScoreTypes::DBDSlasherScore_HitSmokedCamper) \
	op(EDBDScoreTypes::DBDSlasherScore_SurvivorEnterGasCloud) \
	op(EDBDScoreTypes::DBDSlasherScore_BombDirectHit) \
	op(EDBDScoreTypes::DBDSlasherScore_ThrowBomb) \
	op(EDBDScoreTypes::DBDGameEvent_CoopAction) \
	op(EDBDScoreTypes::DBDSlasherScore_StartActivePhaseWalk) \
	op(EDBDScoreTypes::DBDScore_Count) \
	op(EDBDScoreTypes::Count) 

enum class EDBDScoreTypes : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDBDScoreTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
