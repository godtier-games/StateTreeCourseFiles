// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StateTreeComponent.h"
#include "OurStateTreeComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STATETREECOURSE_API UOurStateTreeComponent : public UStateTreeComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UOurStateTreeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="State Tree")
	void SetStateTree(UStateTree* InStateTree);
};
