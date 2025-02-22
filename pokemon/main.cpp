// Practicing making some class objects. 
// I figured pokemon would be a nice place to start since theirs so many different things involved.
// Maybe I can turn this into a pokemon calculator app or something for gaming. 

// The formula for calculating a Pokémon's stats (except HP) is:
// Stat = (((2 * BaseStat + IV + (EV / 4)) * Level) / 100 + 5) * NatureModifier

// For HP, the formula is:
// HP = (((2 * BaseStat + IV + (EV / 4)) * Level) / 100) + Level + 10

// The base stats of each Pokémon are predefined and can be found in various 
// Pokémon databases and resources, such as Bulbapedia, Serebii, or the official Pokémon website.
/*
For example, here are the base stats for Charizard:
•	HP: 78
•	Attack: 84
•	Defense: 78
•	Special Attack: 109
•	Special Defense: 85
•	Speed: 100
*/

// Finished this quicker than I thought but it's still just a rough draft. 
// But it's a working rough draft. Just needs some clean-up work. 
// This will work just fine for personal use though.

#include "pokemon.h"

int main()
{
	pokemon P_001;
	
	P_001.setName("Charizard");
	P_001.setGender("Male");
	P_001.setNature("Adamant");
	P_001.setLevel(50);
	P_001.setBaseStats(78, 84, 78, 109, 85, 100);
	P_001.setIndividualValues(31, 31, 31, 31, 31, 31);
	P_001.setEffortValues(6, 252, 0, 0, 0, 252);
	P_001.printPokemon();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
