#include "Weapon.h"

int Weapon::GetAttack() const
{
	return ws_.attack;
}

int Weapon::GetDurability() const
{
	return ws_.health;
}

void Weapon::SetAttack(int attack)
{
	ws_.attack = attack;
}

void Weapon::SetDurability(int health)
{
	ws_.health = health;
}
