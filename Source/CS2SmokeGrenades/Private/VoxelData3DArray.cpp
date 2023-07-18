#include "CS2SmokeGrenades/Public/VoxelData3DArray.h"

void UVoxelData3DArray::Init(const int X, const int Y, const int Z)
{
	Array.Init({}, X);
	for (auto& YVoxelDatases : Array)
	{
		YVoxelDatases.Init({}, Y);
		for (auto& ZVoxelDatases : YVoxelDatases)
		{
			ZVoxelDatases.Init({}, Z);
		}
	}
}

FVoxelData& UVoxelData3DArray::GetData(const int X, const int Y, const int Z)
{
	return Array[X][Y][Z];
}

void UVoxelData3DArray::SetData(const int X, const int Y, const int Z,const FVoxelData& Data)
{
	while (Array.Num() <= X)
	{
		Array.AddDefaulted_GetRef();
	}
	while (Array[X].Num() <= Y)
	{
		Array[X].AddDefaulted_GetRef();
	}
	while (Array[X][Y].Num() <= Z)
	{
		Array[X][Y].AddDefaulted_GetRef();
	}
	Array[X][Y][Z] = Data;
}

UVoxelData3DArray* UVoxelData3DArray::CreateVoxelData3DArrayInstance()
{
	return NewObject<UVoxelData3DArray>();
}
