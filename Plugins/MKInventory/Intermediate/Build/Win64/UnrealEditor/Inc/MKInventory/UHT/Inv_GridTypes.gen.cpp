// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/Inv_GridTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridTypes() {}

// ********** Begin Cross Module References ********************************************************
MKINVENTORY_API UEnum* Z_Construct_UEnum_MKInventory_EInv_ItemCategory();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInv_ItemCategory *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInv_ItemCategory;
static UEnum* EInv_ItemCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MKInventory_EInv_ItemCategory, (UObject*)Z_Construct_UPackage__Script_MKInventory(), TEXT("EInv_ItemCategory"));
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton;
}
template<> MKINVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>()
{
	return EInv_ItemCategory_StaticEnum();
}
struct Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Consumable.Name", "EInv_ItemCategory::Consumable" },
		{ "Craftable.Name", "EInv_ItemCategory::Craftable" },
		{ "Equipable.Name", "EInv_ItemCategory::Equipable" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
		{ "None.Name", "EInv_ItemCategory::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInv_ItemCategory::Equipable", (int64)EInv_ItemCategory::Equipable },
		{ "EInv_ItemCategory::Consumable", (int64)EInv_ItemCategory::Consumable },
		{ "EInv_ItemCategory::Craftable", (int64)EInv_ItemCategory::Craftable },
		{ "EInv_ItemCategory::None", (int64)EInv_ItemCategory::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MKInventory,
	nullptr,
	"EInv_ItemCategory",
	"EInv_ItemCategory",
	Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MKInventory_EInv_ItemCategory()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton, Z_Construct_UEnum_MKInventory_EInv_ItemCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton;
}
// ********** End Enum EInv_ItemCategory ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Types_Inv_GridTypes_h__Script_MKInventory_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInv_ItemCategory_StaticEnum, TEXT("EInv_ItemCategory"), &Z_Registration_Info_UEnum_EInv_ItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 794398943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Types_Inv_GridTypes_h__Script_MKInventory_1164113370(TEXT("/Script/MKInventory"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Types_Inv_GridTypes_h__Script_MKInventory_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Types_Inv_GridTypes_h__Script_MKInventory_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
