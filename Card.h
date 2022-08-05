#pragma once
#include "CardAttributes.h"
class Card
{
public:
	Card(CardAttributes ca)
		:
		ca_{ ca } {}

	std::string GetName() const;
	std::string GetEffect() const;
	std::string GetClass() const;
	std::string GetAttribute() const;
	int GetCost() const;

	void SetCost(int newCost);
private:
	CardAttributes ca_;

};

