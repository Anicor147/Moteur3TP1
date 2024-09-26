// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSlotMachine/Private/Roulette.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoulette() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ARoulette();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ARoulette_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPSlotMachine();
// End Cross Module References

// Begin Class ARoulette
void ARoulette::StaticRegisterNativesARoulette()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoulette);
UClass* Z_Construct_UClass_ARoulette_NoRegister()
{
	return ARoulette::StaticClass();
}
struct Z_Construct_UClass_ARoulette_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Roulette.h" },
		{ "ModuleRelativePath", "Private/Roulette.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoulette>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARoulette_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TPSlotMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoulette_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoulette_Statics::ClassParams = {
	&ARoulette::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoulette_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoulette_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoulette()
{
	if (!Z_Registration_Info_UClass_ARoulette.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoulette.OuterSingleton, Z_Construct_UClass_ARoulette_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoulette.OuterSingleton;
}
template<> TPSLOTMACHINE_API UClass* StaticClass<ARoulette>()
{
	return ARoulette::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoulette);
ARoulette::~ARoulette() {}
// End Class ARoulette

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roulette_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoulette, ARoulette::StaticClass, TEXT("ARoulette"), &Z_Registration_Info_UClass_ARoulette, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoulette), 1584842956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roulette_h_4267658049(TEXT("/Script/TPSlotMachine"),
	Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roulette_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roulette_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
