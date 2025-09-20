// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor3.generated.h"

UCLASS()
class UECARDEN2025_API AMyActor3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor3();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Ejemplo de una variable de instancia publica
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	float MyFloatVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	int32 edad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	bool esInstructor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	FString nombre;

	// Ejemplo de una variable de instancia publica
	UFUNCTION(BlueprintCallable, Category = "MyActorTest")
	void DemostrateFundamentals();
};
