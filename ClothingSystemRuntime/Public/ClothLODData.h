#pragma once
#include "CoreMinimal.h"
#include "ClothCollisionData.h"
#include "ClothPhysicalMeshData.h"
#include "ClothLODData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIME_API FClothLODData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothPhysicalMeshData PhysicalMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothCollisionData CollisionData;
    
    FClothLODData();
};

