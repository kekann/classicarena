#pragma onceStats
#include "Card.h"
#include "Stats.h"
class Minion :
    public Card
{
public:
    Minion(Stats ms, CardAttributes ca)
        :
        ms_ {ms},
        Card{ ca } {}

    int GetAttack() const;
    int GetHealth() const;

    void SetAttack(int newAttack);
    void SetHealth(int newHealth);
private:
    Stats ms_;

};

