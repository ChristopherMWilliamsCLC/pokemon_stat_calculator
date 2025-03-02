// List of functions with pokemon class objects. 
// Assumes that IV values are perfect 31's.
// sNature should be a valid pokemon nature.
// nature.h has a list of natures and what they do.
// Arguments after sNature are for the pokemon's level, and effort values. 
// Pokemon can have a total of 510 EV's between all effort values combined, and a max of 255 for any single effort value.
// If the nature or effort values aren't entered correctly a stat calculation will not be performed.

#include "pokemon.h"
void Bulbasaur(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Ivysaur(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Venusaur(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Charmander(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Charmeleon(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Charizard(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Squirtle(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Wartortle(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
void Blastoise(string sNature, int iLevel, int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
// And so on..