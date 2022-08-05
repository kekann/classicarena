#pragma once
#include <string>
class Card
{
public:
	Card();

	std::string GetName() const;
	std::string GetEffect() const;
	std::string GetClass() const;
	std::string GetAttribute() const;
	int GetCost() const;

	void SetCost();
private:
	const std::string name;
	const std::string effect;
	const std::string classReestriction;
	const std::string attribute;
	int cost;

};

