// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedSessionsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSessionsLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSessionsLibrary_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSessionsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execHasOnlineSubsystem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubSystemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::HasOnlineSubsystem(Z_Param_SubSystemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetNetPlayerIndex)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetNetPlayerIndex(Z_Param_PlayerController,Z_Param_Out_NetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetNumberOfNetworkPlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumNetPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(Z_Param_WorldContextObject,Z_Param_Out_NumNetPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execSetPlayerName)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::SetPlayerName(Z_Param_PlayerController,Z_Param_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetPlayerName)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetPlayerName(Z_Param_PlayerController,Z_Param_Out_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execUniqueNetIdToString)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::UniqueNetIdToString(Z_Param_Out_UniqueNetId,Z_Param_Out_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execEqualEqual_UNetIDUnetID)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_A);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execIsValidUniqueNetID)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidUniqueNetID(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetUniqueNetIDFromPlayerState)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(Z_Param_PlayerState,Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetUniqueNetID)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetUniqueNetID(Z_Param_PlayerController,Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyFloat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyByte)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionPropertyKeyPair*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyFloat)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyFloat(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyInt)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyInt(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyString)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyString(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyBool)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_UBOOL_REF(Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyBool(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyByte)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(ESessionSettingSearchResult,Z_Param_Out_SearchResult);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_SettingValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionPropertyByte(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(ESessionSettingSearchResult&)(Z_Param_Out_SearchResult),Z_Param_Out_SettingValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execFindSessionPropertyIndexByName)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingName);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::FindSessionPropertyIndexByName(Z_Param_Out_ExtraSettings,Z_Param_SettingName,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execFindSessionPropertyByName)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_SettingsName);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_GET_STRUCT_REF(FSessionPropertyKeyPair,Z_Param_Out_OutProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::FindSessionPropertyByName(Z_Param_Out_ExtraSettings,Z_Param_SettingsName,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_OutProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionPropertyKey)
	{
		P_GET_STRUCT_REF(FSessionPropertyKeyPair,Z_Param_Out_SessionProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAdvancedSessionsLibrary::GetSessionPropertyKey(Z_Param_Out_SessionProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetUniqueBuildID)
	{
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UniqueBuildId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetUniqueBuildID(Z_Param_SessionResult,Z_Param_Out_UniqueBuildId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetCurrentUniqueBuildID)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UniqueBuildId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(Z_Param_Out_UniqueBuildId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetCurrentSessionID_AsString)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetCurrentSessionID_AsString(Z_Param_WorldContextObject,Z_Param_Out_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionID_AsString)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionID_AsString(Z_Param_Out_SessionResult,Z_Param_Out_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execIsValidSession)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SessionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::IsValidSession(Z_Param_Out_SessionResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execMakeLiteralSessionSearchProperty)
	{
		P_GET_STRUCT(FSessionPropertyKeyPair,Z_Param_SessionSearchProperty);
		P_GET_ENUM(EOnlineComparisonOpRedux,Z_Param_ComparisonOp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionsSearchSetting*)Z_Param__Result=UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(Z_Param_SessionSearchProperty,EOnlineComparisonOpRedux(Z_Param_ComparisonOp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execIsPlayerInSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerToCheck);
		P_GET_UBOOL_REF(Z_Param_Out_bIsInSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::IsPlayerInSession(Z_Param_WorldContextObject,Z_Param_Out_PlayerToCheck,Z_Param_Out_bIsInSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumConnections);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumPrivateConnections);
		P_GET_UBOOL_REF(Z_Param_Out_bIsLAN);
		P_GET_UBOOL_REF(Z_Param_Out_bIsDedicated);
		P_GET_UBOOL_REF(Z_Param_Out_bAllowInvites);
		P_GET_UBOOL_REF(Z_Param_Out_bAllowJoinInProgress);
		P_GET_UBOOL_REF(Z_Param_Out_bIsAnticheatEnabled);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildUniqueID);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionSettings(Z_Param_WorldContextObject,Z_Param_Out_NumConnections,Z_Param_Out_NumPrivateConnections,Z_Param_Out_bIsLAN,Z_Param_Out_bIsDedicated,Z_Param_Out_bAllowInvites,Z_Param_Out_bAllowJoinInProgress,Z_Param_Out_bIsAnticheatEnabled,Z_Param_Out_BuildUniqueID,Z_Param_Out_ExtraSettings,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetSessionState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(EBPOnlineSessionState,Z_Param_Out_SessionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetSessionState(Z_Param_WorldContextObject,(EBPOnlineSessionState&)(Z_Param_Out_SessionState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execGetExtraSettings)
	{
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::GetExtraSettings(Z_Param_SessionResult,Z_Param_Out_ExtraSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execAddOrModifyExtraSettings)
	{
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_SettingsArray);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_NewOrChangedSettings);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ModifiedSettingsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSessionsLibrary::AddOrModifyExtraSettings(Z_Param_Out_SettingsArray,Z_Param_Out_NewOrChangedSettings,Z_Param_Out_ModifiedSettingsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execBanPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerToBan);
		P_GET_PROPERTY(FTextProperty,Z_Param_BanReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::BanPlayer(Z_Param_WorldContextObject,Z_Param_PlayerToBan,Z_Param_BanReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSessionsLibrary::execKickPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerToKick);
		P_GET_PROPERTY(FTextProperty,Z_Param_KickReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedSessionsLibrary::KickPlayer(Z_Param_WorldContextObject,Z_Param_PlayerToKick,Z_Param_KickReason);
		P_NATIVE_END;
	}
	void UAdvancedSessionsLibrary::StaticRegisterNativesUAdvancedSessionsLibrary()
	{
		UClass* Class = UAdvancedSessionsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrModifyExtraSettings", &UAdvancedSessionsLibrary::execAddOrModifyExtraSettings },
			{ "BanPlayer", &UAdvancedSessionsLibrary::execBanPlayer },
			{ "EqualEqual_UNetIDUnetID", &UAdvancedSessionsLibrary::execEqualEqual_UNetIDUnetID },
			{ "FindSessionPropertyByName", &UAdvancedSessionsLibrary::execFindSessionPropertyByName },
			{ "FindSessionPropertyIndexByName", &UAdvancedSessionsLibrary::execFindSessionPropertyIndexByName },
			{ "GetCurrentSessionID_AsString", &UAdvancedSessionsLibrary::execGetCurrentSessionID_AsString },
			{ "GetCurrentUniqueBuildID", &UAdvancedSessionsLibrary::execGetCurrentUniqueBuildID },
			{ "GetExtraSettings", &UAdvancedSessionsLibrary::execGetExtraSettings },
			{ "GetNetPlayerIndex", &UAdvancedSessionsLibrary::execGetNetPlayerIndex },
			{ "GetNumberOfNetworkPlayers", &UAdvancedSessionsLibrary::execGetNumberOfNetworkPlayers },
			{ "GetPlayerName", &UAdvancedSessionsLibrary::execGetPlayerName },
			{ "GetSessionID_AsString", &UAdvancedSessionsLibrary::execGetSessionID_AsString },
			{ "GetSessionPropertyBool", &UAdvancedSessionsLibrary::execGetSessionPropertyBool },
			{ "GetSessionPropertyByte", &UAdvancedSessionsLibrary::execGetSessionPropertyByte },
			{ "GetSessionPropertyFloat", &UAdvancedSessionsLibrary::execGetSessionPropertyFloat },
			{ "GetSessionPropertyInt", &UAdvancedSessionsLibrary::execGetSessionPropertyInt },
			{ "GetSessionPropertyKey", &UAdvancedSessionsLibrary::execGetSessionPropertyKey },
			{ "GetSessionPropertyString", &UAdvancedSessionsLibrary::execGetSessionPropertyString },
			{ "GetSessionSettings", &UAdvancedSessionsLibrary::execGetSessionSettings },
			{ "GetSessionState", &UAdvancedSessionsLibrary::execGetSessionState },
			{ "GetUniqueBuildID", &UAdvancedSessionsLibrary::execGetUniqueBuildID },
			{ "GetUniqueNetID", &UAdvancedSessionsLibrary::execGetUniqueNetID },
			{ "GetUniqueNetIDFromPlayerState", &UAdvancedSessionsLibrary::execGetUniqueNetIDFromPlayerState },
			{ "HasOnlineSubsystem", &UAdvancedSessionsLibrary::execHasOnlineSubsystem },
			{ "IsPlayerInSession", &UAdvancedSessionsLibrary::execIsPlayerInSession },
			{ "IsValidSession", &UAdvancedSessionsLibrary::execIsValidSession },
			{ "IsValidUniqueNetID", &UAdvancedSessionsLibrary::execIsValidUniqueNetID },
			{ "KickPlayer", &UAdvancedSessionsLibrary::execKickPlayer },
			{ "MakeLiteralSessionPropertyBool", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyBool },
			{ "MakeLiteralSessionPropertyByte", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyByte },
			{ "MakeLiteralSessionPropertyFloat", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyFloat },
			{ "MakeLiteralSessionPropertyInt", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyInt },
			{ "MakeLiteralSessionPropertyString", &UAdvancedSessionsLibrary::execMakeLiteralSessionPropertyString },
			{ "MakeLiteralSessionSearchProperty", &UAdvancedSessionsLibrary::execMakeLiteralSessionSearchProperty },
			{ "SetPlayerName", &UAdvancedSessionsLibrary::execSetPlayerName },
			{ "UniqueNetIdToString", &UAdvancedSessionsLibrary::execUniqueNetIdToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics
	{
		struct AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms
		{
			TArray<FSessionPropertyKeyPair> SettingsArray;
			TArray<FSessionPropertyKeyPair> NewOrChangedSettings;
			TArray<FSessionPropertyKeyPair> ModifiedSettingsArray;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedSettingsArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedSettingsArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewOrChangedSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewOrChangedSettings_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SettingsArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingsArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray = { "ModifiedSettingsArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms, ModifiedSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray_Inner = { "ModifiedSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings = { "NewOrChangedSettings", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms, NewOrChangedSettings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings_Inner = { "NewOrChangedSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray = { "SettingsArray", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms, SettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray_Inner = { "SettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_ModifiedSettingsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_NewOrChangedSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::NewProp_SettingsArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Adds or modifies session settings in an existing array depending on if they exist already or not\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Adds or modifies session settings in an existing array depending on if they exist already or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "AddOrModifyExtraSettings", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventAddOrModifyExtraSettings_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics
	{
		struct AdvancedSessionsLibrary_eventBanPlayer_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerToBan;
			FText BanReason;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BanReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerToBan;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventBanPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventBanPlayer_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_BanReason = { "BanReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventBanPlayer_Parms, BanReason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_PlayerToBan = { "PlayerToBan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventBanPlayer_Parms, PlayerToBan), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventBanPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_BanReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_PlayerToBan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "// Ban a player from the currently active game session, only available on the server\n// Note that the default gamesession class does not implement an actual ban list and just kicks when this is called\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Ban a player from the currently active game session, only available on the server\nNote that the default gamesession class does not implement an actual ban list and just kicks when this is called" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "BanPlayer", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventBanPlayer_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics
	{
		struct AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms
		{
			FBPUniqueNetId A;
			FBPUniqueNetId B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms, B), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms, A), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
		{ "Comment", "/* Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal Unique Net ID" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "EqualEqual_UNetIDUnetID", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventEqualEqual_UNetIDUnetID_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics
	{
		struct AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingsName;
			EBlueprintResultSwitch Result;
			FSessionPropertyKeyPair OutProperty;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutProperty;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_OutProperty = { "OutProperty", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, OutProperty), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_SettingsName = { "SettingsName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, SettingsName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_OutProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_SettingsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Find session property by Name\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Find session property by Name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "FindSessionPropertyByName", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventFindSessionPropertyByName_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics
	{
		struct AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			EBlueprintResultSwitch Result;
			int32 OutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_OutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Find session property index by Name\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Find session property index by Name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "FindSessionPropertyIndexByName", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventFindSessionPropertyIndexByName_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics
	{
		struct AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms
		{
			UObject* WorldContextObject;
			FString SessionID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get a string copy of the current session ID\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get a string copy of the current session ID" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetCurrentSessionID_AsString", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetCurrentSessionID_AsString_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics
	{
		struct AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms
		{
			int32 UniqueBuildId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueBuildId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::NewProp_UniqueBuildId = { "UniqueBuildId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms, UniqueBuildId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::NewProp_UniqueBuildId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get the Unique Current Build ID\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the Unique Current Build ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetCurrentUniqueBuildID", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetCurrentUniqueBuildID_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics
	{
		struct AdvancedSessionsLibrary_eventGetExtraSettings_Parms
		{
			FBlueprintSessionResult SessionResult;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetExtraSettings_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetExtraSettings_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_ExtraSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::NewProp_SessionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get an array of the session settings from a session search result\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get an array of the session settings from a session search result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetExtraSettings", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetExtraSettings_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics
	{
		struct AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms
		{
			APlayerController* PlayerController;
			int32 NetPlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetPlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_NetPlayerIndex = { "NetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms, NetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_NetPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|Misc" },
		{ "Comment", "// Get the network player index of the given controller\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the network player index of the given controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetNetPlayerIndex", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetNetPlayerIndex_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics
	{
		struct AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms
		{
			UObject* WorldContextObject;
			int32 NumNetPlayers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumNetPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_NumNetPlayers = { "NumNetPlayers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms, NumNetPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_NumNetPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "Online|AdvancedSessions|PlayerInfo|Misc" },
		{ "Comment", "// Get the number of network players\n" },
		{ "DisplayName", "GetNumNetworkPlayers" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the number of network players" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetNumberOfNetworkPlayers", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetNumberOfNetworkPlayers_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics
	{
		struct AdvancedSessionsLibrary_eventGetPlayerName_Parms
		{
			APlayerController* PlayerController;
			FString PlayerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetPlayerName_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetPlayerName_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerName" },
		{ "Comment", "// Get the player name of a network player attached to the given controller\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the player name of a network player attached to the given controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetPlayerName", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetPlayerName_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms
		{
			FBlueprintSessionResult SessionResult;
			FString SessionID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::NewProp_SessionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get a string copy of a session ID\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get a string copy of a session ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionID_AsString", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionID_AsString_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			bool SettingValue;
		};
		static void NewProp_SettingValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms*)Obj)->SettingValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SearchResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get session custom information key/value as Bool\n// Steam only currently supports Int,Float,String,BYTE values for search filtering!!!\n" },
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get session custom information key/value as Bool\nSteam only currently supports Int,Float,String,BYTE values for search filtering!!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyBool", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyBool_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			uint8 SettingValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, SettingValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SearchResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get session custom information key/value as Byte (For Enums)\n" },
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get session custom information key/value as Byte (For Enums)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyByte", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyByte_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			float SettingValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, SettingValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SearchResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get session custom information key/value as Float\n" },
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get session custom information key/value as Float" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyFloat", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyFloat_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			int32 SettingValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, SettingValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SearchResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get session custom information key/value as Int\n" },
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get session custom information key/value as Int" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyInt", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyInt_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms
		{
			FSessionPropertyKeyPair SessionProperty;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty = { "SessionProperty", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms, SessionProperty), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::NewProp_SessionProperty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get session property Key Name value\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get session property Key Name value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyKey", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyKey_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms
		{
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			FName SettingName;
			ESessionSettingSearchResult SearchResult;
			FString SettingValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchResult_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, SettingValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, SearchResult), Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SearchResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::NewProp_ExtraSettings_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get session custom information key/value as String\n" },
		{ "ExpandEnumAsExecs", "SearchResult" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get session custom information key/value as String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionPropertyString", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionPropertyString_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionSettings_Parms
		{
			UObject* WorldContextObject;
			int32 NumConnections;
			int32 NumPrivateConnections;
			bool bIsLAN;
			bool bIsDedicated;
			bool bAllowInvites;
			bool bAllowJoinInProgress;
			bool bIsAnticheatEnabled;
			int32 BuildUniqueID;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BuildUniqueID;
		static void NewProp_bIsAnticheatEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnticheatEnabled;
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bIsDedicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDedicated;
		static void NewProp_bIsLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPrivateConnections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_BuildUniqueID = { "BuildUniqueID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, BuildUniqueID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bIsAnticheatEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled = { "bIsAnticheatEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bAllowJoinInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bAllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bIsDedicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated = { "bIsDedicated", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventGetSessionSettings_Parms*)Obj)->bIsLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN = { "bIsLAN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumPrivateConnections = { "NumPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, NumPrivateConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumConnections = { "NumConnections", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, NumConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_ExtraSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_BuildUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsAnticheatEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowJoinInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bAllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsDedicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_bIsLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumPrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_NumConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get the current session settings\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the current session settings" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionSettings", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionSettings_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics
	{
		struct AdvancedSessionsLibrary_eventGetSessionState_Parms
		{
			UObject* WorldContextObject;
			EBPOnlineSessionState SessionState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionState_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState = { "SessionState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionState_Parms, SessionState), Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetSessionState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_SessionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get the current session state\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the current session state" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetSessionState", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetSessionState_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics
	{
		struct AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms
		{
			FBlueprintSessionResult SessionResult;
			int32 UniqueBuildId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueBuildId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_UniqueBuildId = { "UniqueBuildId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms, UniqueBuildId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_UniqueBuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::NewProp_SessionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Get the Unique Build ID from a session search result\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the Unique Build ID from a session search result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetUniqueBuildID", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetUniqueBuildID_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics
	{
		struct AdvancedSessionsLibrary_eventGetUniqueNetID_Parms
		{
			APlayerController* PlayerController;
			FBPUniqueNetId UniqueNetId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetID_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
		{ "Comment", "// Get the unique net id of a network player attached to the given controller\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the unique net id of a network player attached to the given controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetUniqueNetID", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetUniqueNetID_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics
	{
		struct AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms
		{
			APlayerState* PlayerState;
			FBPUniqueNetId UniqueNetId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
		{ "Comment", "// Get the unique net id of a network player who is assigned the the given player state\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Get the unique net id of a network player who is assigned the the given player state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "GetUniqueNetIDFromPlayerState", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventGetUniqueNetIDFromPlayerState_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics
	{
		struct AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms
		{
			FName SubSystemName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubSystemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_SubSystemName = { "SubSystemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms, SubSystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::NewProp_SubSystemName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|Misc" },
		{ "Comment", "// Checks if the stated session subsystem is active\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Checks if the stated session subsystem is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "HasOnlineSubsystem", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventHasOnlineSubsystem_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics
	{
		struct AdvancedSessionsLibrary_eventIsPlayerInSession_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId PlayerToCheck;
			bool bIsInSession;
		};
		static void NewProp_bIsInSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerToCheck;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventIsPlayerInSession_Parms*)Obj)->bIsInSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession = { "bIsInSession", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck = { "PlayerToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms, PlayerToCheck), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_bIsInSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_PlayerToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Check if someone is in the current session\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Check if someone is in the current session" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "IsPlayerInSession", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventIsPlayerInSession_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics
	{
		struct AdvancedSessionsLibrary_eventIsValidSession_Parms
		{
			FBlueprintSessionResult SessionResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventIsValidSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventIsValidSession_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsValidSession_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::NewProp_SessionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo" },
		{ "Comment", "// Check if a session result is valid or not\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Check if a session result is valid or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "IsValidSession", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventIsValidSession_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics
	{
		struct AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerID" },
		{ "Comment", "// Return True if Unique Net ID is valid\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Return True if Unique Net ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "IsValidUniqueNetID", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventIsValidUniqueNetID_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics
	{
		struct AdvancedSessionsLibrary_eventKickPlayer_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerToKick;
			FText KickReason;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KickReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerToKick;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventKickPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventKickPlayer_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventKickPlayer_Parms, KickReason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_PlayerToKick = { "PlayerToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventKickPlayer_Parms, PlayerToKick), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventKickPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_KickReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_PlayerToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "// Kick a player from the currently active game session, only available on the server\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Kick a player from the currently active game session, only available on the server" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "KickPlayer", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventKickPlayer_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms
		{
			FName Key;
			bool Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms), &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
		{ "Comment", "// Make a literal session custom information key/value pair from Bool\n// Steam only currently supports Int,Float,String,BYTE values for search filtering!\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Make a literal session custom information key/value pair from Bool\nSteam only currently supports Int,Float,String,BYTE values for search filtering!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyBool", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyBool_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms
		{
			FName Key;
			uint8 Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
		{ "Comment", "// Make a literal session custom information key/value pair from Byte (For Enums)\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Make a literal session custom information key/value pair from Byte (For Enums)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyByte", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyByte_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms
		{
			FName Key;
			float Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
		{ "Comment", "// Make a literal session custom information key/value pair from Float\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Make a literal session custom information key/value pair from Float" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyFloat", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyFloat_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms
		{
			FName Key;
			int32 Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
		{ "Comment", "// Make a literal session custom information key/value pair from Int\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Make a literal session custom information key/value pair from Int" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyInt", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyInt_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms
		{
			FName Key;
			FString Value;
			FSessionPropertyKeyPair ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
		{ "Comment", "// Make a literal session custom information key/value pair from String\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Make a literal session custom information key/value pair from String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionPropertyString", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionPropertyString_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics
	{
		struct AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms
		{
			FSessionPropertyKeyPair SessionSearchProperty;
			EOnlineComparisonOpRedux ComparisonOp;
			FSessionsSearchSetting ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComparisonOp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparisonOp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionSearchProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp = { "ComparisonOp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms, ComparisonOp), Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_SessionSearchProperty = { "SessionSearchProperty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms, SessionSearchProperty), Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_ComparisonOp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::NewProp_SessionSearchProperty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|SessionInfo|Literals" },
		{ "Comment", "// Make a literal session search parameter\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Make a literal session search parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "MakeLiteralSessionSearchProperty", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventMakeLiteralSessionSearchProperty_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics
	{
		struct AdvancedSessionsLibrary_eventSetPlayerName_Parms
		{
			APlayerController* PlayerController;
			FString PlayerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventSetPlayerName_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventSetPlayerName_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|PlayerInfo|PlayerName" },
		{ "Comment", "// Set the player name of a network player attached to the given controller\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Set the player name of a network player attached to the given controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "SetPlayerName", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventSetPlayerName_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics
	{
		struct AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FString String;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms, String), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions|UniqueNetId" },
		{ "Comment", "// Check if a UniqueNetId is a friend\n" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
		{ "ToolTip", "Check if a UniqueNetId is a friend" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSessionsLibrary, nullptr, "UniqueNetIdToString", nullptr, nullptr, sizeof(AdvancedSessionsLibrary_eventUniqueNetIdToString_Parms), Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedSessionsLibrary_NoRegister()
	{
		return UAdvancedSessionsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_AddOrModifyExtraSettings, "AddOrModifyExtraSettings" }, // 1293462864
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_BanPlayer, "BanPlayer" }, // 1846680989
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID, "EqualEqual_UNetIDUnetID" }, // 309943029
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyByName, "FindSessionPropertyByName" }, // 86920136
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_FindSessionPropertyIndexByName, "FindSessionPropertyIndexByName" }, // 1433636670
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentSessionID_AsString, "GetCurrentSessionID_AsString" }, // 312978747
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetCurrentUniqueBuildID, "GetCurrentUniqueBuildID" }, // 211117355
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetExtraSettings, "GetExtraSettings" }, // 2853528552
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNetPlayerIndex, "GetNetPlayerIndex" }, // 3963986487
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers, "GetNumberOfNetworkPlayers" }, // 685878808
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetPlayerName, "GetPlayerName" }, // 4268587624
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionID_AsString, "GetSessionID_AsString" }, // 2474695154
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyBool, "GetSessionPropertyBool" }, // 892751734
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyByte, "GetSessionPropertyByte" }, // 3780036185
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyFloat, "GetSessionPropertyFloat" }, // 3482725427
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyInt, "GetSessionPropertyInt" }, // 3699645669
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyKey, "GetSessionPropertyKey" }, // 2744980994
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionPropertyString, "GetSessionPropertyString" }, // 3117610111
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionSettings, "GetSessionSettings" }, // 443029910
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetSessionState, "GetSessionState" }, // 1749567799
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueBuildID, "GetUniqueBuildID" }, // 2436489721
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetID, "GetUniqueNetID" }, // 3518593831
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState, "GetUniqueNetIDFromPlayerState" }, // 4230554381
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_HasOnlineSubsystem, "HasOnlineSubsystem" }, // 2713631304
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsPlayerInSession, "IsPlayerInSession" }, // 851321623
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidSession, "IsValidSession" }, // 3214594172
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_IsValidUniqueNetID, "IsValidUniqueNetID" }, // 1395893657
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_KickPlayer, "KickPlayer" }, // 1827656499
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool, "MakeLiteralSessionPropertyBool" }, // 3673990106
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte, "MakeLiteralSessionPropertyByte" }, // 2714897892
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat, "MakeLiteralSessionPropertyFloat" }, // 2327486812
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt, "MakeLiteralSessionPropertyInt" }, // 479680762
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString, "MakeLiteralSessionPropertyString" }, // 2184143991
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty, "MakeLiteralSessionSearchProperty" }, // 3612920700
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_SetPlayerName, "SetPlayerName" }, // 109924589
		{ &Z_Construct_UFunction_UAdvancedSessionsLibrary_UniqueNetIdToString, "UniqueNetIdToString" }, // 711562290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedSessionsLibrary.h" },
		{ "ModuleRelativePath", "Classes/AdvancedSessionsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedSessionsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::ClassParams = {
		&UAdvancedSessionsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedSessionsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedSessionsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedSessionsLibrary, 589175481);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedSessionsLibrary>()
	{
		return UAdvancedSessionsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedSessionsLibrary(Z_Construct_UClass_UAdvancedSessionsLibrary, &UAdvancedSessionsLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedSessionsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSessionsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
