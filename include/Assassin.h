#pragma once

/*
The header file for Rogue.h has been included, as the Assassin class is derived from the Rogue class. This means it inherits the functionality of the Rogue class, the Humanoid class which Rogue is derived from and the Story, Inventory and Role classes, which Humanoid is derived from and has access to.
*/

#include "Rogue.h"

/*
In the Assassin class definition, the public section of Rogue has been included, to show that Assassin is derived from Rogue and obtains the features of Rogue which are public and protected.
*/

/*
Within the protected section is the initialiser for the ints smokeBombBonus, iHealthTotal and total2. There is also the object smokeyness, created from the base class Rogue.
Within the public section is the constructor, derived class Class() from Humanoid (virtual function) and the functions addBonusSmoke, showSmoke and Health.
Health is an overloaded function, due to having the same name as the functions in the Humanoid class but with different parameters, as well as each Health function having a different number of parameters.
*/

class Assassin : public Rogue
{
protected:

	int smokeBombBonus;

	int iHealthTotal;

	int total2;

	Rogue smokeyness;

public:

	

	Assassin();

	void Class();

	void addBonusSmoke();

	void showSmoke();

	void Health(int iAHealth);
	void Health(int iAHealth, int iAHealth2);
	void Health(int iAHealth, int iAHealth2, int iAHealthBonus);

};
