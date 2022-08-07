// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolyFix/Public/ProceduralMeshExtra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMeshExtra() {}
// Cross Module References
	POLYFIX_API UClass* Z_Construct_UClass_UProceduralMeshExtra_NoRegister();
	POLYFIX_API UClass* Z_Construct_UClass_UProceduralMeshExtra();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PolyFix();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralMeshExtra::execCopyProceduralMeshFromProceduralMesh)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_SourceProcMeshComponent);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_OutProcMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProceduralMeshExtra::CopyProceduralMeshFromProceduralMesh(Z_Param_SourceProcMeshComponent,Z_Param_OutProcMeshComponent);
		P_NATIVE_END;
	}
	void UProceduralMeshExtra::StaticRegisterNativesUProceduralMeshExtra()
	{
		UClass* Class = UProceduralMeshExtra::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyProceduralMeshFromProceduralMesh", &UProceduralMeshExtra::execCopyProceduralMeshFromProceduralMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics
	{
		struct ProceduralMeshExtra_eventCopyProceduralMeshFromProceduralMesh_Parms
		{
			UProceduralMeshComponent* SourceProcMeshComponent;
			UProceduralMeshComponent* OutProcMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceProcMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceProcMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutProcMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutProcMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_SourceProcMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_SourceProcMeshComponent = { "SourceProcMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralMeshExtra_eventCopyProceduralMeshFromProceduralMesh_Parms, SourceProcMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_SourceProcMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_SourceProcMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_OutProcMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_OutProcMeshComponent = { "OutProcMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralMeshExtra_eventCopyProceduralMeshFromProceduralMesh_Parms, OutProcMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_OutProcMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_OutProcMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_SourceProcMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::NewProp_OutProcMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "PolyFixTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "PolyFix sample test testing" },
		{ "ModuleRelativePath", "Public/ProceduralMeshExtra.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshExtra, nullptr, "CopyProceduralMeshFromProceduralMesh", nullptr, nullptr, sizeof(ProceduralMeshExtra_eventCopyProceduralMeshFromProceduralMesh_Parms), Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralMeshExtra_NoRegister()
	{
		return UProceduralMeshExtra::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralMeshExtra_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralMeshExtra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PolyFix,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralMeshExtra_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralMeshExtra_CopyProceduralMeshFromProceduralMesh, "CopyProceduralMeshFromProceduralMesh" }, // 344165108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshExtra_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProceduralMeshExtra.h" },
		{ "ModuleRelativePath", "Public/ProceduralMeshExtra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralMeshExtra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralMeshExtra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralMeshExtra_Statics::ClassParams = {
		&UProceduralMeshExtra::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshExtra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshExtra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralMeshExtra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralMeshExtra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralMeshExtra, 1786531682);
	template<> POLYFIX_API UClass* StaticClass<UProceduralMeshExtra>()
	{
		return UProceduralMeshExtra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralMeshExtra(Z_Construct_UClass_UProceduralMeshExtra, &UProceduralMeshExtra::StaticClass, TEXT("/Script/PolyFix"), TEXT("UProceduralMeshExtra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralMeshExtra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
