// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSlotMachine/TPSlotMachineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSlotMachineGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ATPSlotMachineGameMode();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ATPSlotMachineGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPSlotMachine();
// End Cross Module References

// Begin Class ATPSlotMachineGameMode
void ATPSlotMachineGameMode::StaticRegisterNativesATPSlotMachineGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSlotMachineGameMode);
UClass* Z_Construct_UClass_ATPSlotMachineGameMode_NoRegister()
{
	return ATPSlotMachineGameMode::StaticClass();
}
struct Z_Construct_UClass_ATPSlotMachineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPSlotMachineGameMode.h" },
		{ "ModuleRelativePath", "TPSlotMachineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSlotMachineGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSlotMachineGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TPSlotMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSlotMachineGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSlotMachineGameMode_Statics::ClassParams = {
	&ATPSlotMachineGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSlotMachineGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSlotMachineGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSlotMachineGameMode()
{
	if (!Z_Registration_Info_UClass_ATPSlotMachineGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSlotMachineGameMode.OuterSingleton, Z_Construct_UClass_ATPSlotMachineGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSlotMachineGameMode.OuterSingleton;
}
template<> TPSLOTMACHINE_API UClass* StaticClass<ATPSlotMachineGameMode>()
{
	return ATPSlotMachineGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSlotMachineGameMode);
ATPSlotMachineGameMode::~ATPSlotMachineGameMode() {}
// End Class ATPSlotMachineGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSlotMachineGameMode, ATPSlotMachineGameMode::StaticClass, TEXT("ATPSlotMachineGameMode"), &Z_Registration_Info_UClass_ATPSlotMachineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSlotMachineGameMode), 2511997766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineGameMode_h_2698425917(TEXT("/Script/TPSlotMachine"),
	Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachineGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
