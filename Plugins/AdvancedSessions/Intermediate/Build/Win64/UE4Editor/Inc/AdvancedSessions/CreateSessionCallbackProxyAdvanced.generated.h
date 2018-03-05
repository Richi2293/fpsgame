// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSessionPropertyKeyPair;
class APlayerController;
class UCreateSessionCallbackProxyAdvanced;
#ifdef ADVANCEDSESSIONS_CreateSessionCallbackProxyAdvanced_generated_h
#error "CreateSessionCallbackProxyAdvanced.generated.h already included, missing '#pragma once' in CreateSessionCallbackProxyAdvanced.h"
#endif
#define ADVANCEDSESSIONS_CreateSessionCallbackProxyAdvanced_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateAdvancedSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PublicConnections); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PrivateConnections); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_UBOOL(Z_Param_bAllowInvites); \
		P_GET_UBOOL(Z_Param_bIsDedicatedServer); \
		P_GET_UBOOL(Z_Param_bUsePresence); \
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresence); \
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly); \
		P_GET_UBOOL(Z_Param_bAntiCheatProtected); \
		P_GET_UBOOL(Z_Param_bUsesStats); \
		P_GET_UBOOL(Z_Param_bShouldAdvertise); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCreateSessionCallbackProxyAdvanced**)Z_Param__Result=UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bIsDedicatedServer,Z_Param_bUsePresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateAdvancedSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PublicConnections); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PrivateConnections); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_UBOOL(Z_Param_bAllowInvites); \
		P_GET_UBOOL(Z_Param_bIsDedicatedServer); \
		P_GET_UBOOL(Z_Param_bUsePresence); \
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresence); \
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly); \
		P_GET_UBOOL(Z_Param_bAntiCheatProtected); \
		P_GET_UBOOL(Z_Param_bUsesStats); \
		P_GET_UBOOL(Z_Param_bShouldAdvertise); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCreateSessionCallbackProxyAdvanced**)Z_Param__Result=UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bIsDedicatedServer,Z_Param_bUsePresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateSessionCallbackProxyAdvanced(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced(); \
public: \
	DECLARE_CLASS(UCreateSessionCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UCreateSessionCallbackProxyAdvanced) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCreateSessionCallbackProxyAdvanced(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced(); \
public: \
	DECLARE_CLASS(UCreateSessionCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UCreateSessionCallbackProxyAdvanced) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UCreateSessionCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateSessionCallbackProxyAdvanced) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UCreateSessionCallbackProxyAdvanced); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateSessionCallbackProxyAdvanced); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UCreateSessionCallbackProxyAdvanced(UCreateSessionCallbackProxyAdvanced&&); \
	ADVANCEDSESSIONS_API UCreateSessionCallbackProxyAdvanced(const UCreateSessionCallbackProxyAdvanced&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UCreateSessionCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UCreateSessionCallbackProxyAdvanced(UCreateSessionCallbackProxyAdvanced&&); \
	ADVANCEDSESSIONS_API UCreateSessionCallbackProxyAdvanced(const UCreateSessionCallbackProxyAdvanced&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UCreateSessionCallbackProxyAdvanced); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateSessionCallbackProxyAdvanced); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateSessionCallbackProxyAdvanced)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_8_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CreateSessionCallbackProxyAdvanced."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CreateSessionCallbackProxyAdvanced_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
