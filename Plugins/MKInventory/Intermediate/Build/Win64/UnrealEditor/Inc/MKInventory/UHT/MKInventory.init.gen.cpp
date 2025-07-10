// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMKInventory_init() {}
	MKINVENTORY_API UFunction* Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MKInventory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MKInventory()
	{
		if (!Z_Registration_Info_UPackage__Script_MKInventory.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MKInventory",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x13573510,
				0xA780DFC4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MKInventory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MKInventory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MKInventory(Z_Construct_UPackage__Script_MKInventory, TEXT("/Script/MKInventory"), Z_Registration_Info_UPackage__Script_MKInventory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x13573510, 0xA780DFC4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
