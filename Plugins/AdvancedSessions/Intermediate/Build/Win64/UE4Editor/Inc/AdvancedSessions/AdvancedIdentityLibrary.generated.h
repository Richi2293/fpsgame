// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

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

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserAccountAttribute) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AttributeValue); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_Out_AttributeValue,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountDisplayName) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DisplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountDisplayName(Z_Param_Out_AccountInfo,Z_Param_Out_DisplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountRealName) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_UserName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountRealName(Z_Param_Out_AccountInfo,Z_Param_Out_UserName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserID) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserID(Z_Param_Out_AccountInfo,Z_Param_Out_UniqueNetID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserAccountAttribute) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewAttributeValue); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::SetUserAccountAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_NewAttributeValue,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountAuthAttribute) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AuthAttribute); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_Out_AuthAttribute,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountAccessToken) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AccessToken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountAccessToken(Z_Param_Out_AccountInfo,Z_Param_Out_AccessToken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllUserAccounts) \
	{ \
		P_GET_TARRAY_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfos); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetAllUserAccounts(Z_Param_Out_AccountInfos,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccount) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccount(Z_Param_Out_UniqueNetId,Z_Param_Out_AccountInfo,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerNickname) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PlayerNickname); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetPlayerNickname(Z_Param_Out_UniqueNetID,Z_Param_Out_PlayerNickname); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerAuthToken) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AuthToken); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetPlayerAuthToken(Z_Param_PlayerController,Z_Param_Out_AuthToken,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginStatus) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID); \
		P_GET_ENUM_REF(EBPLoginStatus,Z_Param_Out_LoginStatus); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetLoginStatus(Z_Param_Out_UniqueNetID,(EBPLoginStatus&)(Z_Param_Out_LoginStatus),(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserAccountAttribute) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AttributeValue); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_Out_AttributeValue,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountDisplayName) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DisplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountDisplayName(Z_Param_Out_AccountInfo,Z_Param_Out_DisplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountRealName) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_UserName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountRealName(Z_Param_Out_AccountInfo,Z_Param_Out_UserName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserID) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserID(Z_Param_Out_AccountInfo,Z_Param_Out_UniqueNetID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserAccountAttribute) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewAttributeValue); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::SetUserAccountAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_NewAttributeValue,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountAuthAttribute) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AttributeName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AuthAttribute); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_Out_AuthAttribute,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccountAccessToken) \
	{ \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AccessToken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccountAccessToken(Z_Param_Out_AccountInfo,Z_Param_Out_AccessToken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllUserAccounts) \
	{ \
		P_GET_TARRAY_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfos); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetAllUserAccounts(Z_Param_Out_AccountInfos,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserAccount) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetUserAccount(Z_Param_Out_UniqueNetId,Z_Param_Out_AccountInfo,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerNickname) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PlayerNickname); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetPlayerNickname(Z_Param_Out_UniqueNetID,Z_Param_Out_PlayerNickname); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerAuthToken) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AuthToken); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetPlayerAuthToken(Z_Param_PlayerController,Z_Param_Out_AuthToken,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoginStatus) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID); \
		P_GET_ENUM_REF(EBPLoginStatus,Z_Param_Out_LoginStatus); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedIdentityLibrary::GetLoginStatus(Z_Param_Out_UniqueNetID,(EBPLoginStatus&)(Z_Param_Out_LoginStatus),(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedIdentityLibrary(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedIdentityLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedIdentityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedIdentityLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedIdentityLibrary(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedIdentityLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedIdentityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedIdentityLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_STANDARD_CONSTRUCTORS \
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


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_ENHANCED_CONSTRUCTORS \
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


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_23_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedIdentityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
