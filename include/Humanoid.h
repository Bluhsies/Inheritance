#pragma once

/*
This is the header file for the Humanoid class.
This contains information which is generic to all subclasses, as well as allowing the subclasses to access information in
Below are the header files for the classes which can be accessed by the Humanoid class.
There are a number of data members, such as char cAnswer; which are declared in the protected field. 
This determines where in your program, the data can be accessed from. They are only accessible in their own class and certain derived classes, but it will depend on their access level. (Dawson 2010, Pg 379)
Similarly with public field, this determines that any of the derived classes can access the data which is located under public. (Dawson, 2010. Pg 266)
I have also created objects from the Role and Inventory classes, to be used in the .cpp file, which are used to access information in the abstract classes.
The public section includes Humanoid(); which is the constructor and holds the parameters for the data members set in the protected field.
void Health() is an overloaded function prototype, allowing for different parameters to be set. The compiler can differentiate between these, based on the number of arguments called.
The virtual void Class() is defined in a base class and overwritten by a derived class. In this instance, Rogue, Assassin, Mage and Warrior can access this.
Additionally, it allows for each derived class to have it's own version of the virtual function.

*/

#include <iostream>
#include "Role.h"
#include "Inventory.h"
#include "Story.h"

using namespace std;

class Humanoid : public Role, public Inventory, public Story
{
protected:

	static const char kcRoleName = 'H';

	static const int iAssignValue = 1;

	char cAnswer;

	int iHealthTotalbase;
	
	Role role;

	Inventory item;

public:

	Humanoid();

	virtual void Class() = 0;

	void Health(int iHealth);
	void Health(int iHealth, int iHealth2);
	void Health(int iHealth, int iHealth2, int iHealth3);

	void RoleName(char roleIndex);

	void InventoryAssign(int iAssignNum);

};