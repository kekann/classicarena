#pragma once
#include "Deck.h"
#include "Board.h"
class Hand
{
public:
	Hand();
	void Draw(Deck& d, int NumberOfCards);
	void RemoveCardFromHand(int CardsSlotInHand);
	void PlayMinion(Board& b, int CardsSlotInHand);
private:
	size_t MAX_HAND_SIZE = 10;
	std::vector<Card*> hand;
};

