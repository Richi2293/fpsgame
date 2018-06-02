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
class UUpdateSessionCallbackProxyAdvanced;
#ifdef ADVANCEDSESSIONS_UpdateSessionCallbackProxyAdvanced_generated_h
#error "UpdateSessionCallbackProxyAdvanced.generated.h already included, missing '#pragma once' in UpdateSessionCallbackProxyAdvanced.h"
#endif
#define ADVANCEDSESSIONS_UpdateSessionCallbackProxyAdvanced_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PublicConnections); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PrivateConnections); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_UBOOL(Z_Param_bAllowInvites); \
		P_GET_UBOOL(Z_Param_bAllowJoinInProgress); \
		P_GET_UBOOL(Z_Param_bRefreshOnlineData); \
		P_GET_UBOOL(Z_Param_bIsDedicatedServer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUpdateSessionCallbackProxyAdvanced**)Z_Param__Result=UUpdateSessionCallbackProxyAdvanced::UpdateSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bAllowJoinInProgress,Z_Param_bRefreshOnlineData,Z_Param_bIsDedicatedServer); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PublicConnections); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PrivateConnections); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_UBOOL(Z_Param_bAllowInvites); \
		P_GET_UBOOL(Z_Param_bAllowJoinInProgress); \
		P_GET_UBOOL(Z_Param_bRefreshOnlineData); \
		P_GET_UBOOL(Z_Param_bIsDedicatedServer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUpdateSessionCallbackProxyAdvanced**)Z_Param__Result=UUpdateSessionCallbackProxyAdvanced::UpdateSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bAllowJoinInProgress,Z_Param_bRefreshOnlineData,Z_Param_bIsDedicatedServer); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateSessionCallbackProxyAdvanced(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced(); \
public: \
	DECLARE_CLASS(UUpdateSessionCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UUpdateSessionCallbackProxyAdvanced) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateSessionCallbackProxyAdvanced(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced(); \
public: \
	DECLARE_CLASS(UUpdateSessionCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UUpdateSessionCallbackProxyAdvanced) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UUpdateSessionCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateSessionCallbackProxyAdvanced) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UUpdateSessionCallbackProxyAdvanced); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateSessionCallbackProxyAdvanced); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UUpdateSessionCallbackProxyAdvanced(UUpdateSessionCallbackProxyAdvanced&&); \
	ADVANCEDSESSIONS_API UUpdateSessionCallbackProxyAdvanced(const UUpdateSessionCallbackProxyAdvanced&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UUpdateSessionCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UUpdateSessionCallbackProxyAdvanced(UUpdateSessionCallbackProxyAdvanced&&); \
	ADVANCEDSESSIONS_API UUpdateSessionCallbackProxyAdvanced(const UUpdateSessionCallbackProxyAdvanced&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UUpdateSessionCallbackProxyAdvanced); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateSessionCallbackProxyAdvanced); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateSessionCallbackProxyAdvanced)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_8_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UpdateSessionCallbackProxyAdvanced."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_UpdateSessionCallbackProxyAdvanced_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
