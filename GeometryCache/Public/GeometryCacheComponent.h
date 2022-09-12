#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "GeometryCacheComponent.generated.h"

class UGeometryCache;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCACHE_API UGeometryCacheComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* GeometryCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
public:
    UGeometryCacheComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTimeOffset(const float NewStartTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(const bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetGeometryCache(UGeometryCache* NewGeomCache);
    
    UFUNCTION(BlueprintCallable)
    void PlayReversedFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void PlayReversed();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTimeOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackSpeed() const;
    
};

