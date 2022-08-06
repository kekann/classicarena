#include "Board.h"

void Board::EmplaceMinion(Minion* m, int )
{
	minions.emplace_back(m);
}
