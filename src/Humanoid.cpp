/*
The Humanoid header file has been included, so that the .cpp file can access all of the members, functions and base class data.
*/

#include "Humanoid.h"
#include <iostream>

using namespace std;

/*
Below is the constructor, which contains the parameters for the data members.
*/

Humanoid::Humanoid()
{

	iHealthTotalbase = 0;

	cAnswer = 'Y';


}

/*
In the RoleName function, the main function requests the input of a char (single letter) to determine if the RPG class is damage, a caster or a tank.
This is also compared to kiRoleName, which is a static constant char of 'H'.
It will also detect if an incorrect letter has been input in the main function, when determining the role.
*/

void Humanoid::RoleName(char roleIndex)
{
	if (roleIndex == 'D' && roleIndex != kcRoleName)
	{
		
		role.setRole("Damage");
		cout << "Your role is: " << role.getRole();
		cout << "" << endl;
	}
	else if (roleIndex == 'C' && roleIndex != kcRoleName)
	{
		role.setRole("Caster");
		cout << "Your role is: " << role.getRole();
		cout << "" << endl;
	}
	else if (roleIndex == 'T' && roleIndex != kcRoleName)
	{
		role.setRole("Tank");
		cout << "Your role is: " << role.getRole();
		cout << "" << endl;
		
	}
	else
	{
		cout << "This is not a valid option. " << endl;
	}
}

/*
In the below voids for Health(), these are overloaded functions which can be used by the derived classes of rogue, mage, warrior and assassin to determine the characters health.
Health values are input in the main for each object, so that these can be tailored to how you want them.
These are overloaded functions, due to the use of additional arguements which are requested in the main function, from one integer, to two and then three for the final health total.
*/

void Humanoid::Health(int iHealth)
{

	cout << "At level one, your health is: " << iHealth << endl;

}

void Humanoid::Health(int iHealth, int iHealth2)
{

	cout << "Congratulations! You're now level 2! Your health is now: " << iHealth + iHealth2 << endl;

}

void Humanoid::Health(int iHealth, int iHealth2, int iHealth3)
{

	iHealthTotalbase = iHealth + iHealth2 + iHealth3;

	cout << "Congratulations! You're now level 3! Your health total is: " << iHealthTotalbase << endl;

}


/*
In the below void InventoryAssign, in the main function, a number will correspond with a particular item to be added into the characters inventory. This is checked in the If and Else if statements to see which item was requested. This will then set the item into the string vector within the Inventory class, via item.setItem();
During the simulator, the player will be asked if they want to view their inventory when an item is added, to show what loot has been acquired. The player will input yes if they want to see the loot.
*/

void Humanoid::InventoryAssign(int iAssignNum)
{
	cout << "Do you want to view your inventory? " << endl;
	cout << "Please type [Y] for yes or any other letter to continue. " << endl;
	cin >> cAnswer;

	if (iAssignNum == 1)
	{
		item.setItem("Mace");

		if (cAnswer == 'Y' || cAnswer == 'y')
		{
			item.getItem();
		}
	}
	else if (iAssignNum == 2)
	{
		item.setItem("Knife");

		if (cAnswer == 'Y' || cAnswer == 'y')
		{
			item.getItem();
		}
	}
	else if (iAssignNum == 3)
	{
		item.setItem("Broadsword");

		if (cAnswer == 'Y' || cAnswer == 'y')
		{
			item.getItem();
		}		
	}
	else
	{
		cout << "Invalid option. " << endl;
	}

}




