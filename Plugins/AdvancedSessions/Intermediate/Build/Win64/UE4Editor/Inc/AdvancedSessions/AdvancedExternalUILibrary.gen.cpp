// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedExternalUILibrary.h"
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
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI();
// End Cross Module References
	void UAdvancedExternalUILibrary::StaticRegisterNativesUAdvancedExternalUILibrary()
	{
		UClass* Class = UAdvancedExternalUILibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseWebURLUI", (Native)&UAdvancedExternalUILibrary::execCloseWebURLUI },
			{ "ShowAccountUpgradeUI", (Native)&UAdvancedExternalUILibrary::execShowAccountUpgradeUI },
			{ "ShowFriendsUI", (Native)&UAdvancedExternalUILibrary::execShowFriendsUI },
			{ "ShowInviteUI", (Native)&UAdvancedExternalUILibrary::execShowInviteUI },
			{ "ShowLeaderBoardUI", (Native)&UAdvancedExternalUILibrary::execShowLeaderBoardUI },
			{ "ShowProfileUI", (Native)&UAdvancedExternalUILibrary::execShowProfileUI },
			{ "ShowWebURLUI", (Native)&UAdvancedExternalUILibrary::execShowWebURLUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedExternalUI" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
				{ "ToolTip", "Show the UI that shows a web URL" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "CloseWebURLUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI()
	{
		struct AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms
		{
			FBPUniqueNetId PlayerRequestingAccountUpgradeUI;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRequestingAccountUpgradeUI_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRequestingAccountUpgradeUI = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerRequestingAccountUpgradeUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms, PlayerRequestingAccountUpgradeUI), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_PlayerRequestingAccountUpgradeUI_MetaData, ARRAY_COUNT(NewProp_PlayerRequestingAccountUpgradeUI_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerRequestingAccountUpgradeUI,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedExternalUI" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
				{ "ToolTip", "Show the UI that shows the account upgrade UI (doesn't work with steam)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "ShowAccountUpgradeUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedExternalUILibrary_eventShowAccountUpgradeUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI()
	{
		struct AdvancedExternalUILibrary_eventShowFriendsUI_Parms
		{
			APlayerController* PlayerController;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowFriendsUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowFriendsUI_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedExternalUI" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
				{ "ToolTip", "Show the UI that handles the Friends list" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "ShowFriendsUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedExternalUILibrary_eventShowFriendsUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI()
	{
		struct AdvancedExternalUILibrary_eventShowInviteUI_Parms
		{
			APlayerController* PlayerController;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowInviteUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowInviteUI_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedExternalUI" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
				{ "ToolTip", "Show the UI that handles inviting people to your game" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "ShowInviteUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedExternalUILibrary_eventShowInviteUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI()
	{
		struct AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms
		{
			FString LeaderboardName;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName = { UE4CodeGen_Private::EPropertyClass::Str, "LeaderboardName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms, LeaderboardName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeaderboardName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedExternalUI" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
				{ "ToolTip", "Show the UI that shows the leaderboard (doesn't work with steam)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "ShowLeaderBoardUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedExternalUILibrary_eventShowLeaderBoardUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI()
	{
		struct AdvancedExternalUILibrary_eventShowProfileUI_Parms
		{
			FBPUniqueNetId PlayerViewingProfile;
			FBPUniqueNetId PlayerToViewProfileOf;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowProfileUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToViewProfileOf_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerToViewProfileOf = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerToViewProfileOf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowProfileUI_Parms, PlayerToViewProfileOf), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_PlayerToViewProfileOf_MetaData, ARRAY_COUNT(NewProp_PlayerToViewProfileOf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerViewingProfile_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerViewingProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerViewingProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowProfileUI_Parms, PlayerViewingProfile), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_PlayerViewingProfile_MetaData, ARRAY_COUNT(NewProp_PlayerViewingProfile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerToViewProfileOf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerViewingProfile,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedExternalUI" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
				{ "ToolTip", "Show the UI that shows the profile of a uniquenetid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "ShowProfileUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedExternalUILibrary_eventShowProfileUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI()
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetY = { UE4CodeGen_Private::EPropertyClass::Int, "OffsetY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, OffsetY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetX = { UE4CodeGen_Private::EPropertyClass::Int, "OffsetX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, OffsetX), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bShowCloseButton_SetBit = [](void* Obj){ ((AdvancedExternalUILibrary_eventShowWebURLUI_Parms*)Obj)->bShowCloseButton = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCloseButton = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowCloseButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowCloseButton_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bShowBackground_SetBit = [](void* Obj){ ((AdvancedExternalUILibrary_eventShowWebURLUI_Parms*)Obj)->bShowBackground = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBackground = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowBackground", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowBackground_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEmbedded_SetBit = [](void* Obj){ ((AdvancedExternalUILibrary_eventShowWebURLUI_Parms*)Obj)->bEmbedded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmbedded = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmbedded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEmbedded_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedDomains = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedDomains", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, AllowedDomains), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllowedDomains_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AllowedDomains", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_URLToShow = { UE4CodeGen_Private::EPropertyClass::Str, "URLToShow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedExternalUILibrary_eventShowWebURLUI_Parms, URLToShow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowCloseButton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowBackground,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEmbedded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedDomains,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedDomains_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_URLToShow,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "AllowedDomains" },
				{ "Category", "Online|AdvancedExternalUI" },
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
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedExternalUILibrary, "ShowWebURLUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedExternalUILibrary_eventShowWebURLUI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedExternalUILibrary_NoRegister()
	{
		return UAdvancedExternalUILibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedExternalUILibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_CloseWebURLUI, "CloseWebURLUI" }, // 3452235281
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowAccountUpgradeUI, "ShowAccountUpgradeUI" }, // 1684099145
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowFriendsUI, "ShowFriendsUI" }, // 4203454508
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowInviteUI, "ShowInviteUI" }, // 1648387456
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowLeaderBoardUI, "ShowLeaderBoardUI" }, // 3138199620
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowProfileUI, "ShowProfileUI" }, // 682733953
				{ &Z_Construct_UFunction_UAdvancedExternalUILibrary_ShowWebURLUI, "ShowWebURLUI" }, // 1789336980
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AdvancedExternalUILibrary.h" },
				{ "ModuleRelativePath", "Classes/AdvancedExternalUILibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvancedExternalUILibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvancedExternalUILibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedExternalUILibrary, 1991810587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedExternalUILibrary(Z_Construct_UClass_UAdvancedExternalUILibrary, &UAdvancedExternalUILibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedExternalUILibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedExternalUILibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
