// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
struct FBPUniqueNetId;
class APlayerState;
struct FSessionPropertyKeyPair;
enum class ESessionSettingSearchResult : uint8;
struct FBlueprintSessionResult;
enum class EOnlineComparisonOpRedux : uint8;
struct FSessionsSearchSetting;
enum class EBlueprintResultSwitch : uint8;
enum class EBPOnlineSessionState : uint8;
#ifdef ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h
#error "AdvancedSessionsLibrary.generated.h already included, missing '#pragma once' in AdvancedSessionsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasOnlineSubsystem) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SubSystemName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::HasOnlineSubsystem(Z_Param_SubSystemName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNetPlayerIndex) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetNetPlayerIndex(Z_Param_PlayerController,Z_Param_Out_NetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumNetPlayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(Z_Param_WorldContextObject,Z_Param_Out_NumNetPlayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerName) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::SetPlayerName(Z_Param_PlayerController,Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetPlayerName(Z_Param_PlayerController,Z_Param_Out_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUniqueNetIdToString) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::UniqueNetIdToString(Z_Param_Out_UniqueNetId,Z_Param_Out_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidUniqueNetID) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidUniqueNetID(Z_Param_Out_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(Z_Param_PlayerState,Z_Param_Out_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueNetID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetUniqueNetID(Z_Param_PlayerController,Z_Param_Out_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyFloat) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyFloat(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyInt) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyInt(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyString) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyString(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyBool) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_UBOOL_REF(Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyBool(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyByte) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyByte(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueBuildID) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UniqueBuildId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetUniqueBuildID(Z_Param_SessionResult,Z_Param_Out_UniqueBuildId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UniqueBuildId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(Z_Param_Out_UniqueBuildId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSession) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidSession(Z_Param_Out_SessionResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty) \
	{ \
		P_GET_STRUCT(FSessionPropertyKeyPair,Z_Param_SessionSearchProperty); \
		P_GET_ENUM(EOnlineComparisonOpRedux,Z_Param_ComparisonOp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionsSearchSetting*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(Z_Param_SessionSearchProperty,EOnlineComparisonOpRedux(Z_Param_ComparisonOp)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerInSession) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerToCheck); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsInSession); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::IsPlayerInSession(Z_Param_Out_PlayerToCheck,Z_Param_Out_bIsInSession); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionSettings) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumConnections); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumPrivateConnections); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsLAN); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsDedicated); \
		P_GET_UBOOL_REF(Z_Param_Out_bAllowInvites); \
		P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinInProgress); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsAnticheatEnabled); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_BuildUniqueID); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionSettings(Z_Param_Out_NumConnections,Z_Param_Out_NumPrivateConnections,Z_Param_Out_bIsLAN,Z_Param_Out_bIsDedicated,Z_Param_Out_bAllowInvites,Z_Param_Out_bAllowJoinInProgress,Z_Param_Out_bIsAnticheatEnabled,Z_Param_Out_BuildUniqueID,Z_Param_Out_ExtraSettings,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionState) \
	{ \
		P_GET_ENUM_REF(EBPOnlineSessionState,Z_Param_Out_SessionState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionState((EBPOnlineSessionState&)(Z_Param_Out_SessionState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtraSettings) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetExtraSettings(Z_Param_SessionResult,Z_Param_Out_ExtraSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_SettingsArray); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_NewOrChangedSettings); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ModifiedSettingsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::AddOrModifyExtraSettings(Z_Param_Out_SettingsArray,Z_Param_Out_NewOrChangedSettings,Z_Param_Out_ModifiedSettingsArray); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasOnlineSubsystem) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SubSystemName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::HasOnlineSubsystem(Z_Param_SubSystemName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNetPlayerIndex) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetNetPlayerIndex(Z_Param_PlayerController,Z_Param_Out_NetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumNetPlayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(Z_Param_WorldContextObject,Z_Param_Out_NumNetPlayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerName) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::SetPlayerName(Z_Param_PlayerController,Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerName) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetPlayerName(Z_Param_PlayerController,Z_Param_Out_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUniqueNetIdToString) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::UniqueNetIdToString(Z_Param_Out_UniqueNetId,Z_Param_Out_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidUniqueNetID) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidUniqueNetID(Z_Param_Out_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(Z_Param_PlayerState,Z_Param_Out_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueNetID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetUniqueNetID(Z_Param_PlayerController,Z_Param_Out_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyFloat) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyFloat(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyInt) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyInt(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyString) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyString(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyBool) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_UBOOL_REF(Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyBool(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionPropertyByte) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SettingName); \
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_SettingValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionPropertyByte(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqueBuildID) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UniqueBuildId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetUniqueBuildID(Z_Param_SessionResult,Z_Param_Out_UniqueBuildId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UniqueBuildId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(Z_Param_Out_UniqueBuildId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSession) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidSession(Z_Param_Out_SessionResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty) \
	{ \
		P_GET_STRUCT(FSessionPropertyKeyPair,Z_Param_SessionSearchProperty); \
		P_GET_ENUM(EOnlineComparisonOpRedux,Z_Param_ComparisonOp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSessionsSearchSetting*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(Z_Param_SessionSearchProperty,EOnlineComparisonOpRedux(Z_Param_ComparisonOp)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerInSession) \
	{ \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerToCheck); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsInSession); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::IsPlayerInSession(Z_Param_Out_PlayerToCheck,Z_Param_Out_bIsInSession); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionSettings) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumConnections); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumPrivateConnections); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsLAN); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsDedicated); \
		P_GET_UBOOL_REF(Z_Param_Out_bAllowInvites); \
		P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinInProgress); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsAnticheatEnabled); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_BuildUniqueID); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionSettings(Z_Param_Out_NumConnections,Z_Param_Out_NumPrivateConnections,Z_Param_Out_bIsLAN,Z_Param_Out_bIsDedicated,Z_Param_Out_bAllowInvites,Z_Param_Out_bAllowJoinInProgress,Z_Param_Out_bIsAnticheatEnabled,Z_Param_Out_BuildUniqueID,Z_Param_Out_ExtraSettings,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSessionState) \
	{ \
		P_GET_ENUM_REF(EBPOnlineSessionState,Z_Param_Out_SessionState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetSessionState((EBPOnlineSessionState&)(Z_Param_Out_SessionState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtraSettings) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::GetExtraSettings(Z_Param_SessionResult,Z_Param_Out_ExtraSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings) \
	{ \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_SettingsArray); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_NewOrChangedSettings); \
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ModifiedSettingsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSessionsLibrary::AddOrModifyExtraSettings(Z_Param_Out_SettingsArray,Z_Param_Out_NewOrChangedSettings,Z_Param_Out_ModifiedSettingsArray); \
		P_NATIVE_END; \
	}


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSessionsLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSessionsLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public:


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary)


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_25_PROLOG
#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_RPC_WRAPPERS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_INCLASS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_INCLASS_NO_PURE_DECLS \
	fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
