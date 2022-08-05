#pragma once
#include "Deck.h"
class Hand
{
public:
	Hand();
	void Draw();
	void PlayCard();
private:
	size_t MAX_HAND_SIZE = 10;
	std::vector<Card*> hand;
};

