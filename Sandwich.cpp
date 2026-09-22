#include "Sandwich.h"

Sandwich::Sandwich(std::string name, std::vector<std::string> ingredients)
	:
	name(name),
	ingredients(ingredients)
{
}

std::vector<std::string> Sandwich::getIngredients() const
{
	return ingredients;
}

bool Sandwich::operator<(Sandwich otherSandwich) const
{
	if (name < otherSandwich.name)
	{
		return true;
	}
	return false;
}

std::string Sandwich::getName() const
{
	return name;
}

void Sandwich::addIngredient(std::string newIngredient)
{
	ingredients.push_back(newIngredient);
}

bool Sandwich::hasIngredient(std::string ingredient) const
{
	for (std::string i : ingredients)
	{
		if (i == ingredient)
			return true;
	}
	return false;
}

