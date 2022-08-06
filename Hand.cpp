#include "Hand.h"

void Hand::Draw(Deck& d, int NumberOfCards)
{
	for (int i = 0; i < NumberOfCards; i++) 
	{
		if (hand.size() < MAX_HAND_SIZE) 
		{
			hand.emplace_back(d.GetCard(0));
		}
		d.RemoveCardFromDeck(0);
	}

}

void Hand::RemoveCardFromHand(int CardsSlotInHand)
{
	hand.erase(hand.begin() + CardsSlotInHand);
}

void Hand::PlayMinion(Board& b, int CardsSlotInHand)
{
	b.EmplaceMinion(hand.at(CardsSlotInHand))
}


