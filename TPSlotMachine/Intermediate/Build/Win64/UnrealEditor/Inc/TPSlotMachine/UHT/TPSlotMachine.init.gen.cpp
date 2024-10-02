// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSlotMachine_init() {}
	TPSLOTMACHINE_API UFunction* Z_Construct_UDelegateFunction_TPSlotMachine_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TPSlotMachine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TPSlotMachine()
	{
		if (!Z_Registration_Info_UPackage__Script_TPSlotMachine.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TPSlotMachine_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TPSlotMachine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8DE6A111,
				0xBD3F6CB1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TPSlotMachine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TPSlotMachine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TPSlotMachine(Z_Construct_UPackage__Script_TPSlotMachine, TEXT("/Script/TPSlotMachine"), Z_Registration_Info_UPackage__Script_TPSlotMachine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DE6A111, 0xBD3F6CB1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
