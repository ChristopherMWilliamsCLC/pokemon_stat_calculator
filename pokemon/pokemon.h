#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include "stats.h"

using namespace std;

class pokemon : public stats
{
public:
	pokemon();
	pokemon(string, string);
	void printPokemon();
	void setName(string);
	void setGender(string);
	string getName();
	string getGender();

private:
	string name;
	string gender;
};

#endif
