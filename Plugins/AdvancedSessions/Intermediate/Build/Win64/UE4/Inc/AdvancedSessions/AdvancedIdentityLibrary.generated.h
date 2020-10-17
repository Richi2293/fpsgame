// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPUserOnlineAccount;
enum class EBlueprintResultSwitch : uint8;
struct FBPUniqueNetId;
class APlayerController;
enum class EBPLoginStatus : uint8;
#ifdef ADVANCEDSESSIONS_AdvancedIdentityLibrary_generated_h
#error "AdvancedIdentityLibrary.generated.h already included, missing '#pragma once' in AdvancedIdentityLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedIdentityLibrary_generated_h

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_SPARSE_DATA
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserAccountAttribute); \
	DECLARE_FUNCTION(execGetUserAccountDisplayName); \
	DECLARE_FUNCTION(execGetUserAccountRealName); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execSetUserAccountAttribute); \
	DECLARE_FUNCTION(execGetUserAccountAuthAttribute); \
	DECLARE_FUNCTION(execGetUserAccountAccessToken); \
	DECLARE_FUNCTION(execGetAllUserAccounts); \
	DECLARE_FUNCTION(execGetUserAccount); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPlayerAuthToken); \
	DECLARE_FUNCTION(execGetLoginStatus);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserAccountAttribute); \
	DECLARE_FUNCTION(execGetUserAccountDisplayName); \
	DECLARE_FUNCTION(execGetUserAccountRealName); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execSetUserAccountAttribute); \
	DECLARE_FUNCTION(execGetUserAccountAuthAttribute); \
	DECLARE_FUNCTION(execGetUserAccountAccessToken); \
	DECLARE_FUNCTION(execGetAllUserAccounts); \
	DECLARE_FUNCTION(execGetUserAccount); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPlayerAuthToken); \
	DECLARE_FUNCTION(execGetLoginStatus);


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedIdentityLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedIdentityLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedIdentityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedIdentityLibrary)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedIdentityLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedIdentityLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedIdentityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedIdentityLibrary)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedIdentityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedIdentityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedIdentityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedIdentityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedIdentityLibrary(UAdvancedIdentityLibrary&&); \
	NO_API UAdvancedIdentityLibrary(const UAdvancedIdentityLibrary&); \
public:


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedIdentityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedIdentityLibrary(UAdvancedIdentityLibrary&&); \
	NO_API UAdvancedIdentityLibrary(const UAdvancedIdentityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedIdentityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedIdentityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedIdentityLibrary)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_23_PROLOG
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedIdentityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
