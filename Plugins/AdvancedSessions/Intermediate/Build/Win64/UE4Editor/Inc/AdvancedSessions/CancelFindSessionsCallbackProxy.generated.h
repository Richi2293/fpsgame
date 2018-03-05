// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class UCancelFindSessionsCallbackProxy;
#ifdef ADVANCEDSESSIONS_CancelFindSessionsCallbackProxy_generated_h
#error "CancelFindSessionsCallbackProxy.generated.h already included, missing '#pragma once' in CancelFindSessionsCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_CancelFindSessionsCallbackProxy_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCancelFindSessionsCallbackProxy**)Z_Param__Result=UCancelFindSessionsCallbackProxy::CancelFindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCancelFindSessionsCallbackProxy**)Z_Param__Result=UCancelFindSessionsCallbackProxy::CancelFindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCancelFindSessionsCallbackProxy(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UCancelFindSessionsCallbackProxy(); \
public: \
	DECLARE_CLASS(UCancelFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UCancelFindSessionsCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCancelFindSessionsCallbackProxy(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UCancelFindSessionsCallbackProxy(); \
public: \
	DECLARE_CLASS(UCancelFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UCancelFindSessionsCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCancelFindSessionsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UCancelFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCancelFindSessionsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(UCancelFindSessionsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const UCancelFindSessionsCallbackProxy&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(UCancelFindSessionsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const UCancelFindSessionsCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UCancelFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCancelFindSessionsCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCancelFindSessionsCallbackProxy)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_8_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CancelFindSessionsCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
