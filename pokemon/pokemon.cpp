#include "pokemon.h"

pokemon::pokemon()
{
	name = "";
	gender = "";
}

pokemon::pokemon(string name = "", string gender = "")
{
	name = name;
	gender = gender;
}

void pokemon::printPokemon()
{
	// Print pokemon name and gender.
	cout << "Pokemon: " << name << endl;
	cout << "Gender: " << gender << endl;

	// Print pokemon nature.
	printNature();
	cout << "_________________________________" << endl;
	cout << endl;

	// Print pokemon stats.
	printStats();
	cout << "_________________________________" << endl << endl;
}

void pokemon::setName(string pokeName)
{
	name = pokeName;
}

void pokemon::setGender(string pokeGender)
{
	gender = pokeGender;
}

string pokemon::getName()
{
	return name;
}

string pokemon::getGender()
{
	return gender;
}