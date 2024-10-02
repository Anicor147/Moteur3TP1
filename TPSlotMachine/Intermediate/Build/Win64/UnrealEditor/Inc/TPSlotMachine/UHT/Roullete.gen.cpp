// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSlotMachine/Private/Roullete.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoullete() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ARoullete();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ARoullete_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPSlotMachine();
// End Cross Module References

// Begin Class ARoullete
void ARoullete::StaticRegisterNativesARoullete()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoullete);
UClass* Z_Construct_UClass_ARoullete_NoRegister()
{
	return ARoullete::StaticClass();
}
struct Z_Construct_UClass_ARoullete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Roullete.h" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reels_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lever_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelLeft_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelMid_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReelRight_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinEffect_MetaData[] = {
		{ "Category", "Roullete" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlowMaterial_MetaData[] = {
		{ "Category", "Roullete" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Roullete" },
		{ "ModuleRelativePath", "Private/Roullete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Reels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Lever;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReelLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReelMid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReelRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Line;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WinEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoullete>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_Reels = { "Reels", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, Reels), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reels_MetaData), NewProp_Reels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_Lever = { "Lever", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, Lever), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lever_MetaData), NewProp_Lever_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_ReelLeft = { "ReelLeft", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, ReelLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelLeft_MetaData), NewProp_ReelLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_ReelMid = { "ReelMid", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, ReelMid), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelMid_MetaData), NewProp_ReelMid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_ReelRight = { "ReelRight", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, ReelRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReelRight_MetaData), NewProp_ReelRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, Line), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Line_MetaData), NewProp_Line_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_WinEffect = { "WinEffect", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, WinEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinEffect_MetaData), NewProp_WinEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_GlowMaterial = { "GlowMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, GlowMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlowMaterial_MetaData), NewProp_GlowMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoullete_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoullete, DefaultMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoullete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_Reels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_Lever,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_ReelLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_ReelMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_ReelRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_Line,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_WinEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_GlowMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoullete_Statics::NewProp_DefaultMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoullete_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoullete_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TPSlotMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoullete_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoullete_Statics::ClassParams = {
	&ARoullete::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARoullete_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoullete_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoullete_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoullete_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoullete()
{
	if (!Z_Registration_Info_UClass_ARoullete.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoullete.OuterSingleton, Z_Construct_UClass_ARoullete_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoullete.OuterSingleton;
}
template<> TPSLOTMACHINE_API UClass* StaticClass<ARoullete>()
{
	return ARoullete::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoullete);
ARoullete::~ARoullete() {}
// End Class ARoullete

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roullete_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoullete, ARoullete::StaticClass, TEXT("ARoullete"), &Z_Registration_Info_UClass_ARoullete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoullete), 1487810577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roullete_h_1676877204(TEXT("/Script/TPSlotMachine"),
	Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roullete_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_Private_Roullete_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
