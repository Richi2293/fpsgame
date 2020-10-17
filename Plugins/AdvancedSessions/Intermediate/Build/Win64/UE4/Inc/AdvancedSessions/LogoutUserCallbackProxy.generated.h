// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class ULogoutUserCallbackProxy;
#ifdef ADVANCEDSESSIONS_LogoutUserCallbackProxy_generated_h
#error "LogoutUserCallbackProxy.generated.h already included, missing '#pragma once' in LogoutUserCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_LogoutUserCallbackProxy_generated_h

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_SPARSE_DATA
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogoutUser);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogoutUser);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogoutUserCallbackProxy(); \
	friend struct Z_Construct_UClass_ULogoutUserCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULogoutUserCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(ULogoutUserCallbackProxy)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULogoutUserCallbackProxy(); \
	friend struct Z_Construct_UClass_ULogoutUserCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULogoutUserCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(ULogoutUserCallbackProxy)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogoutUserCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, ULogoutUserCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogoutUserCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(ULogoutUserCallbackProxy&&); \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const ULogoutUserCallbackProxy&); \
public:


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(ULogoutUserCallbackProxy&&); \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const ULogoutUserCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, ULogoutUserCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogoutUserCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogoutUserCallbackProxy)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_10_PROLOG
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LogoutUserCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class ULogoutUserCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
