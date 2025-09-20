// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor3.h"

// Sets default values
AMyActor3::AMyActor3()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 47;
	esInstructor = false;
	nombre = "Maria";
	DemostrateFundamentals();
}

// Called when the game starts or when spawned
void AMyActor3::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyActor3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor3::DemostrateFundamentals()
{
	// Operadores aritmeticos
	int32 sum = edad + 30;
	float product = MyFloatVariable * 2.5f;

	// Estructuras de control
	if (esInstructor)
	{
		// Imprime en consola
		//UE_LOG(LogTemp, Warning, TEXT("%s es un instructor y tiene %d años"), *nombre);
		// Imprime en pantalla / viewport
		//GEngine->AddOnScreenDEbugMessage(-1, 5.f, FColor::Yellow, 
		//	FString::Printf(TEXT("%s es un instructor y tiene %d años"), *nombre, edad));
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("%s no es un instructor."), *nombre, edad);
		//GEngine->AddOnScreenDEbugMessage(-1, 5.f, FColor::Yellow, 
		//	FString::Printf(TEXT("%s no es un instructor."), *nombre,edad));
	}

	// Bucles o Ciclos
	for (int32 i = 0; i < 5; i++)
	{
		FString DEbugMessage = FString::Printf(TEXT("loop iteration: %d"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DEbugMessage);

	}

	//Bucle While
	int32 count = 0;
	while (count < 3)
	{
		FString WhileMessage = FString::Printf(TEXT("While loop iteration: %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, WhileMessage);
		count++;
	}

}