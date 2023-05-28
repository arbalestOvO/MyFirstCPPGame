#pragma once
#include<DrawDebugHelpers.h>

#define DebugPoint(Location) if(GetWorld())  DrawDebugPoint(GetWorld(), Location, 12, FColor::Black, true);
#define DebugVector(_Vector) UE_LOG(LogTemp, Warning, TEXT("This Vector is X : %lf, Y : %lf, Z : %lf"), _Vector.X, _Vector.Y, _Vector.Z);
#define DebugDouble(_double) UE_LOG(LogTemp, Warning, TEXT("%lf"), _double);
#define DebugString(_String) UE_LOG(LogTemp, Warning, TEXT(_String), _String);