// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryManagement/Components/Inv_InventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
MKINVENTORY_API UFunction* Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature();
MKINVENTORY_API UFunction* Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FInventoryItemChange **************************************************
struct Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics
{
	struct _Script_MKInventory_eventInventoryItemChange_Parms
	{
		UInv_InventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MKInventory_eventInventoryItemChange_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MKInventory, nullptr, "InventoryItemChange__DelegateSignature", Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::_Script_MKInventory_eventInventoryItemChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::_Script_MKInventory_eventInventoryItemChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MKInventory_InventoryItemChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryItemChange_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemChange, UInv_InventoryItem* Item)
{
	struct _Script_MKInventory_eventInventoryItemChange_Parms
	{
		UInv_InventoryItem* Item;
	};
	_Script_MKInventory_eventInventoryItemChange_Parms Parms;
	Parms.Item=Item;
	InventoryItemChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FInventoryItemChange ****************************************************

// ********** Begin Delegate FNoRoomInInventory ****************************************************
struct Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MKInventory, nullptr, "NoRoomInInventory__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MKInventory_NoRoomInInventory__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNoRoomInInventory_DelegateWrapper(const FMulticastScriptDelegate& NoRoomInInventory)
{
	NoRoomInInventory.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FNoRoomInInventory ******************************************************

// ********** Begin Class UInv_InventoryComponent Function TryAddItem ******************************
struct Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics
{
	struct Inv_InventoryComponent_eventTryAddItem_Parms
	{
		UInv_ItemComponent* ItemComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryComponent_eventTryAddItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::NewProp_ItemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryComponent, nullptr, "TryAddItem", Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Inv_InventoryComponent_eventTryAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::Inv_InventoryComponent_eventTryAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryComponent::execTryAddItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryAddItem(Z_Param_ItemComponent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryComponent Function TryAddItem ********************************

// ********** Begin Class UInv_InventoryComponent **************************************************
void UInv_InventoryComponent::StaticRegisterNativesUInv_InventoryComponent()
{
	UClass* Class = UInv_InventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryAddItem", &UInv_InventoryComponent::execTryAddItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryComponent;
UClass* UInv_InventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryComponent;
	if (!Z_Registration_Info_UClass_UInv_InventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryComponent"),
			Z_Registration_Info_UClass_UInv_InventoryComponent.InnerSingleton,
			StaticRegisterNativesUInv_InventoryComponent,
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
	return Z_Registration_Info_UClass_UInv_InventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister()
{
	return UInv_InventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryManagement/Components/Inv_InventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenuClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryMenu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryMenuClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InventoryComponent_TryAddItem, "TryAddItem" }, // 3241322199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenu = { "InventoryMenu", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryMenu), Z_Construct_UClass_UInv_InventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMenu_MetaData), NewProp_InventoryMenu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenuClass = { "InventoryMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_InventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMenuClass_MetaData), NewProp_InventoryMenuClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenuClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MKInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryComponent_Statics::ClassParams = {
	&UInv_InventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton, Z_Construct_UClass_UInv_InventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryComponent);
UInv_InventoryComponent::~UInv_InventoryComponent() {}
// ********** End Class UInv_InventoryComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_MKInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryComponent, UInv_InventoryComponent::StaticClass, TEXT("UInv_InventoryComponent"), &Z_Registration_Info_UClass_UInv_InventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryComponent), 3507305744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_MKInventory_949673778(TEXT("/Script/MKInventory"),
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_MKInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h__Script_MKInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
