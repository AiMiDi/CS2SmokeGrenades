#pragma once

#include "CoreMinimal.h"
#include "VoxelData3DArray.generated.h"

USTRUCT(BlueprintType, Category = "Voxel")
struct FVoxelData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Voxel")
	bool HaveVoxle = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Voxel")
	FVector VoxlePosition{};
};

/**
 * 
 */
UCLASS(BlueprintType, Category = "Voxel")
class CS2SMOKEGRENADES_API UVoxelData3DArray : public UObject
{
	GENERATED_BODY()
	TArray<TArray<TArray<FVoxelData>>> Array;
public:
	UVoxelData3DArray() = default;
	virtual ~UVoxelData3DArray() override = default;

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void Init(const int X, const int Y, const int Z);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	const FVoxelData& GetData(const int X, const int Y, const int Z);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void SetData(const int X, const int Y, const int Z, const FVoxelData& Data);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	static UVoxelData3DArray* CreateVoxelData3DArrayInstance();
};
