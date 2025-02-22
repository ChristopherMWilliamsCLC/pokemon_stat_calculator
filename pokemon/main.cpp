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
// Currently looking into getting a book about windows API to make software.
// Can port this into a windows software window when I learn about Win API.

#include "pokemon.h"
#include "pokeList.h"

int main()
{
	//pokemon Charmander
	Charizard("Adamant", 50, 6, 252, 0, 0, 0, 252);

 /* If you need to change the IV's you can do it like this. Functions above assume the IV values are perfect.
	pokemon Charmander;
	pokemon Charmeleon;
	pokemon Charizard;

	//Charmander
	Charmander.setName("Charmander");
	Charmander.setGender("Male");
	Charmander.setNature("Adamant");
	Charmander.setLevel(50);
	Charmander.setBaseStats(39, 52, 43, 60, 50, 65);
	Charmander.setIndividualValues(31, 31, 31, 31, 31, 31);
	Charmander.setEffortValues(6, 252, 0, 0, 0, 252);
	Charmander.printPokemon();

	//Charmeleon	
	Charmeleon.setName("Charmeleon");
	Charmeleon.setGender("Male");
	Charmeleon.setNature("Adamant");
	Charmeleon.setLevel(50);
	Charmeleon.setBaseStats(58, 64, 58, 80, 65, 80);
	Charmeleon.setIndividualValues(31, 31, 31, 31, 31, 31);
	Charmeleon.setEffortValues(6, 252, 0, 0, 0, 252);
	Charmeleon.printPokemon();
	
	// Charizard
	Charizard.setName("Charizard");
	Charizard.setGender("Male");
	Charizard.setNature("Adamant");
	Charizard.setLevel(50);
	Charizard.setBaseStats(78, 84, 78, 109, 85, 100);
	Charizard.setIndividualValues(31, 31, 31, 31, 31, 31);
	Charizard.setEffortValues(6, 252, 0, 0, 0, 252);
	Charizard.printPokemon();
*/
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
