// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineMP_Plugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OnlineMP_Plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OnlineMP_Plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_OnlineMP_Plugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OnlineMP_Plugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFCCAC918,
				0x0CB9AB9F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OnlineMP_Plugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OnlineMP_Plugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OnlineMP_Plugin(Z_Construct_UPackage__Script_OnlineMP_Plugin, TEXT("/Script/OnlineMP_Plugin"), Z_Registration_Info_UPackage__Script_OnlineMP_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFCCAC918, 0x0CB9AB9F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
