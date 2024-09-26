// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPSlotMachineProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TPSLOTMACHINE_TPSlotMachineProjectile_generated_h
#error "TPSlotMachineProjectile.generated.h already included, missing '#pragma once' in TPSlotMachineProjectile.h"
#endif
#define TPSLOTMACHINE_TPSlotMachineProjectile_generated_h

#define FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSlotMachineProjectile(); \
	friend struct Z_Construct_UClass_ATPSlotMachineProjectile_Statics; \
public: \
	DECLARE_CLASS(ATPSlotMachineProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSlotMachine"), NO_API) \
	DECLARE_SERIALIZER(ATPSlotMachineProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPSlotMachineProjectile(ATPSlotMachineProjectile&&); \
	ATPSlotMachineProjectile(const ATPSlotMachineProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSlotMachineProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSlotMachineProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSlotMachineProjectile) \
	NO_API virtual ~ATPSlotMachineProjectile();


#define FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_12_PROLOG
#define FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPSLOTMACHINE_API UClass* StaticClass<class ATPSlotMachineProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
