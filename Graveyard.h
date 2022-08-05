#pragma once
#include <vector>
#include "Card.h"
class Graveyard
{
public:
	Graveyard();
private:
	std::vector<Card*> graveyard;
};

