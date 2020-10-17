// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPUserPrivileges : uint8;
class UObject;
struct FBPUniqueNetId;
class UGetUserPrivilegeCallbackProxy;
#ifdef ADVANCEDSESSIONS_GetUserPrivilegeCallbackProxy_generated_h
#error "GetUserPrivilegeCallbackProxy.generated.h already included, missing '#pragma once' in GetUserPrivilegeCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_GetUserPrivilegeCallbackProxy_generated_h

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_9_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms \
{ \
	EBPUserPrivileges QueriedPrivilege; \
	bool HadPrivilege; \
}; \
static inline void FBlueprintGetUserPrivilegeDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetUserPrivilegeDelegate, EBPUserPrivileges QueriedPrivilege, bool HadPrivilege) \
{ \
	_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms Parms; \
	Parms.QueriedPrivilege=QueriedPrivilege; \
	Parms.HadPrivilege=HadPrivilege ? true : false; \
	BlueprintGetUserPrivilegeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserPrivilege);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserPrivilege);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetUserPrivilegeCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetUserPrivilegeCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetUserPrivilegeCallbackProxy)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGetUserPrivilegeCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetUserPrivilegeCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetUserPrivilegeCallbackProxy)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetUserPrivilegeCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetUserPrivilegeCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetUserPrivilegeCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(UGetUserPrivilegeCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const UGetUserPrivilegeCallbackProxy&); \
public:


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(UGetUserPrivilegeCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const UGetUserPrivilegeCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetUserPrivilegeCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetUserPrivilegeCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetUserPrivilegeCallbackProxy)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_11_PROLOG
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GetUserPrivilegeCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UGetUserPrivilegeCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
