#include "stats.h"

stats::stats()
{
	level = 1;
	hp = 1;
	attack = 1;
	sp_attack = 1;
	defense = 1;
	sp_defense = 1;
	speed = 1;
	iv_hp = 1;
	iv_attack = 1;
	iv_sp_attack = 1;
	iv_defense = 1;
	iv_sp_defense = 1;
	iv_speed = 1;
	ev_hp = 0;
	ev_attack = 0;
	ev_sp_attack = 0;
	ev_defense = 0;
	ev_sp_defense = 0;
	ev_speed = 0;
}

void stats::printStats()
{
	// Message in the nature class's default constructor.
	string message = "The only valid natures are as follows:\n \n"
		"1. Adamant: +Attack, -Special Attack\n"
		"2. Bashful: No effect\n"
		"3. Bold: +Defense, -Attack\n"
		"4. Brave: +Attack, -Speed\n"
		"5. Calm: +Special Defense, -Attack\n"
		"6. Careful: +Special Defense, -Special Attack\n"
		"7. Docile: No effect\n"
		"8. Gentle: +Special Defense, -Defense\n"
		"9. Hardy: No effect\n"
		"10. Hasty: +Speed, -Defense\n"
		"11. Impish: +Defense, -Special Attack\n"
		"12. Jolly: +Speed, -Special Attack\n"
		"13. Lax: +Defense, -Special Defense\n"
		"14. Lonely: +Attack, -Defense\n"
		"15. Mild: +Special Attack, -Defense\n"
		"16. Modest: +Special Attack, -Attack\n"
		"17. Naive: +Speed, -Special Defense\n"
		"18. Naughty: +Attack, -Special Defense\n"
		"19. Quiet: +Special Attack, -Speed\n"
		"20. Quirky: No effect\n"
		"21. Rash: +Special Attack, -Special Defense\n"
		"22. Relaxed: +Defense, -Speed\n"
		"23. Sassy: +Special Defense, -Speed\n"
		"24. Serious: No effect\n"
		"25. Timid: +Speed, -Attack";

	/*
		Below is just to make sure that if one thing isn't set correctly then everything is reset to default.
		Just to make sure the user isn't misled into thinking that a correct stat calculation was performed
		by not seeing a error message.
	*/

	// Checks if nature, ev, or iv isn't set correctly. If any of them is a default value they're all set to default.
	if (getNature() == message || getEffortValues() == "0 0 0 0 0 0" || getIndividualValues() == "1 1 1 1 1 1")
	{
		// Sets the level, ev, and iv to the stats class default constructor value.
		setStatsToDefault();
	}
	else if (getNature() == "Jolly" ||
			 getNature() == "Impish" ||
			 getNature() == "Careful" ||
			 getNature() == "Adamant")
	{
		sp_attack = (((2 * sp_attack + iv_sp_attack + (ev_sp_attack / 4)) * level) / 100 + 5) * 0.9;
	}
	else
	{
		// Handles all the math to calculate and set the final stats.
		setStatsToCalc();
	}

	// Outputs the individual values.
	cout << "Individual Values " << endl;
	cout << "HP: " << iv_hp << endl;
	cout << "Attack: " << iv_attack << endl;
	cout << "Sp. Attack: " << iv_sp_attack << endl;
	cout << "Defense: " << iv_defense << endl;
	cout << "Sp. Defense: " << iv_sp_defense << endl;
	cout << "Speed: " << iv_speed << endl;

	cout << endl;

	// Outputs the effort values.
	cout << "Effort Values " << endl;
	cout << "HP: " << ev_hp << endl;
	cout << "Attack: " << ev_attack << endl;
	cout << "Sp. Attack: " << ev_sp_attack << endl;
	cout << "Defense: " << ev_defense << endl;
	cout << "Sp. Defense: " << ev_sp_defense << endl;
	cout << "Speed: " << ev_speed << endl;


	cout << endl;

	// Outputs the final stat calculation.
	cout << "Final Stat Calculation" << endl;
	cout << "Level: " << level << endl;
	cout << "HP: " << hp << endl;
	cout << "Attack: " << attack << endl;
	cout << "Sp. Attack: " << sp_attack << endl;
	cout << "Defense: " << defense << endl;
	cout << "Sp. Defense: " << sp_defense << endl;
	cout << "Speed: " << speed << endl;
}

