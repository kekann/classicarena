#pragma once
#include "Card.h"
#include "Stats.h"
class Weapon :
    public Card
{
public:
    Weapon();
    int GetAttack() const;
    int GetDurability() const;

    void SetAttack(int attack);
    void SetDurability(int health);
private:
    Stats ws_
};

