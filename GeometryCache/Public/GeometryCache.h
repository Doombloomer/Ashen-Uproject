#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Interfaces/Interface_AssetUserData.h"
#include "GeometryCache.generated.h"

class UMaterialInterface;
class UGeometryCacheTrack;

UCLASS(Blueprintable)
class GEOMETRYCACHE_API UGeometryCache : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGeometryCacheTrack*> Tracks;
    
    UGeometryCache();
    
    // Fix for true pure virtual functions not being implemented
};