void stats::setBaseStats(int pokeHp, int pokeAttack, int pokeSpAttack, int pokeDefense, int pokeSpDefense, int pokeSpeed)
{
	hp = pokeHp;
	attack = pokeAttack;
	sp_attack = pokeSpAttack;
	defense = pokeDefense;
	sp_defense = pokeSpDefense;
	speed = pokeSpeed;
}

void stats::setIndividualValues(int ivHp, int ivAttack, int ivSpAttack, int ivDefense, int ivSpDefense, int ivSpeed)
{
	if (ivHp > 0 && ivHp <= 31 &&
		ivAttack > 0 &&  ivAttack <= 31 &&
		ivSpAttack > 0 &&  ivSpAttack <= 31 &&
		ivDefense > 0 && ivDefense <= 31 &&
		ivSpDefense > 0 && ivSpDefense <= 31 &&
		ivSpeed > 0 && ivSpeed <= 31)
	{
		iv_hp = ivHp;
		iv_attack = ivAttack;
		iv_sp_attack = ivSpAttack;
		iv_defense = ivDefense;
		iv_sp_defense = ivSpDefense;
		iv_speed = ivSpeed;
	}
	else
	{
		cout << "ERROR: IV values must be greater than 0 and less than or equal to 31." << endl;
	}
}

void stats::setEffortValues(int evHp, int evAttack, int evSpAttack, int evDefense, int evSpDefense, int evSpeed)
{
	if(
		evHp +
		evAttack +
		evSpAttack +
		evDefense +
		evSpDefense +
		evSpeed >= 0 &&
		evHp +
		evAttack +
		evSpAttack +
		evDefense +
		evSpDefense +
		evSpeed <= 510 &&
		evHp >= 0 && evHp <= 255 &&
		evAttack >= 0 && evAttack <= 255 &&
		evSpAttack >= 0 && evSpAttack <= 255 &&
		evDefense >= 0 && evDefense <= 255 &&
		evSpDefense >= 0 && evSpDefense <= 255 &&
		evSpeed >= 0 && evSpeed <= 255)
	{
		ev_hp = evHp;
		ev_attack = evAttack;
		ev_sp_attack = evSpAttack;
		ev_defense = evDefense;
		ev_sp_defense = evSpDefense;
		ev_speed = evSpeed;
	}
	else
	{
		cout << "ERROR: Effort values must not exceed 255, and the sum of all EV values combined must not exceed 510." << endl;
	}
}

void stats::setLevel(int pokeLevel)
{
	if (pokeLevel > 0 && pokeLevel <= 100)
	{
		level = pokeLevel;
	}
	else
	{
		cout << "ERROR: Pokemon level must be greater than 0 and less than or equal to 100." << endl;
	}
}

