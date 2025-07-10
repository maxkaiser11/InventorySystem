// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/Spatial/Inv_InventoryGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryGrid() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister();
MKINVENTORY_API UEnum* Z_Construct_UEnum_MKInventory_EInv_ItemCategory();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryGrid *******************************************************
void UInv_InventoryGrid::StaticRegisterNativesUInv_InventoryGrid()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryGrid;
UClass* UInv_InventoryGrid::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryGrid;
	if (!Z_Registration_Info_UClass_UInv_InventoryGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryGrid"),
			Z_Registration_Info_UClass_UInv_InventoryGrid.InnerSingleton,
			StaticRegisterNativesUInv_InventoryGrid,
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
	return Z_Registration_Info_UClass_UInv_InventoryGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister()
{
	return UInv_InventoryGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSlotClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_InventoryGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridSlots;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GridSlotClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, ItemCategory), Z_Construct_UEnum_MKInventory_EInv_ItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) }; // 794398943
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots_Inner = { "GridSlots", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInv_GridSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots = { "GridSlots", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, GridSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSlots_MetaData), NewProp_GridSlots_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlotClass = { "GridSlotClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, GridSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_GridSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSlotClass_MetaData), NewProp_GridSlotClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, Rows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rows_MetaData), NewProp_Rows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, Columns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryGrid, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_GridSlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Rows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryGrid_Statics::NewProp_TileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InventoryGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MKInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryGrid_Statics::ClassParams = {
	&UInv_InventoryGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryGrid()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryGrid.OuterSingleton, Z_Construct_UClass_UInv_InventoryGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryGrid.OuterSingleton;
}
UInv_InventoryGrid::UInv_InventoryGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryGrid);
UInv_InventoryGrid::~UInv_InventoryGrid() {}
// ********** End Class UInv_InventoryGrid *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_MKInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryGrid, UInv_InventoryGrid::StaticClass, TEXT("UInv_InventoryGrid"), &Z_Registration_Info_UClass_UInv_InventoryGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryGrid), 1884825314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_MKInventory_2755921364(TEXT("/Script/MKInventory"),
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_MKInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Inventory_Spatial_Inv_InventoryGrid_h__Script_MKInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
