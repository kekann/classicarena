#pragma once
#include <vector>
#include "Card.h"
class Deck
{
public:
	Card* GetCard(int CardsSlotInDeck);
	void RemoveCardFromDeck(int CardsSlotInDeck);
private:
	std::vector<Card*> deck;
};

