#pragma once
#include "Card.h"
class Minion :
    public Card
{
public:
    Minion();
    int GetAttack() const;
    int GetHealth() const;

    void SetAttack();
    void SetHealth();
private:
    int attack;
    int health;

};

