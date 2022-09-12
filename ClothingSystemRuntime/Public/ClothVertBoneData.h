#pragma once
#include "CoreMinimal.h"
#include "ClothVertBoneData.generated.h"

USTRUCT(BlueprintType)
struct FClothVertBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInfluences;
    
    UPROPERTY(EditAnywhere)
    uint16 BoneIndices[8];
    
    UPROPERTY(EditAnywhere)
    float BoneWeights[8];
    
    CLOTHINGSYSTEMRUNTIME_API FClothVertBoneData();
};

