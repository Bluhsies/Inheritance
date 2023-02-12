#pragma once

/*
As Rogue is a derived class of Humanoid, the header file for Humanoid is included in the header file for Rogue, so that it can access all of the functionalities of Humanoid, as well as the base and abstract classes of Story, Role and Inventory.
*/

#include <iostream>
#include "Humanoid.h"

using namespace std;

/*
In the below class, Rogue is a derived class of Humanoid and therefore the public section of Humanoid is included in the class definition, to show that Rogue can access all of the public data stored within Humanoid and the base / abstract classes of Story, Role and Inventory.
*/

/*
In the protected section, there is the value "total" represented by an integer and given a value in the .cpp file and an object of the class Inventory which has been created, called smokey. smokey is used to take information from the SmokeBombs() function within Inventory, which is utilised in both the smokeDepletion and showSmoke functions.
The prototype of Class is derived from the Humanoid class, which is a virtual function. In Humanoid, where the original class function was created, the virtual void is given a value but is not instantiated in Humanoid, but Humanoid's derived classes can use this virtual function through inheritance,
to provide their own data. 
*/

class Rogue : public Humanoid
{

protected:

	int total;

	Inventory smokey;

public:

	Rogue();

	void Class();

	void smokeDepletion();
	
	void showSmoke();
	


};