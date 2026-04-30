#include "Postal2AttributeSet.h"

#include "GameplayEffectExtension.h"

void UPostal2AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    if (Data.EvaluatedData.Attribute == GetHealthAttribute())
    {
        SetHealth(FMath::Clamp(GetHealth(), 0, GetMaxHealth()));
    }

    if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
    {
        SetStamina(FMath::Clamp(GetStamina(), 0, GetMaxStamina()));
    }
}
