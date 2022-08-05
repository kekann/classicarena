#pragma once
#include "Card.h"
class Weapon :
    public Card
{
public:
    Weapon();
    int GetAttack() const;
    int GetDurability() const;

    void SetAttack();
    void SetDurability();
private:
    int attack;
    int durability;
};

