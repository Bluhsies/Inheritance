#pragma once

/*
As Warrior is a derived class of Humanoid, the header file for Humanoid is included in the header file for Warrior, so that it can access all of the functionalities of Humanoid, as well as the base and abstract classes of Story, Role and Inventory.
*/

#include <iostream>
#include "Humanoid.h"

using namespace std;

/*
In the below class, Warrior is a derived class of Humanoid and therefore the public section of Humanoid is included in the class definition, to show that Warrior can access all of the public data stored within Humanoid and the base / abstract classes of Story, Role and Inventory.
*/

/*
In the protected section, there is the value "total" represented by an integer and given a value in the .cpp file and an object of the class Inventory which has been created, called throwing. throwing is used to take information from the ThrowingAxes() function within Inventory, which is utilised in both the axeDepletion and showAxes functions.
The prototype of Class is derived from the Humanoid class, which is a virtual function. In Humanoid, where the original class function was created, the virtual void is given a value but is not instantiated in Humanoid, but Humanoid's derived classes can use this virtual function through inheritance,
to provide their own data.
*/

class Warrior : public Humanoid
{

protected:

	int total;

	Inventory throwing;

public:

	Warrior();

	void Class();

	void axeDepletion();

	void showAxes();

	


};
