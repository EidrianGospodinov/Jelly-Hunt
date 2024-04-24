// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JellyHunt/NPC_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}
// Cross Module References
	JELLYHUNT_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
	JELLYHUNT_API UClass* Z_Construct_UClass_ANPC_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_JellyHunt();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ANPC_AIController::StaticRegisterNativesANPC_AIController()
	{
	}
	UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
	{
		return ANPC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__behaviorTreeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__behaviorTreeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__behaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__behaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_JellyHunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NPC_AIController.h" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTreeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTreeComponent = { "_behaviorTreeComponent", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_AIController, _behaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTree = { "_behaviorTree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_AIController, _behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTreeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp__behaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
		&ANPC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_AIController, 1665658935);
	template<> JELLYHUNT_API UClass* StaticClass<ANPC_AIController>()
	{
		return ANPC_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_AIController(Z_Construct_UClass_ANPC_AIController, &ANPC_AIController::StaticClass, TEXT("/Script/JellyHunt"), TEXT("ANPC_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
