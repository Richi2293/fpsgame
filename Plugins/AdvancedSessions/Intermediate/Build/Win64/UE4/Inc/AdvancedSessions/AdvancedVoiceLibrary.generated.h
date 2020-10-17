// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPUniqueNetId;
#ifdef ADVANCEDSESSIONS_AdvancedVoiceLibrary_generated_h
#error "AdvancedVoiceLibrary.generated.h already included, missing '#pragma once' in AdvancedVoiceLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedVoiceLibrary_generated_h

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_SPARSE_DATA
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumLocalTalkers); \
	DECLARE_FUNCTION(execUnMuteRemoteTalker); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execUnRegisterRemoteTalker); \
	DECLARE_FUNCTION(execRegisterRemoteTalker); \
	DECLARE_FUNCTION(execUnRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execUnRegisterLocalTalker); \
	DECLARE_FUNCTION(execRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execRegisterLocalTalker); \
	DECLARE_FUNCTION(execStopNetworkedVoice); \
	DECLARE_FUNCTION(execStartNetworkedVoice); \
	DECLARE_FUNCTION(execIsHeadsetPresent);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumLocalTalkers); \
	DECLARE_FUNCTION(execUnMuteRemoteTalker); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execUnRegisterRemoteTalker); \
	DECLARE_FUNCTION(execRegisterRemoteTalker); \
	DECLARE_FUNCTION(execUnRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execUnRegisterLocalTalker); \
	DECLARE_FUNCTION(execRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execRegisterLocalTalker); \
	DECLARE_FUNCTION(execStopNetworkedVoice); \
	DECLARE_FUNCTION(execStartNetworkedVoice); \
	DECLARE_FUNCTION(execIsHeadsetPresent);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedVoiceLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedVoiceLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedVoiceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedVoiceLibrary)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedVoiceLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedVoiceLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedVoiceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedVoiceLibrary)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedVoiceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedVoiceLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedVoiceLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedVoiceLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedVoiceLibrary(UAdvancedVoiceLibrary&&); \
	NO_API UAdvancedVoiceLibrary(const UAdvancedVoiceLibrary&); \
public:


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedVoiceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedVoiceLibrary(UAdvancedVoiceLibrary&&); \
	NO_API UAdvancedVoiceLibrary(const UAdvancedVoiceLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedVoiceLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedVoiceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedVoiceLibrary)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_26_PROLOG
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_RPC_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_INCLASS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedVoiceLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedVoiceLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
