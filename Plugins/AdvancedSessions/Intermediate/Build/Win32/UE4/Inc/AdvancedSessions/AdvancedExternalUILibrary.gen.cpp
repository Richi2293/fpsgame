// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedExternalUILibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedExternalUILibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedExternalUILibrary_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedExternalUILibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execShowAccountUpgradeUI)
	{
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_PlayerRequestingAccountUpgradeUI);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::ShowAccountUpgradeUI(Z_Param_PlayerRequestingAccountUpgradeUI,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execShowProfileUI)
	{
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_PlayerViewingProfile);
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_PlayerToViewProfileOf);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::ShowProfileUI(Z_Param_PlayerViewingProfile,Z_Param_PlayerToViewProfileOf,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execCloseWebURLUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::CloseWebURLUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execShowWebURLUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URLToShow);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_GET_TARRAY_REF(FString,Z_Param_Out_AllowedDomains);
		P_GET_UBOOL(Z_Param_bEmbedded);
		P_GET_UBOOL(Z_Param_bShowBackground);
		P_GET_UBOOL(Z_Param_bShowCloseButton);
		P_GET_PROPERTY(FIntProperty,Z_Param_OffsetX);
		P_GET_PROPERTY(FIntProperty,Z_Param_OffsetY);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::ShowWebURLUI(Z_Param_URLToShow,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_AllowedDomains,Z_Param_bEmbedded,Z_Param_bShowBackground,Z_Param_bShowCloseButton,Z_Param_OffsetX,Z_Param_OffsetY,Z_Param_SizeX,Z_Param_SizeY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execShowLeaderBoardUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::ShowLeaderBoardUI(Z_Param_LeaderboardName,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execShowInviteUI)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::ShowInviteUI(Z_Param_PlayerController,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedExternalUILibrary::execShowFriendsUI)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedExternalUILibrary::ShowFriendsUI(Z_Param_PlayerController,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void UAdvancedExternalUILibrary::StaticRegisterNativesUAdvancedExternalUILibrary()
	{
		UClass* Class = UAdvancedExternalUILibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseWebURLUI", &UAdvancedExternalUILibrary::execCloseWebURLUI },
			{ "ShowAccountUpgradeUI", &UAdvancedExternalUILibrary::execShowAccountUpgradeUI },
			{ "ShowFriendsUI", &UAdvancedExternalUILibrary::execShowFriendsUI },
			{ "ShowInviteUI", &UAdvancedExternalUILibrary::execShowInviteUI },
			{ "ShowLeaderBoardUI", &UAdvancedExternalUILibrary::execShowLeaderBoardUI },
			{ "ShowProfileUI", &UAdvancedExternalUILibrary::execShowProfileUI },
			{ "ShowWebURLUI", &UAdvancedExternalUILibrary::execShowWebURLUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that shows a web URL\n" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that shows a web URL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "CloseWebURLUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics
	{
		struct AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms
		{
			FBPUniqueNetId PlayerRequestingAccountUpgradeUI;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRequestingAccountUpgradeUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRequestingAccountUpgradeUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_PlayerRequestingAccountUpgradeUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_PlayerRequestingAccountUpgradeUI = { "PlayerRequestingAccountUpgradeUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms, PlayerRequestingAccountUpgradeUI), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_PlayerRequestingAccountUpgradeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_PlayerRequestingAccountUpgradeUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::NewProp_PlayerRequestingAccountUpgradeUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that shows the account upgrade UI (doesn't work with steam)\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that shows the account upgrade UI (doesn't work with steam)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "ShowAccountUpgradeUI", nullptr, nullptr, sizeof(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms), Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics
	{
		struct AdvancedExternalUILibrary_eventShowFriendsUI_Parms
		{
			APlayerController* PlayerController;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowFriendsUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowFriendsUI_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that handles the Friends list\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that handles the Friends list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "ShowFriendsUI", nullptr, nullptr, sizeof(AdvancedExternalUILibrary_eventShowFriendsUI_Parms), Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics
	{
		struct AdvancedExternalUILibrary_eventShowInviteUI_Parms
		{
			APlayerController* PlayerController;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowInviteUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowInviteUI_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that handles inviting people to your game\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that handles inviting people to your game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "ShowInviteUI", nullptr, nullptr, sizeof(AdvancedExternalUILibrary_eventShowInviteUI_Parms), Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics
	{
		struct AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms
		{
			FString LeaderboardName;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms, LeaderboardName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::NewProp_LeaderboardName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that shows the leaderboard (doesn't work with steam)\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that shows the leaderboard (doesn't work with steam)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "ShowLeaderBoardUI", nullptr, nullptr, sizeof(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms), Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics
	{
		struct AdvancedExternalUILibrary_eventShowProfileUI_Parms
		{
			FBPUniqueNetId PlayerViewingProfile;
			FBPUniqueNetId PlayerToViewProfileOf;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToViewProfileOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerToViewProfileOf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerViewingProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerViewingProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowProfileUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerToViewProfileOf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerToViewProfileOf = { "PlayerToViewProfileOf", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowProfileUI_Parms, PlayerToViewProfileOf), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerToViewProfileOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerToViewProfileOf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerViewingProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerViewingProfile = { "PlayerViewingProfile", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowProfileUI_Parms, PlayerViewingProfile), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerViewingProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerViewingProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerToViewProfileOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::NewProp_PlayerViewingProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that shows the profile of a uniquenetid\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that shows the profile of a uniquenetid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "ShowProfileUI", nullptr, nullptr, sizeof(AdvancedExternalUILibrary_eventShowProfileUI_Parms), Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics
	{
		struct AdvancedExternalUILibrary_eventShowWebURLUI_Parms
		{
			FString URLToShow;
			EBlueprintResultSwitch Result;
			TArray<FString> AllowedDomains;
			bool bEmbedded;
			bool bShowBackground;
			bool bShowCloseButton;
			int32 OffsetX;
			int32 OffsetY;
			int32 SizeX;
			int32 SizeY;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetX;
		static void NewProp_bShowCloseButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCloseButton;
		static void NewProp_bShowBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBackground;
		static void NewProp_bEmbedded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmbedded;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedDomains;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllowedDomains_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URLToShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, OffsetY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, OffsetX), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowCloseButton_SetBit(void* Obj)
	{
		((AdvancedExternalUILibrary_eventShowWebURLUI_Parms*)Obj)->bShowCloseButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowCloseButton = { "bShowCloseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowCloseButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowBackground_SetBit(void* Obj)
	{
		((AdvancedExternalUILibrary_eventShowWebURLUI_Parms*)Obj)->bShowBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowBackground = { "bShowBackground", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowBackground_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bEmbedded_SetBit(void* Obj)
	{
		((AdvancedExternalUILibrary_eventShowWebURLUI_Parms*)Obj)->bEmbedded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bEmbedded = { "bEmbedded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bEmbedded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_AllowedDomains = { "AllowedDomains", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, AllowedDomains), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_AllowedDomains_Inner = { "AllowedDomains", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_URLToShow = { "URLToShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, URLToShow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_OffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_OffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowCloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bShowBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_bEmbedded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_AllowedDomains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_AllowedDomains_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::NewProp_URLToShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AllowedDomains" },
		{ "Category", "Online|AdvancedExternalUI" },
		{ "Comment", "// Show the UI that shows a web URL\n" },
		{ "CPP_Default_bEmbedded", "false" },
		{ "CPP_Default_bShowBackground", "false" },
		{ "CPP_Default_bShowCloseButton", "false" },
		{ "CPP_Default_OffsetX", "0" },
		{ "CPP_Default_OffsetY", "0" },
		{ "CPP_Default_SizeX", "0" },
		{ "CPP_Default_SizeY", "0" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
		{ "ToolTip", "Show the UI that shows a web URL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, nullptr, "ShowWebURLUI", nullptr, nullptr, sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedExternalUILibrary_NoRegister()
	{
		return UAdvancedExternalUILibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedExternalUILibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI, "CloseWebURLUI" }, // 1464195108
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI, "ShowAccountUpgradeUI" }, // 2083974594
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI, "ShowFriendsUI" }, // 1040255752
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI, "ShowInviteUI" }, // 631706187
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI, "ShowLeaderBoardUI" }, // 915626105
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI, "ShowProfileUI" }, // 1536084567
		{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI, "ShowWebURLUI" }, // 627033601
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedExternalUILibrary.h" },
		{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedExternalUILibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::ClassParams = {
		&UAdvancedExternalUILibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedExternalUILibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedExternalUILibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedExternalUILibrary, 2546276213);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedExternalUILibrary>()
	{
		return UAdvancedExternalUILibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedExternalUILibrary(Z_Construct_UClass_UAdvancedExternalUILibrary, &UAdvancedExternalUILibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedExternalUILibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedExternalUILibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
