// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
class UObject;
class APlayerController;
struct FBPUniqueNetId;
class UFindFriendSessionCallbackProxy;
#ifdef ADVANCEDSESSIONS_FindFriendSessionCallbackProxy_generated_h
#error "FindFriendSessionCallbackProxy.generated.h already included, missing '#pragma once' in FindFriendSessionCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_FindFriendSessionCallbackProxy_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_11_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms \
{ \
	TArray<FBlueprintSessionResult> SessionInfo; \
}; \
static inline void FBlueprintFindFriendSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindFriendSessionDelegate, TArray<FBlueprintSessionResult> const& SessionInfo) \
{ \
	_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms Parms; \
	Parms.SessionInfo=SessionInfo; \
	BlueprintFindFriendSessionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFriendSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFindFriendSessionCallbackProxy**)Z_Param__Result=UFindFriendSessionCallbackProxy::FindFriendSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFriendSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFindFriendSessionCallbackProxy**)Z_Param__Result=UFindFriendSessionCallbackProxy::FindFriendSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindFriendSessionCallbackProxy(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy(); \
public: \
	DECLARE_CLASS(UFindFriendSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UFindFriendSessionCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFindFriendSessionCallbackProxy(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy(); \
public: \
	DECLARE_CLASS(UFindFriendSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UFindFriendSessionCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UFindFriendSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindFriendSessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UFindFriendSessionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindFriendSessionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UFindFriendSessionCallbackProxy(UFindFriendSessionCallbackProxy&&); \
	ADVANCEDSESSIONS_API UFindFriendSessionCallbackProxy(const UFindFriendSessionCallbackProxy&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UFindFriendSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UFindFriendSessionCallbackProxy(UFindFriendSessionCallbackProxy&&); \
	ADVANCEDSESSIONS_API UFindFriendSessionCallbackProxy(const UFindFriendSessionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UFindFriendSessionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindFriendSessionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindFriendSessionCallbackProxy)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_13_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FindFriendSessionCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
