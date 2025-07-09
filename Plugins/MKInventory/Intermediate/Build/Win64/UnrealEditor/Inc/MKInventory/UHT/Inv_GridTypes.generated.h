// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/Inv_GridTypes.h"

#ifdef MKINVENTORY_Inv_GridTypes_generated_h
#error "Inv_GridTypes.generated.h already included, missing '#pragma once' in Inv_GridTypes.h"
#endif
#define MKINVENTORY_Inv_GridTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Types_Inv_GridTypes_h

// ********** Begin Enum EInv_ItemCategory *********************************************************
#define FOREACH_ENUM_EINV_ITEMCATEGORY(op) \
	op(EInv_ItemCategory::Equipable) \
	op(EInv_ItemCategory::Consumable) \
	op(EInv_ItemCategory::Craftable) \
	op(EInv_ItemCategory::None) 

enum class EInv_ItemCategory : uint8;
template<> struct TIsUEnumClass<EInv_ItemCategory> { enum { Value = true }; };
template<> MKINVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>();
// ********** End Enum EInv_ItemCategory ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
