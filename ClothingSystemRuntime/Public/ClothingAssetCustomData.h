#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ClothingAssetCustomData.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UClothingAssetCustomData : public UObject {
    GENERATED_BODY()
public:
    UClothingAssetCustomData();
};

