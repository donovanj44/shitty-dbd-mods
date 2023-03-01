// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGlyph;
struct FVector;
enum class ESkillCheckCustomType : uint8;
#ifdef ARCHIVES_YellowGlyphComponent_generated_h
#error "YellowGlyphComponent.generated.h already included, missing '#pragma once' in YellowGlyphComponent.h"
#endif
#define ARCHIVES_YellowGlyphComponent_generated_h

#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_TeleportGlyph_Implementation(FVector location); \
 \
	DECLARE_FUNCTION(execAuthority_TeleportGlyph); \
	DECLARE_FUNCTION(execGetOwningGlyph); \
	DECLARE_FUNCTION(execMulticast_TeleportGlyph); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnSkillCheck); \
	DECLARE_FUNCTION(execTriggerSkillCheck);


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TeleportGlyph_Implementation(FVector location); \
 \
	DECLARE_FUNCTION(execAuthority_TeleportGlyph); \
	DECLARE_FUNCTION(execGetOwningGlyph); \
	DECLARE_FUNCTION(execMulticast_TeleportGlyph); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnSkillCheck); \
	DECLARE_FUNCTION(execTriggerSkillCheck);


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_EVENT_PARMS \
	struct YellowGlyphComponent_eventMulticast_TeleportGlyph_Parms \
	{ \
		FVector location; \
	};


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYellowGlyphComponent(); \
	friend struct Z_Construct_UClass_UYellowGlyphComponent_Statics; \
public: \
	DECLARE_CLASS(UYellowGlyphComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UYellowGlyphComponent)


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUYellowGlyphComponent(); \
	friend struct Z_Construct_UClass_UYellowGlyphComponent_Statics; \
public: \
	DECLARE_CLASS(UYellowGlyphComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UYellowGlyphComponent)


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYellowGlyphComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYellowGlyphComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYellowGlyphComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYellowGlyphComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYellowGlyphComponent(UYellowGlyphComponent&&); \
	NO_API UYellowGlyphComponent(const UYellowGlyphComponent&); \
public:


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYellowGlyphComponent(UYellowGlyphComponent&&); \
	NO_API UYellowGlyphComponent(const UYellowGlyphComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYellowGlyphComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYellowGlyphComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYellowGlyphComponent)


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentlyInteractingPlayer() { return STRUCT_OFFSET(UYellowGlyphComponent, _currentlyInteractingPlayer); } \
	FORCEINLINE static uint32 __PPO___skillCheckDuration() { return STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckDuration); } \
	FORCEINLINE static uint32 __PPO___skillCheckZoneLength() { return STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckZoneLength); } \
	FORCEINLINE static uint32 __PPO___skillCheckDelay() { return STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckDelay); } \
	FORCEINLINE static uint32 __PPO___skillCheckAverageDistance() { return STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckAverageDistance); } \
	FORCEINLINE static uint32 __PPO___skillCheckDistanceVariance() { return STRUCT_OFFSET(UYellowGlyphComponent, _skillCheckDistanceVariance); } \
	FORCEINLINE static uint32 __PPO___teleportDelay() { return STRUCT_OFFSET(UYellowGlyphComponent, _teleportDelay); } \
	FORCEINLINE static uint32 __PPO___survivorSpawns() { return STRUCT_OFFSET(UYellowGlyphComponent, _survivorSpawns); } \
	FORCEINLINE static uint32 __PPO___allGlyphs() { return STRUCT_OFFSET(UYellowGlyphComponent, _allGlyphs); }


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_12_PROLOG \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_INCLASS \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVES_API UClass* StaticClass<class UYellowGlyphComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_YellowGlyphComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
