#include "Card.h"

std::string Card::GetName() const
{
    return ca_.name;
}

std::string Card::GetEffect() const
{
    return ca_.effect;
}

std::string Card::GetClass() const
{
    return ca_.classRestriction;
}

std::string Card::GetAttribute() const
{
    return ca_.attribute;
}

int Card::GetCost() const
{
    return ca_.cost;
}

void Card::SetCost(int newCost)
{
    ca_.cost = newCost;
}
