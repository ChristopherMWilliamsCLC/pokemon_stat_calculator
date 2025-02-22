#ifndef STATS_H
#define STATS_H

#include <iostream>
#include <string>
#include "nature.h"

using namespace std;

class stats: public nature
{
public:
	stats();
	void printStats();
	void setBaseStats(int pokeHp, int pokeAttack, int pokeSpAttack, int pokeDefense, int pokeSpDefense, int pokeSpeed);
	void setIndividualValues(int ivHp, int ivAttack, int ivSpAttack, int ivDefense, int ivSpDefense, int ivSpeed);
	void setEffortValues(int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed);
	void setLevel(int level);
	string getEffortValues();
	string getIndividualValues();
	/* Uncomment if needed.
	void setAttack(int attack);
	void setSpAttack(int sp_attack);
	void setDefense(int defense);
	void setSpDefense(int sp_defense);
	void setSpeed(int speed);
	int getLevel();
	int getAttack();
	int getSpAttack();
	int getDefense();
	int getSpDefense();
	int getSpeed();
	*/

private:
	int level;
	int hp;
	int attack;
	int sp_attack;
	int defense;
	int sp_defense;
	int speed;
	int iv_hp;
	int iv_attack;
	int iv_sp_attack;
	int iv_defense;
	int iv_sp_defense;
	int iv_speed;
	int ev_hp;
	int ev_attack;
	int ev_sp_attack;
	int ev_defense;
	int ev_sp_defense;
	int ev_speed;
};

#endif
