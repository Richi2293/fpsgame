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
class ULoginUserCallbackProxy;
#ifdef ADVANCEDSESSIONS_LoginUserCallbackProxy_generated_h
#error "LoginUserCallbackProxy.generated.h already included, missing '#pragma once' in LoginUserCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_LoginUserCallbackProxy_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_SPARSE_DATA
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoginUser);


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoginUser);


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoginUserCallbackProxy(); \
	friend struct Z_Construct_UClass_ULoginUserCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULoginUserCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(ULoginUserCallbackProxy)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULoginUserCallbackProxy(); \
	friend struct Z_Construct_UClass_ULoginUserCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULoginUserCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(ULoginUserCallbackProxy)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API ULoginUserCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoginUserCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, ULoginUserCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoginUserCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API ULoginUserCallbackProxy(ULoginUserCallbackProxy&&); \
	ADVANCEDSESSIONS_API ULoginUserCallbackProxy(const ULoginUserCallbackProxy&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API ULoginUserCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API ULoginUserCallbackProxy(ULoginUserCallbackProxy&&); \
	ADVANCEDSESSIONS_API ULoginUserCallbackProxy(const ULoginUserCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, ULoginUserCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoginUserCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoginUserCallbackProxy)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_10_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_SPARSE_DATA \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_SPARSE_DATA \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LoginUserCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class ULoginUserCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_LoginUserCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