void stats::setStatsToCalc()
{
	//HP stat calculations.
	hp = (((2 * hp + iv_hp + (ev_hp / 4)) * level) / 100) + level + 10;

	// Attack stat calculations.
	if (getNature() == "Adamant" ||
		getNature() == "Brave" ||
		getNature() == "Lonely" ||
		getNature() == "Naughty" ||
		getNature() == "adamant" ||
		getNature() == "brave" ||
		getNature() == "lonely" ||
		getNature() == "naughty")
	{
		attack = (((2 * attack + iv_attack + (ev_attack / 4)) * level) / 100 + 5) * 1.1;
	}
	else if (getNature() == "Bold" ||
		getNature() == "Calm" ||
		getNature() == "Modest" ||
		getNature() == "bold" ||
		getNature() == "calm" ||
		getNature() == "modest")
	{
		attack = (((2 * attack + iv_attack + (ev_attack / 4)) * level) / 100 + 5) * 0.9;
	}
	else
{
		attack = (((2 * attack + iv_attack + (ev_attack / 4)) * level) / 100 + 5) * 1.0;
}

	// Sp. Attack stat calculations.
	if (getNature() == "Mild" ||
		getNature() == "Modest" ||
		getNature() == "mild" ||
		getNature() == "modest")
	{
		sp_attack = (((2 * sp_attack + iv_sp_attack + (ev_sp_attack / 4)) * level) / 100 + 5) * 1.1;
	}
	else if (getNature() == "Jolly" ||
		getNature() == "Impish" ||
		getNature() == "Careful" ||
		getNature() == "Adamant" ||
		getNature() == "jolly" ||
		getNature() == "impish" ||
		getNature() == "careful" ||
		getNature() == "adamant")
	{
		sp_attack = (((2 * sp_attack + iv_sp_attack + (ev_sp_attack / 4)) * level) / 100 + 5) * 0.9;
	}
	else
{
		sp_attack = (((2 * sp_attack + iv_sp_attack + (ev_sp_attack / 4)) * level) / 100 + 5) * 1.0;
}

	// Defense stat calculations.
	if (getNature() == "Bold" ||
		getNature() == "Impish" ||
		getNature() == "Lax" ||
		getNature() == "Relaxed" ||
		getNature() == "bold" ||
		getNature() == "impish" ||
		getNature() == "lax" ||
		getNature() == "relaxed")
	{
		defense = (((2 * defense + iv_defense + (ev_defense / 4)) * level) / 100 + 5) * 1.1;
	}
	else if (getNature() == "Mild" ||
		getNature() == "Lonely" ||
		getNature() == "Hasty" ||
		getNature() == "Gentle" ||
		getNature() == "mild" ||
		getNature() == "lonely" ||
		getNature() == "hasty" ||
		getNature() == "gentle")
	{
		defense = (((2 * defense + iv_defense + (ev_defense / 4)) * level) / 100 + 5) * 0.9;
	}
	else
{
		defense = (((2 * defense + iv_defense + (ev_defense / 4)) * level) / 100 + 5) * 1.0;
}

	// Sp. Defense stat calculations.
	if (getNature() == "Calm" ||
		getNature() == "Careful" ||
		getNature() == "Gentle" ||
		getNature() == "calm" ||
		getNature() == "careful" ||
		getNature() == "gentle")
	{
		sp_defense = (((2 * sp_defense + iv_sp_defense + (ev_sp_defense / 4)) * level) / 100 + 5) * 1.1;
	}
	else if (getNature() == "Lax" ||
		getNature() == "lax")
	{
		sp_defense = (((2 * sp_defense + iv_sp_defense + (ev_sp_defense / 4)) * level) / 100 + 5) * 0.9;
	}
	else
{
		sp_defense = (((2 * sp_defense + iv_sp_defense + (ev_sp_defense / 4)) * level) / 100 + 5) * 1.0;
}

	// Speed stat calculations.
	if (getNature() == "Hasty" ||
		getNature() == "Jolly" ||
		getNature() == "hasty" ||
		getNature() == "jolly")
	{
		speed = (((2 * speed + iv_speed + (ev_speed / 4)) * level) / 100 + 5) * 1.1;
	}
	else if (getNature() == "Brave" ||
		getNature() == "brave")
{
		speed = (((2 * speed + iv_speed + (ev_speed / 4)) * level) / 100 + 5) * 0.9;
}
	else
{
		speed = (((2 * speed + iv_speed + (ev_speed / 4)) * level) / 100 + 5) * 1.0;
	}
}

void stats::setStatsToDefault()
{
	level = 1;
	hp = 1;
	attack = 1;
	sp_attack = 1;
	defense = 1;
	sp_defense = 1;
	speed = 1;
	iv_hp = 1;
	iv_attack = 1;
	iv_sp_attack = 1;
	iv_defense = 1;
	iv_sp_defense = 1;
	iv_speed = 1;
	ev_hp = 0;
	ev_attack = 0;
	ev_sp_attack = 0;
	ev_defense = 0;
	ev_sp_defense = 0;
	ev_speed = 0;
}

string stats::getBaseStats()
{
	return to_string(hp) + " " +
		to_string(attack) + " " +
		to_string(sp_attack) + " " +
		to_string(defense) + " " +
		to_string(sp_defense) + " " +
		to_string(speed);
}

string stats::getIndividualValues()
{
	return to_string(iv_hp) + " " +
		to_string(iv_attack) + " " +
		to_string(iv_sp_attack) + " " +
		to_string(iv_defense) + " " +
		to_string(iv_sp_defense) + " " +
		to_string(iv_speed);
}

string stats::getEffortValues()
{
	return to_string(ev_hp) + " " +
		to_string(ev_attack) + " " +
		to_string(ev_sp_attack) + " " +
		to_string(ev_defense) + " " +
		to_string(ev_sp_defense) + " " +
		to_string(ev_speed);
}

string stats::getLevel()
{
	return to_string(level);
}