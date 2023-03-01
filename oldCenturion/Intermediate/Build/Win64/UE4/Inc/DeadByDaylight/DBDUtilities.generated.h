// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class UActorComponent;
struct FVector;
class UBoxComponent;
struct FHitResult;
class UAkAudioBank;
struct FPlane;
enum class EShadowSystem : uint8;
class UActorSpawner;
class UAnimSequence;
class AProceduralLevelBuilder;
struct FTransform;
class ADBDPlayer;
class ADBDAIPlayerController;
class UDBDGameInstance;
class ADBDGameMode;
class ADBDGameState;
class UPrimitiveComponent;
struct FCollisionResponseContainer;
class ACamperPlayer;
class ADBDPlayerCameraManager;
class ADBDPlayerControllerBase;
enum class EPlayerRole : uint8;
class ASlasherPlayer;
class UMaterialInterface;
class UMaterialHelper;
class UAnimMontage;
class UWorld;
class UAnimInstance;
class USkeletalMeshComponent;
class ADBDBasePlayer;
class AGenerator;
class UTileSpawnPoint;
struct FRotator;
class UMeshComponent;
struct FLinearColor;
class ADBDPlayerState;
class USphereComponent;
#ifdef DEADBYDAYLIGHT_DBDUtilities_generated_h
#error "DBDUtilities.generated.h already included, missing '#pragma once' in DBDUtilities.h"
#endif
#define DEADBYDAYLIGHT_DBDUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddComponentToActor); \
	DECLARE_FUNCTION(execBoxTraceAgainstActor); \
	DECLARE_FUNCTION(execCrashGameCausingInterrupt); \
	DECLARE_FUNCTION(execDBDCapsuleTraceSingle); \
	DECLARE_FUNCTION(execDBDLoadAudioBank); \
	DECLARE_FUNCTION(execDBDLoadAudioBankAsync); \
	DECLARE_FUNCTION(execDBDLoadAudioBankByAssetPtr); \
	DECLARE_FUNCTION(execDistanceFromPointToPane); \
	DECLARE_FUNCTION(execFindFloorSingle); \
	DECLARE_FUNCTION(execFindParentOfClass); \
	DECLARE_FUNCTION(execGetActiveShadowSystem); \
	DECLARE_FUNCTION(execGetActorOwnerName); \
	DECLARE_FUNCTION(execGetActorSpawners); \
	DECLARE_FUNCTION(execGetAnimSequenceLength); \
	DECLARE_FUNCTION(execGetBuilder); \
	DECLARE_FUNCTION(execGetClosestPointOnOrbit); \
	DECLARE_FUNCTION(execGetClosestSnapTransformOnOrbit); \
	DECLARE_FUNCTION(execGetComponentOwnerName); \
	DECLARE_FUNCTION(execGetCurrentCharacterName); \
	DECLARE_FUNCTION(execGetDBDAIPlayerController); \
	DECLARE_FUNCTION(execGetDBDGameInstance); \
	DECLARE_FUNCTION(execGetDBDGameMode); \
	DECLARE_FUNCTION(execGetDBDGameState); \
	DECLARE_FUNCTION(execGetDistanceToNearestHookedSurvivor); \
	DECLARE_FUNCTION(execGetEndGameTunableValue); \
	DECLARE_FUNCTION(execGetFirstActorWithTag); \
	DECLARE_FUNCTION(execGetFloorLocationAt); \
	DECLARE_FUNCTION(execGetFormattedNumberString); \
	DECLARE_FUNCTION(execGetFormattedNumberText); \
	DECLARE_FUNCTION(execGetImpactCollisionObjectType); \
	DECLARE_FUNCTION(execGetImpactCollisionResponseContainer); \
	DECLARE_FUNCTION(execGetInGamePlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivors); \
	DECLARE_FUNCTION(execGetInGameSurvivorsByRef); \
	DECLARE_FUNCTION(execGetInventoryCount); \
	DECLARE_FUNCTION(execGetInventoryCountForMultipleCharacters); \
	DECLARE_FUNCTION(execGetLocalDBDCameraManager); \
	DECLARE_FUNCTION(execGetLocalDBDPlayerController); \
	DECLARE_FUNCTION(execGetLocallyControlledCharacter); \
	DECLARE_FUNCTION(execGetLocallyControlledCharacterRole); \
	DECLARE_FUNCTION(execGetLocallyControlledKiller); \
	DECLARE_FUNCTION(execGetLocallyControlledSurvivor); \
	DECLARE_FUNCTION(execGetLocallyObservedCharacter); \
	DECLARE_FUNCTION(execGetLocallyObservedCharacterRole); \
	DECLARE_FUNCTION(execGetLogStringMaterialInfo); \
	DECLARE_FUNCTION(execGetMaterialHelpersAttachedToPlayerMesh); \
	DECLARE_FUNCTION(execGetMontageLength); \
	DECLARE_FUNCTION(execGetNearbyActorsOfType); \
	DECLARE_FUNCTION(execGetNearbyCampers); \
	DECLARE_FUNCTION(execGetOuterMostActor); \
	DECLARE_FUNCTION(execGetOwningCamper); \
	DECLARE_FUNCTION(execGetOwningCharacterSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetOwningDBDBasePlayer); \
	DECLARE_FUNCTION(execGetOwningSlasher); \
	DECLARE_FUNCTION(execGetPercentOfRange); \
	DECLARE_FUNCTION(execGetPlayRateForMontage); \
	DECLARE_FUNCTION(execGetSimilarVector); \
	DECLARE_FUNCTION(execGetSlasher); \
	DECLARE_FUNCTION(execGetSlasherTunableValue); \
	DECLARE_FUNCTION(execGetThreeClosestGenerators); \
	DECLARE_FUNCTION(execGetTileSpawnPoints); \
	DECLARE_FUNCTION(execGetVelocityXYAngleDegrees); \
	DECLARE_FUNCTION(execGetXYVector); \
	DECLARE_FUNCTION(execGetYawOnly); \
	DECLARE_FUNCTION(execHasFloorForward); \
	DECLARE_FUNCTION(execHasLineOfSightToTarget); \
	DECLARE_FUNCTION(execHasWalkableSurfaceForward); \
	DECLARE_FUNCTION(execIsInKillerTeam); \
	DECLARE_FUNCTION(execIsInSurvivorTeam); \
	DECLARE_FUNCTION(execIsInTutorialLevel); \
	DECLARE_FUNCTION(execIsLocallyObservingAKiller); \
	DECLARE_FUNCTION(execIsLocallyObservingASurvivor); \
	DECLARE_FUNCTION(execIsNonViolent); \
	DECLARE_FUNCTION(execIsReplaceDisconnectedPlayersWithBotsActive); \
	DECLARE_FUNCTION(execIsServer); \
	DECLARE_FUNCTION(execLogMeshMaterialInfo); \
	DECLARE_FUNCTION(execLogString); \
	DECLARE_FUNCTION(execNormalizeXY); \
	DECLARE_FUNCTION(execPointerToInt); \
	DECLARE_FUNCTION(execPrintStringEmbiggened); \
	DECLARE_FUNCTION(execResolveCharacterIdFromPlayerState); \
	DECLARE_FUNCTION(execSetComponentCastHiddenShadow); \
	DECLARE_FUNCTION(execSphereTraceAgainstActor); \
	DECLARE_FUNCTION(execSphereTraceSingle); \
	DECLARE_FUNCTION(execToAngle_negative180to180); \
	DECLARE_FUNCTION(execWithinRange); \
	DECLARE_FUNCTION(execWithinRangeExclusive);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddComponentToActor); \
	DECLARE_FUNCTION(execBoxTraceAgainstActor); \
	DECLARE_FUNCTION(execCrashGameCausingInterrupt); \
	DECLARE_FUNCTION(execDBDCapsuleTraceSingle); \
	DECLARE_FUNCTION(execDBDLoadAudioBank); \
	DECLARE_FUNCTION(execDBDLoadAudioBankAsync); \
	DECLARE_FUNCTION(execDBDLoadAudioBankByAssetPtr); \
	DECLARE_FUNCTION(execDistanceFromPointToPane); \
	DECLARE_FUNCTION(execFindFloorSingle); \
	DECLARE_FUNCTION(execFindParentOfClass); \
	DECLARE_FUNCTION(execGetActiveShadowSystem); \
	DECLARE_FUNCTION(execGetActorOwnerName); \
	DECLARE_FUNCTION(execGetActorSpawners); \
	DECLARE_FUNCTION(execGetAnimSequenceLength); \
	DECLARE_FUNCTION(execGetBuilder); \
	DECLARE_FUNCTION(execGetClosestPointOnOrbit); \
	DECLARE_FUNCTION(execGetClosestSnapTransformOnOrbit); \
	DECLARE_FUNCTION(execGetComponentOwnerName); \
	DECLARE_FUNCTION(execGetCurrentCharacterName); \
	DECLARE_FUNCTION(execGetDBDAIPlayerController); \
	DECLARE_FUNCTION(execGetDBDGameInstance); \
	DECLARE_FUNCTION(execGetDBDGameMode); \
	DECLARE_FUNCTION(execGetDBDGameState); \
	DECLARE_FUNCTION(execGetDistanceToNearestHookedSurvivor); \
	DECLARE_FUNCTION(execGetEndGameTunableValue); \
	DECLARE_FUNCTION(execGetFirstActorWithTag); \
	DECLARE_FUNCTION(execGetFloorLocationAt); \
	DECLARE_FUNCTION(execGetFormattedNumberString); \
	DECLARE_FUNCTION(execGetFormattedNumberText); \
	DECLARE_FUNCTION(execGetImpactCollisionObjectType); \
	DECLARE_FUNCTION(execGetImpactCollisionResponseContainer); \
	DECLARE_FUNCTION(execGetInGamePlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivors); \
	DECLARE_FUNCTION(execGetInGameSurvivorsByRef); \
	DECLARE_FUNCTION(execGetInventoryCount); \
	DECLARE_FUNCTION(execGetInventoryCountForMultipleCharacters); \
	DECLARE_FUNCTION(execGetLocalDBDCameraManager); \
	DECLARE_FUNCTION(execGetLocalDBDPlayerController); \
	DECLARE_FUNCTION(execGetLocallyControlledCharacter); \
	DECLARE_FUNCTION(execGetLocallyControlledCharacterRole); \
	DECLARE_FUNCTION(execGetLocallyControlledKiller); \
	DECLARE_FUNCTION(execGetLocallyControlledSurvivor); \
	DECLARE_FUNCTION(execGetLocallyObservedCharacter); \
	DECLARE_FUNCTION(execGetLocallyObservedCharacterRole); \
	DECLARE_FUNCTION(execGetLogStringMaterialInfo); \
	DECLARE_FUNCTION(execGetMaterialHelpersAttachedToPlayerMesh); \
	DECLARE_FUNCTION(execGetMontageLength); \
	DECLARE_FUNCTION(execGetNearbyActorsOfType); \
	DECLARE_FUNCTION(execGetNearbyCampers); \
	DECLARE_FUNCTION(execGetOuterMostActor); \
	DECLARE_FUNCTION(execGetOwningCamper); \
	DECLARE_FUNCTION(execGetOwningCharacterSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetOwningDBDBasePlayer); \
	DECLARE_FUNCTION(execGetOwningSlasher); \
	DECLARE_FUNCTION(execGetPercentOfRange); \
	DECLARE_FUNCTION(execGetPlayRateForMontage); \
	DECLARE_FUNCTION(execGetSimilarVector); \
	DECLARE_FUNCTION(execGetSlasher); \
	DECLARE_FUNCTION(execGetSlasherTunableValue); \
	DECLARE_FUNCTION(execGetThreeClosestGenerators); \
	DECLARE_FUNCTION(execGetTileSpawnPoints); \
	DECLARE_FUNCTION(execGetVelocityXYAngleDegrees); \
	DECLARE_FUNCTION(execGetXYVector); \
	DECLARE_FUNCTION(execGetYawOnly); \
	DECLARE_FUNCTION(execHasFloorForward); \
	DECLARE_FUNCTION(execHasLineOfSightToTarget); \
	DECLARE_FUNCTION(execHasWalkableSurfaceForward); \
	DECLARE_FUNCTION(execIsInKillerTeam); \
	DECLARE_FUNCTION(execIsInSurvivorTeam); \
	DECLARE_FUNCTION(execIsInTutorialLevel); \
	DECLARE_FUNCTION(execIsLocallyObservingAKiller); \
	DECLARE_FUNCTION(execIsLocallyObservingASurvivor); \
	DECLARE_FUNCTION(execIsNonViolent); \
	DECLARE_FUNCTION(execIsReplaceDisconnectedPlayersWithBotsActive); \
	DECLARE_FUNCTION(execIsServer); \
	DECLARE_FUNCTION(execLogMeshMaterialInfo); \
	DECLARE_FUNCTION(execLogString); \
	DECLARE_FUNCTION(execNormalizeXY); \
	DECLARE_FUNCTION(execPointerToInt); \
	DECLARE_FUNCTION(execPrintStringEmbiggened); \
	DECLARE_FUNCTION(execResolveCharacterIdFromPlayerState); \
	DECLARE_FUNCTION(execSetComponentCastHiddenShadow); \
	DECLARE_FUNCTION(execSphereTraceAgainstActor); \
	DECLARE_FUNCTION(execSphereTraceSingle); \
	DECLARE_FUNCTION(execToAngle_negative180to180); \
	DECLARE_FUNCTION(execWithinRange); \
	DECLARE_FUNCTION(execWithinRangeExclusive);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDUtilities(); \
	friend struct Z_Construct_UClass_UDBDUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUDBDUtilities(); \
	friend struct Z_Construct_UClass_UDBDUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDUtilities(UDBDUtilities&&); \
	NO_API UDBDUtilities(const UDBDUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDUtilities(UDBDUtilities&&); \
	NO_API UDBDUtilities(const UDBDUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_48_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
