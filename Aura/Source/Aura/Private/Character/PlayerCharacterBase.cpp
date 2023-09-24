// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacterBase.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"

// Sets default values
APlayerCharacterBase::APlayerCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

UAbilitySystemComponent* APlayerCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void APlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacterBase::InitAbilityActorInfo()
{
}

void APlayerCharacterBase::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const
{
	check(IsValid(GetAbilitySystemComponent()));
	check(DefaultSecondayAttributes);
	FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponent()->MakeEffectContext();
	ContextHandle.AddSourceObject(this);
	const FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, ContextHandle);
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), GetAbilitySystemComponent());
}

void APlayerCharacterBase::InitializeDefaultAttributes() const
{
	ApplyEffectToSelf(DefaultSecondayAttributes, 1.f);
	ApplyEffectToSelf(DefaultBasicAttributes, 1.f);
	ApplyEffectToSelf(DefaultPrimaryAttributes, 1.f);
}

void APlayerCharacterBase::AddCharacterAbilities()
{
	UGameAbilitySystemComponent* GameASC = CastChecked<UGameAbilitySystemComponent>(AbilitySystemComponent);
	if (!HasAuthority()) return;

	GameASC->AddCharacterAbilities(StartupAbilities);

}
