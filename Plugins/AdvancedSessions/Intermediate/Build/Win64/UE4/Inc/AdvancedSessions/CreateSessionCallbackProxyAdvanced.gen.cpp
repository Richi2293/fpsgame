// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/CreateSessionCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCreateSessionCallbackProxyAdvanced::execCreateAdvancedSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSessionPropertyKeyPair,Z_Param_Out_ExtraSettings);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrivateConnections);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bIsDedicatedServer);
		P_GET_UBOOL(Z_Param_bUsePresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
		P_GET_UBOOL(Z_Param_bAntiCheatProtected);
		P_GET_UBOOL(Z_Param_bUsesStats);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateSessionCallbackProxyAdvanced**)Z_Param__Result=UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(Z_Param_WorldContextObject,Z_Param_Out_ExtraSettings,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_PrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bIsDedicatedServer,Z_Param_bUsePresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise);
		P_NATIVE_END;
	}
	void UCreateSessionCallbackProxyAdvanced::StaticRegisterNativesUCreateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UCreateSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAdvancedSession", &UCreateSessionCallbackProxyAdvanced::execCreateAdvancedSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics
	{
		struct CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			APlayerController* PlayerController;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bIsDedicatedServer;
			bool bUsePresence;
			bool bAllowJoinViaPresence;
			bool bAllowJoinViaPresenceFriendsOnly;
			bool bAntiCheatProtected;
			bool bUsesStats;
			bool bShouldAdvertise;
			UCreateSessionCallbackProxyAdvanced* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static void NewProp_bUsesStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
		static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
		static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
		static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
		static void NewProp_bUsePresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrivateConnections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, ReturnValue), Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUsesStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAntiCheatProtected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUsePresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bIsDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PrivateConnections = { "PrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PrivateConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings = { "ExtraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, ExtraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_Inner = { "ExtraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bShouldAdvertise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsesStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAntiCheatProtected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowJoinViaPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUsePresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bIsDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bAllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_ExtraSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ExtraSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "/**\n\x09 *    Creates a session with the default online subsystem with advanced optional inputs, for dedicated servers leave UsePresence as false and set IsDedicatedServer to true. Dedicated servers don't use presence.\n\x09 *    @param PublicConnections\x09When doing a 'listen' server, this must be >=2 (ListenServer itself counts as a connection)\n\x09 *    @param bUseLAN\x09\x09\x09When you want to play LAN, the level to play on must be loaded with option 'bIsLanMatch'\n\x09 *    @param bUsePresence\x09\x09Must be true for a 'listen' server (Map must be loaded with option 'listen'), false for a 'dedicated' server.\n\x09 *\x09  @param bShouldAdvertise\x09Set to true when the OnlineSubsystem should list your server when someone is searching for servers. Otherwise the server is hidden and only join via invite is possible.\n\x09 */" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bIsDedicatedServer", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_bUsePresence", "true" },
		{ "CPP_Default_bUsesStats", "false" },
		{ "CPP_Default_PlayerController", "None" },
		{ "CPP_Default_PrivateConnections", "0" },
		{ "CPP_Default_PublicConnections", "100" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
		{ "ToolTip", "Creates a session with the default online subsystem with advanced optional inputs, for dedicated servers leave UsePresence as false and set IsDedicatedServer to true. Dedicated servers don't use presence.\n@param PublicConnections  When doing a 'listen' server, this must be >=2 (ListenServer itself counts as a connection)\n@param bUseLAN                    When you want to play LAN, the level to play on must be loaded with option 'bIsLanMatch'\n@param bUsePresence               Must be true for a 'listen' server (Map must be loaded with option 'listen'), false for a 'dedicated' server.\n    @param bShouldAdvertise       Set to true when the OnlineSubsystem should list your server when someone is searching for servers. Otherwise the server is hidden and only join via invite is possible." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, nullptr, "CreateAdvancedSession", nullptr, nullptr, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UCreateSessionCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession, "CreateAdvancedSession" }, // 1656150246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreateSessionCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error creating the session\n" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when there was an error creating the session" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was created successfully\n" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when the session was created successfully" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateSessionCallbackProxyAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::ClassParams = {
		&UCreateSessionCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateSessionCallbackProxyAdvanced, 3367466904);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UCreateSessionCallbackProxyAdvanced>()
	{
		return UCreateSessionCallbackProxyAdvanced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateSessionCallbackProxyAdvanced(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, &UCreateSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UCreateSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
