// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JellyHunt/playerLocPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayerLocPawn() {}
// Cross Module References
	JELLYHUNT_API UClass* Z_Construct_UClass_AplayerLocPawn_NoRegister();
	JELLYHUNT_API UClass* Z_Construct_UClass_AplayerLocPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_JellyHunt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FName NAME_AplayerLocPawn_GetPlayerPosition = FName(TEXT("GetPlayerPosition"));
	FVector AplayerLocPawn::GetPlayerPosition()
	{
		playerLocPawn_eventGetPlayerPosition_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AplayerLocPawn_GetPlayerPosition),&Parms);
		return Parms.ReturnValue;
	}
	void AplayerLocPawn::StaticRegisterNativesAplayerLocPawn()
	{
	}
	struct Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(playerLocPawn_eventGetPlayerPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "playerLocPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AplayerLocPawn, nullptr, "GetPlayerPosition", nullptr, nullptr, sizeof(playerLocPawn_eventGetPlayerPosition_Parms), Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AplayerLocPawn_NoRegister()
	{
		return AplayerLocPawn::StaticClass();
	}
	struct Z_Construct_UClass_AplayerLocPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AplayerLocPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_JellyHunt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AplayerLocPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AplayerLocPawn_GetPlayerPosition, "GetPlayerPosition" }, // 490298146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerLocPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "playerLocPawn.h" },
		{ "ModuleRelativePath", "playerLocPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AplayerLocPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplayerLocPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AplayerLocPawn_Statics::ClassParams = {
		&AplayerLocPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AplayerLocPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AplayerLocPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AplayerLocPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AplayerLocPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AplayerLocPawn, 1112075505);
	template<> JELLYHUNT_API UClass* StaticClass<AplayerLocPawn>()
	{
		return AplayerLocPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AplayerLocPawn(Z_Construct_UClass_AplayerLocPawn, &AplayerLocPawn::StaticClass, TEXT("/Script/JellyHunt"), TEXT("AplayerLocPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AplayerLocPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
