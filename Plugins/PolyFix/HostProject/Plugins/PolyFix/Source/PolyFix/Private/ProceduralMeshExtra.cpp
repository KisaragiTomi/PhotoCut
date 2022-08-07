// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralMeshExtra.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"


void UProceduralMeshExtra::CopyProceduralMeshFromProceduralMesh(UProceduralMeshComponent* SourceProcMeshComponent, UProceduralMeshComponent* OutProcMeshComponent)
{
	if (SourceProcMeshComponent != nullptr &&
		SourceProcMeshComponent->GetNumSections() > 0 &&
		OutProcMeshComponent != nullptr)
	{
		
		//// MESH DATA

		int32 NumSections = SourceProcMeshComponent->GetNumSections();
		for (int32 SectionIndex = 0; SectionIndex < NumSections; SectionIndex++)
		{
			// Buffers for copying geom data
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FVector2D> UVs1;
			TArray<FVector2D> UVs2;
			TArray<FVector2D> UVs3;
			TArray<FProcMeshTangent> Tangents;
			TArray<FLinearColor> DummyColors;
			bool bCreateCollision = true;
			UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(SourceProcMeshComponent, SectionIndex, Vertices, Triangles, Normals, UVs, Tangents);
			OutProcMeshComponent->CreateMeshSection_LinearColor(SectionIndex, Vertices, Triangles, Normals, UVs, UVs1, UVs2, UVs3, DummyColors, Tangents, bCreateCollision);
		}

		//// SIMPLE COLLISION

		// Clear any existing collision hulls
		OutProcMeshComponent->ClearCollisionConvexMeshes();
		UBodySetup* ProcMeshBodySetup = SourceProcMeshComponent->GetBodySetup();
		for (int32 ConvexIndex = 0; ConvexIndex < ProcMeshBodySetup->AggGeom.ConvexElems.Num(); ConvexIndex++)
		{
			FKConvexElem& BaseConvex = ProcMeshBodySetup->AggGeom.ConvexElems[ConvexIndex];
			OutProcMeshComponent->AddCollisionConvexMesh(BaseConvex.VertexData);
		}
		//// MATERIALS

		for (int32 MatIndex = 0; MatIndex < SourceProcMeshComponent->GetNumMaterials(); MatIndex++)
		{
			OutProcMeshComponent->SetMaterial(MatIndex, SourceProcMeshComponent->GetMaterial(MatIndex));
		}
	}
}