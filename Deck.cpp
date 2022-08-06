#include "Deck.h"

Card* Deck::GetCard(int CardsSlotInDeck)
{
    return deck.at(CardsSlotInDeck);
}

void Deck::RemoveCardFromDeck(int CardsSlotInDeck)
{
    deck.erase(deck.begin() + CardsSlotInDeck);
}
