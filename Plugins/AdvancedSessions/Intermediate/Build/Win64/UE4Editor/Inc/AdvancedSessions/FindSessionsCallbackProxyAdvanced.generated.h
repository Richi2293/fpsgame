// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
struct FSessionsSearchSetting;
class UObject;
class APlayerController;
enum class EBPServerPresenceSearchType : uint8;
class UFindSessionsCallbackProxyAdvanced;
#ifdef ADVANCEDSESSIONS_FindSessionsCallbackProxyAdvanced_generated_h
#error "FindSessionsCallbackProxyAdvanced.generated.h already included, missing '#pragma once' in FindSessionsCallbackProxyAdvanced.h"
#endif
#define ADVANCEDSESSIONS_FindSessionsCallbackProxyAdvanced_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterSessionResults) \
	{ \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_SessionResults); \
		P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters); \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_FilteredResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFindSessionsCallbackProxyAdvanced::FilterSessionResults(Z_Param_Out_SessionResults,Z_Param_Out_Filters,Z_Param_Out_FilteredResults); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSessionsAdvanced) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxResults); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_ENUM(EBPServerPresenceSearchType,Z_Param_ServerTypeToSearch); \
		P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters); \
		P_GET_UBOOL(Z_Param_bEmptyServersOnly); \
		P_GET_UBOOL(Z_Param_bNonEmptyServersOnly); \
		P_GET_UBOOL(Z_Param_bSecureServersOnly); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinSlotsAvailable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFindSessionsCallbackProxyAdvanced**)Z_Param__Result=UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN,EBPServerPresenceSearchType(Z_Param_ServerTypeToSearch),Z_Param_Out_Filters,Z_Param_bEmptyServersOnly,Z_Param_bNonEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_MinSlotsAvailable); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterSessionResults) \
	{ \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_SessionResults); \
		P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters); \
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_FilteredResults); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFindSessionsCallbackProxyAdvanced::FilterSessionResults(Z_Param_Out_SessionResults,Z_Param_Out_Filters,Z_Param_Out_FilteredResults); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSessionsAdvanced) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxResults); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_ENUM(EBPServerPresenceSearchType,Z_Param_ServerTypeToSearch); \
		P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters); \
		P_GET_UBOOL(Z_Param_bEmptyServersOnly); \
		P_GET_UBOOL(Z_Param_bNonEmptyServersOnly); \
		P_GET_UBOOL(Z_Param_bSecureServersOnly); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinSlotsAvailable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFindSessionsCallbackProxyAdvanced**)Z_Param__Result=UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN,EBPServerPresenceSearchType(Z_Param_ServerTypeToSearch),Z_Param_Out_Filters,Z_Param_bEmptyServersOnly,Z_Param_bNonEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_MinSlotsAvailable); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxyAdvanced(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced(); \
public: \
	DECLARE_CLASS(UFindSessionsCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxyAdvanced) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxyAdvanced(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced(); \
public: \
	DECLARE_CLASS(UFindSessionsCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxyAdvanced) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UFindSessionsCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxyAdvanced) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UFindSessionsCallbackProxyAdvanced); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxyAdvanced); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UFindSessionsCallbackProxyAdvanced(UFindSessionsCallbackProxyAdvanced&&); \
	ADVANCEDSESSIONS_API UFindSessionsCallbackProxyAdvanced(const UFindSessionsCallbackProxyAdvanced&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UFindSessionsCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UFindSessionsCallbackProxyAdvanced(UFindSessionsCallbackProxyAdvanced&&); \
	ADVANCEDSESSIONS_API UFindSessionsCallbackProxyAdvanced(const UFindSessionsCallbackProxyAdvanced&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UFindSessionsCallbackProxyAdvanced); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxyAdvanced); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxyAdvanced)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_9_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FindSessionsCallbackProxyAdvanced."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_FindSessionsCallbackProxyAdvanced_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
