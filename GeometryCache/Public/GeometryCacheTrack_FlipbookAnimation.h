#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack_FlipbookAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GEOMETRYCACHE_API UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 NumMeshSamples;
    
public:
    UGeometryCacheTrack_FlipbookAnimation();
    UFUNCTION(BlueprintCallable)
    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
    
};

