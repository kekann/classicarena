#pragma once
#include "Minion.h"
#include "Hand.h"
#include "Deck.h"
#include "Graveyard.h"
#include <memory>
#include "Weapon.h"
#include "Hero.h"
class Board
{
public:
	Board();
	Minion GetMinion();
	Hero GetHero();
	Weapon GetWeapon();

	void ToGraveyard(Graveyard& grave, Card* card);

private:
	size_t MAX_BOARD_SIZE = 7;
	std::vector<Minion*> minions;
	std::unique_ptr<Hero> hero;
	std::unique_ptr<Weapon> weapon = nullptr;
};

