// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FindSessionsCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	void UFindSessionsCallbackProxyAdvanced::StaticRegisterNativesUFindSessionsCallbackProxyAdvanced()
	{
		UClass* Class = UFindSessionsCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterSessionResults", (Native)&UFindSessionsCallbackProxyAdvanced::execFilterSessionResults },
			{ "FindSessionsAdvanced", (Native)&UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults()
	{
		struct FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms
		{
			TArray<FBlueprintSessionResult> SessionResults;
			TArray<FSessionsSearchSetting> Filters;
			TArray<FBlueprintSessionResult> FilteredResults;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilteredResults = { UE4CodeGen_Private::EPropertyClass::Array, "FilteredResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, FilteredResults), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilteredResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FilteredResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters = { UE4CodeGen_Private::EPropertyClass::Array, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, Filters), METADATA_PARAMS(NewProp_Filters_MetaData, ARRAY_COUNT(NewProp_Filters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SessionResults = { UE4CodeGen_Private::EPropertyClass::Array, "SessionResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, SessionResults), METADATA_PARAMS(NewProp_SessionResults_MetaData, ARRAY_COUNT(NewProp_SessionResults_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilteredResults,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilteredResults_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionResults,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionResults_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedSessions" },
				{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
				{ "ToolTip", "Filters an array of session results by the given search parameters, returns a new array with the filtered results" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, "FilterSessionResults", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced()
	{
		struct FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 MaxResults;
			bool bUseLAN;
			EBPServerPresenceSearchType ServerTypeToSearch;
			TArray<FSessionsSearchSetting> Filters;
			bool bEmptyServersOnly;
			bool bNonEmptyServersOnly;
			bool bSecureServersOnly;
			int32 MinSlotsAvailable;
			UFindSessionsCallbackProxyAdvanced* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinSlotsAvailable = { UE4CodeGen_Private::EPropertyClass::Int, "MinSlotsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MinSlotsAvailable), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSecureServersOnly_SetBit = [](void* Obj){ ((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bSecureServersOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecureServersOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSecureServersOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bNonEmptyServersOnly_SetBit = [](void* Obj){ ((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bNonEmptyServersOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonEmptyServersOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bNonEmptyServersOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNonEmptyServersOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEmptyServersOnly_SetBit = [](void* Obj){ ((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bEmptyServersOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmptyServersOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEmptyServersOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters = { UE4CodeGen_Private::EPropertyClass::Array, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, Filters), METADATA_PARAMS(NewProp_Filters_MetaData, ARRAY_COUNT(NewProp_Filters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Filters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerTypeToSearch = { UE4CodeGen_Private::EPropertyClass::Enum, "ServerTypeToSearch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ServerTypeToSearch), Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerTypeToSearch_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseLAN_SetBit = [](void* Obj){ ((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bUseLAN = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLAN", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLAN_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults = { UE4CodeGen_Private::EPropertyClass::Int, "MaxResults", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinSlotsAvailable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSecureServersOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNonEmptyServersOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEmptyServersOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerTypeToSearch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerTypeToSearch_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLAN,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxResults,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Filters" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Online|AdvancedSessions" },
				{ "CPP_Default_bEmptyServersOnly", "false" },
				{ "CPP_Default_bNonEmptyServersOnly", "false" },
				{ "CPP_Default_bSecureServersOnly", "false" },
				{ "CPP_Default_MinSlotsAvailable", "0" },
				{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
				{ "ToolTip", "Searches for advertised sessions with the default online subsystem and includes an array of filters" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, "FindSessionsAdvanced", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister()
	{
		return UFindSessionsCallbackProxyAdvanced::StaticClass();
	}
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults, "FilterSessionResults" }, // 4034092052
				{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced, "FindSessionsAdvanced" }, // 3050076085
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FindSessionsCallbackProxyAdvanced.h" },
				{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
				{ "ToolTip", "Called when there is an unsuccessful query" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
				{ "ToolTip", "Called when there is a successful query" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFindSessionsCallbackProxyAdvanced>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFindSessionsCallbackProxyAdvanced::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindSessionsCallbackProxyAdvanced, 1393909870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindSessionsCallbackProxyAdvanced(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, &UFindSessionsCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UFindSessionsCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
