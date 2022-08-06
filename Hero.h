#pragma once
#include <string>
#include "Stats.h"
class Hero
{
public:
	std::string GetHeroPower();
	int GetAttack();
	int GetHealth();
private:
	std::string heroPower;
	Stats hs_;
};

