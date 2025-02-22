#include "nature.h"

nature::nature()
{
	pokeNature = "";
}

void nature::printNature()
{
	cout << "Nature: " << pokeNature << endl;
}

void nature::setNature(string pokeNat)
{
	pokeNature = pokeNat;
}

string nature::getNature()
{
	return pokeNature;
}