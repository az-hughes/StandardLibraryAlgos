#pragma once
#include<vector>
#include<string>
#include<iostream>

class Sandwich
{
	std::string name;
	std::vector<std::string> ingredients;
	


public:
	Sandwich() = delete;
	Sandwich(std::string name, std::vector<std::string> ingredients);
	std::vector<std::string> getIngredients() const;
	bool operator <(Sandwich otherSandwich) const;
	std::string getName() const;
	void addIngredient(std::string newIngredient);
	bool hasIngredient(std::string ingredient) const;
};

