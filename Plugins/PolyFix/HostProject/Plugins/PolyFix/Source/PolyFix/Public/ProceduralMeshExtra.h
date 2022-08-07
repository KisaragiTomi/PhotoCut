// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshExtra.generated.h"

/**
 * 
 */
UCLASS()
class POLYFIX_API UProceduralMeshExtra : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "PolyFix sample test testing"), Category = "PolyFixTesting")
		static void CopyProceduralMeshFromProceduralMesh(UProceduralMeshComponent* SourceProcMeshComponent,  UProceduralMeshComponent* OutProcMeshComponent);
};
