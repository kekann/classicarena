#pragma once
#include "Card.h"
#include "MinionsStats.h"
class Minion :
    public Card
{
public:
    Minion(MinionsStats ms, CardAttributes ca)
        :
        ms_ {ms},
        Card{ ca } {}

    int GetAttack() const;
    int GetHealth() const;

    void SetAttack(int newAttack);
    void SetHealth(int newHealth);
private:
    MinionsStats ms_;

};

