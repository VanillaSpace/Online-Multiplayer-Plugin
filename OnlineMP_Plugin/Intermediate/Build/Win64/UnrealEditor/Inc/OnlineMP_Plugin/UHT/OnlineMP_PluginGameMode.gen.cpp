// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineMP_Plugin/OnlineMP_PluginGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineMP_PluginGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ONLINEMP_PLUGIN_API UClass* Z_Construct_UClass_AOnlineMP_PluginGameMode();
	ONLINEMP_PLUGIN_API UClass* Z_Construct_UClass_AOnlineMP_PluginGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineMP_Plugin();
// End Cross Module References
	void AOnlineMP_PluginGameMode::StaticRegisterNativesAOnlineMP_PluginGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineMP_PluginGameMode);
	UClass* Z_Construct_UClass_AOnlineMP_PluginGameMode_NoRegister()
	{
		return AOnlineMP_PluginGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineMP_Plugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OnlineMP_PluginGameMode.h" },
		{ "ModuleRelativePath", "OnlineMP_PluginGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineMP_PluginGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::ClassParams = {
		&AOnlineMP_PluginGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AOnlineMP_PluginGameMode()
	{
		if (!Z_Registration_Info_UClass_AOnlineMP_PluginGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineMP_PluginGameMode.OuterSingleton, Z_Construct_UClass_AOnlineMP_PluginGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlineMP_PluginGameMode.OuterSingleton;
	}
	template<> ONLINEMP_PLUGIN_API UClass* StaticClass<AOnlineMP_PluginGameMode>()
	{
		return AOnlineMP_PluginGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineMP_PluginGameMode);
	AOnlineMP_PluginGameMode::~AOnlineMP_PluginGameMode() {}
	struct Z_CompiledInDeferFile_FID_PersonalProject_Online_Multiplayer_Plugin_OnlineMP_Plugin_Source_OnlineMP_Plugin_OnlineMP_PluginGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProject_Online_Multiplayer_Plugin_OnlineMP_Plugin_Source_OnlineMP_Plugin_OnlineMP_PluginGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineMP_PluginGameMode, AOnlineMP_PluginGameMode::StaticClass, TEXT("AOnlineMP_PluginGameMode"), &Z_Registration_Info_UClass_AOnlineMP_PluginGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineMP_PluginGameMode), 68601817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProject_Online_Multiplayer_Plugin_OnlineMP_Plugin_Source_OnlineMP_Plugin_OnlineMP_PluginGameMode_h_4275007874(TEXT("/Script/OnlineMP_Plugin"),
		Z_CompiledInDeferFile_FID_PersonalProject_Online_Multiplayer_Plugin_OnlineMP_Plugin_Source_OnlineMP_Plugin_OnlineMP_PluginGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProject_Online_Multiplayer_Plugin_OnlineMP_Plugin_Source_OnlineMP_Plugin_OnlineMP_PluginGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
