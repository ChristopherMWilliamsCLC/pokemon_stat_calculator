// List of functions with pokemon class objects. 
// Assumes that IV values are perfect 31's.
// sNature should be a valid pokemon nature begining with a capital letter and subsequent lowercase letters.
// Example: "Adamant", nature.h has a list of natures and what they do.
// Other arguments are for the pokemon's level and effort values. 
// You can have a total of 510 EV's between all effort values combined with a max of 255 EV's for any single effort value.
// If the effort value's entered aren't valid then all EV's will default to 0 and continue running the program.

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