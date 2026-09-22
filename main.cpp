#include"Sandwich.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

void printSandwiches(std::vector<Sandwich> sandwiches)
{
	std::cout << "Sandwiches:\n";
	for (Sandwich s : sandwiches)
	{
		std::cout << s.getName() << "\t{";
		std::vector<std::string> ingredients = s.getIngredients();
		for (int i = 0; i < ingredients.size(); i++)
		{
			std::cout << ingredients[i];

			if (i < ingredients.size() - 1)
			{
				std::cout << ", ";
			}
		}
		std::cout << "}\n";
	}
}

int main()
{
	std::vector<Sandwich> sandwiches;
	sandwiches.push_back(Sandwich("Ham and Cheese", {"Bread", "Ham", "Cheese"}));
	sandwiches.push_back(Sandwich("Meatball Sub", {"Bread", "Meatball", "Marinara"}));
	sandwiches.push_back(Sandwich("BLT", {"Bread", "Bacon", "Lettuce", "Tomato"}));
	sandwiches.push_back(Sandwich("Grilled Cheese", {"Bread", "Cheese"}));
	sandwiches.push_back(Sandwich("Hot Dog", {"Bun", "Weiner"}));

	printSandwiches(sandwiches);


	//Using all_of to test if all sandwiches contain bread
	if (std::all_of(sandwiches.begin(), sandwiches.end(),
		[] (Sandwich sandwich) {
			return sandwich.hasIngredient("Bread");
		}))
	{
		std::cout << "\nWOW! All of these sandwiches contain bread!\n";
	}
	else
	{
		std::cout << "\nAt least one sandwich did NOT contain bread. :(\n";
	}

	//using count_if to count each sandwich with cheese
	int cheesySandwichCount = std::count_if(sandwiches.begin(), sandwiches.end(),
		[] (Sandwich sandwich) {
			return sandwich.hasIngredient("Cheese");
		});

	std::cout << "\nOf the sandwich selection, " << cheesySandwichCount << " of them contain cheese!\n\n";



	std::sort(sandwiches.begin(), sandwiches.end());
	std::cout << "Sandwiches are now sorted!\n";

	printSandwiches(sandwiches);



	return 0;
}