// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef JELLYHUNT_NPC_AIController_generated_h
#error "NPC_AIController.generated.h already included, missing '#pragma once' in NPC_AIController.h"
#endif
#define JELLYHUNT_NPC_AIController_generated_h

#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_SPARSE_DATA
#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exec_onUpdated); \
	DECLARE_FUNCTION(execon_target_detected);


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exec_onUpdated); \
	DECLARE_FUNCTION(execon_target_detected);


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_AIController(); \
	friend struct Z_Construct_UClass_ANPC_AIController_Statics; \
public: \
	DECLARE_CLASS(ANPC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JellyHunt"), NO_API) \
	DECLARE_SERIALIZER(ANPC_AIController)


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANPC_AIController(); \
	friend struct Z_Construct_UClass_ANPC_AIController_Statics; \
public: \
	DECLARE_CLASS(ANPC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JellyHunt"), NO_API) \
	DECLARE_SERIALIZER(ANPC_AIController)


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC_AIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_AIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_AIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_AIController(ANPC_AIController&&); \
	NO_API ANPC_AIController(const ANPC_AIController&); \
public:


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_AIController(ANPC_AIController&&); \
	NO_API ANPC_AIController(const ANPC_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_AIController)


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___behaviorTreeComponent() { return STRUCT_OFFSET(ANPC_AIController, _behaviorTreeComponent); } \
	FORCEINLINE static uint32 __PPO___behaviorTree() { return STRUCT_OFFSET(ANPC_AIController, _behaviorTree); }


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_13_PROLOG
#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_PRIVATE_PROPERTY_OFFSET \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_SPARSE_DATA \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_RPC_WRAPPERS \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_INCLASS \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JellyHunt_Source_JellyHunt_NPC_AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_PRIVATE_PROPERTY_OFFSET \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_SPARSE_DATA \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_INCLASS_NO_PURE_DECLS \
	JellyHunt_Source_JellyHunt_NPC_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JELLYHUNT_API UClass* StaticClass<class ANPC_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JellyHunt_Source_JellyHunt_NPC_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
