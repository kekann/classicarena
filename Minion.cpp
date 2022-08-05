#include "Minion.h"

int Minion::GetAttack() const
{
    return ms_.attack;
}

int Minion::GetHealth() const
{
    return ms_.health;
}

void Minion::SetAttack(int newAttack)
{
    ms_.attack = newAttack;
}

void Minion::SetHealth(int newHealth)
{
    ms_.health = newHealth;
}
