#pragma once
#include <vector>
#include "Card.h"
class Deck
{
public:
	Card GetCard();
private:
	std::vector<Card*> deck;
};

