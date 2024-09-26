// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSlotMachine/TPSlotMachinePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSlotMachinePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ATPSlotMachinePlayerController();
TPSLOTMACHINE_API UClass* Z_Construct_UClass_ATPSlotMachinePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPSlotMachine();
// End Cross Module References

// Begin Class ATPSlotMachinePlayerController
void ATPSlotMachinePlayerController::StaticRegisterNativesATPSlotMachinePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSlotMachinePlayerController);
UClass* Z_Construct_UClass_ATPSlotMachinePlayerController_NoRegister()
{
	return ATPSlotMachinePlayerController::StaticClass();
}
struct Z_Construct_UClass_ATPSlotMachinePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TPSlotMachinePlayerController.h" },
		{ "ModuleRelativePath", "TPSlotMachinePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "TPSlotMachinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSlotMachinePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSlotMachinePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TPSlotMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::ClassParams = {
	&ATPSlotMachinePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSlotMachinePlayerController()
{
	if (!Z_Registration_Info_UClass_ATPSlotMachinePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSlotMachinePlayerController.OuterSingleton, Z_Construct_UClass_ATPSlotMachinePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSlotMachinePlayerController.OuterSingleton;
}
template<> TPSLOTMACHINE_API UClass* StaticClass<ATPSlotMachinePlayerController>()
{
	return ATPSlotMachinePlayerController::StaticClass();
}
ATPSlotMachinePlayerController::ATPSlotMachinePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSlotMachinePlayerController);
ATPSlotMachinePlayerController::~ATPSlotMachinePlayerController() {}
// End Class ATPSlotMachinePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachinePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSlotMachinePlayerController, ATPSlotMachinePlayerController::StaticClass, TEXT("ATPSlotMachinePlayerController"), &Z_Registration_Info_UClass_ATPSlotMachinePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSlotMachinePlayerController), 951169037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachinePlayerController_h_2352514961(TEXT("/Script/TPSlotMachine"),
	Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachinePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_Moteur3TP1_TPSlotMachine_Source_TPSlotMachine_TPSlotMachinePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
