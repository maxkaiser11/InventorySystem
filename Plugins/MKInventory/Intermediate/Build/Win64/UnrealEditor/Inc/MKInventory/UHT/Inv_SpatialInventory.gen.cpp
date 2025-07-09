// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/Spatial/Inv_SpatialInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_SpatialInventory() {}

// ********** Begin Cross Module References ********************************************************
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_SpatialInventory ****************************************************
void UInv_SpatialInventory::StaticRegisterNativesUInv_SpatialInventory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_SpatialInventory;
UClass* UInv_SpatialInventory::GetPrivateStaticClass()
{
	using TClass = UInv_SpatialInventory;
	if (!Z_Registration_Info_UClass_UInv_SpatialInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_SpatialInventory"),
			Z_Registration_Info_UClass_UInv_SpatialInventory.InnerSingleton,
			StaticRegisterNativesUInv_SpatialInventory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInv_SpatialInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister()
{
	return UInv_SpatialInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_SpatialInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Equippables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Consumables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Craftables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Switcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Equippables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Consumables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Craftables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_SpatialInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Switcher = { "Switcher", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Switcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switcher_MetaData), NewProp_Switcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Equippables = { "Grid_Equippables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Grid_Equippables), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Equippables_MetaData), NewProp_Grid_Equippables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Consumables = { "Grid_Consumables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Grid_Consumables), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Consumables_MetaData), NewProp_Grid_Consumables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Craftables = { "Grid_Craftables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Grid_Craftables), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Craftables_MetaData), NewProp_Grid_Craftables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Switcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Equippables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Consumables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Craftables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_SpatialInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_InventoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MKInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_SpatialInventory_Statics::ClassParams = {
	&UInv_SpatialInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_SpatialInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_SpatialInventory()
{
	if (!Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton, Z_Construct_UClass_UInv_SpatialInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton;
}
UInv_SpatialInventory::UInv_SpatialInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_SpatialInventory);
UInv_SpatialInventory::~UInv_SpatialInventory() {}
// ********** End Class UInv_SpatialInventory ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_MKInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_SpatialInventory, UInv_SpatialInventory::StaticClass, TEXT("UInv_SpatialInventory"), &Z_Registration_Info_UClass_UInv_SpatialInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_SpatialInventory), 4137122691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_MKInventory_2094393248(TEXT("/Script/MKInventory"),
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_MKInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_MKInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
