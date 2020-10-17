// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/FindSessionsCallbackProxyAdvanced.h"
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
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UFindSessionsCallbackProxyAdvanced::execFilterSessionResults)
	{
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_SessionResults);
		P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters);
		P_GET_TARRAY_REF(FBlueprintSessionResult,Z_Param_Out_FilteredResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFindSessionsCallbackProxyAdvanced::FilterSessionResults(Z_Param_Out_SessionResults,Z_Param_Out_Filters,Z_Param_Out_FilteredResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_ENUM(EBPServerPresenceSearchType,Z_Param_ServerTypeToSearch);
		P_GET_TARRAY_REF(FSessionsSearchSetting,Z_Param_Out_Filters);
		P_GET_UBOOL(Z_Param_bEmptyServersOnly);
		P_GET_UBOOL(Z_Param_bNonEmptyServersOnly);
		P_GET_UBOOL(Z_Param_bSecureServersOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinSlotsAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFindSessionsCallbackProxyAdvanced**)Z_Param__Result=UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN,EBPServerPresenceSearchType(Z_Param_ServerTypeToSearch),Z_Param_Out_Filters,Z_Param_bEmptyServersOnly,Z_Param_bNonEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_MinSlotsAvailable);
		P_NATIVE_END;
	}
	void UFindSessionsCallbackProxyAdvanced::StaticRegisterNativesUFindSessionsCallbackProxyAdvanced()
	{
		UClass* Class = UFindSessionsCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterSessionResults", &UFindSessionsCallbackProxyAdvanced::execFilterSessionResults },
			{ "FindSessionsAdvanced", &UFindSessionsCallbackProxyAdvanced::execFindSessionsAdvanced },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics
	{
		struct FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms
		{
			TArray<FBlueprintSessionResult> SessionResults;
			TArray<FSessionsSearchSetting> Filters;
			TArray<FBlueprintSessionResult> FilteredResults;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilteredResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilteredResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SessionResults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionResults_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults = { "FilteredResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, FilteredResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults_Inner = { "FilteredResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults = { "SessionResults", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms, SessionResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_Inner = { "SessionResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_FilteredResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::NewProp_SessionResults_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "// Filters an array of session results by the given search parameters, returns a new array with the filtered results\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Filters an array of session results by the given search parameters, returns a new array with the filtered results" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, nullptr, "FilterSessionResults", nullptr, nullptr, sizeof(FindSessionsCallbackProxyAdvanced_eventFilterSessionResults_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinSlotsAvailable;
		static void NewProp_bSecureServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
		static void NewProp_bNonEmptyServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonEmptyServersOnly;
		static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerTypeToSearch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerTypeToSearch_Underlying;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MinSlotsAvailable = { "MinSlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MinSlotsAvailable), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bSecureServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bNonEmptyServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly = { "bNonEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bEmptyServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionsSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch = { "ServerTypeToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, ServerTypeToSearch), Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MinSlotsAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bSecureServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bNonEmptyServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bEmptyServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_ServerTypeToSearch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Filters" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "// Searches for advertised sessions with the default online subsystem and includes an array of filters\n" },
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bNonEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_MinSlotsAvailable", "0" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Searches for advertised sessions with the default online subsystem and includes an array of filters" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, nullptr, "FindSessionsAdvanced", nullptr, nullptr, sizeof(FindSessionsCallbackProxyAdvanced_eventFindSessionsAdvanced_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_NoRegister()
	{
		return UFindSessionsCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics
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
	UObject* (*const Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FilterSessionResults, "FilterSessionResults" }, // 197239223
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced, "FindSessionsAdvanced" }, // 3078069866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FindSessionsCallbackProxyAdvanced.h" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxyAdvanced.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindSessionsCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindSessionsCallbackProxyAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::ClassParams = {
		&UFindSessionsCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindSessionsCallbackProxyAdvanced, 97576313);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UFindSessionsCallbackProxyAdvanced>()
	{
		return UFindSessionsCallbackProxyAdvanced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindSessionsCallbackProxyAdvanced(Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced, &UFindSessionsCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UFindSessionsCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
