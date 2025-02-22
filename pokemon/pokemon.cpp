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
	cout << "Pokemon: " << name << endl;
	cout << "Gender: " << gender << endl;
	printNature();
	cout << "_________________________________" << endl;
	cout << endl;
	printStats();
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