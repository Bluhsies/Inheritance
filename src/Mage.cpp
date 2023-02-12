#include "Mage.h"

/*
In the below constructor, the value for total has been set to 0.
*/

Mage::Mage()
{

	total = 0;

}

/*
In the below function, the virtual function which is derived from Humanoid has been given a message to print out when the function is called as part of the main. This will differ from other class() functions and is unique to the Mage class.
*/

void Mage::Class()
{

	cout << "You are the mage! You are excellent at casting basic spells. " << endl;

}

/*
The fireballDepletion() function will call the flames.Fireballs() object from Humanoid and in turn Inventory, as Mage is a derived class of Humanoid.
It will also calculate the value of total, by taking away the value stored in fire[1] from fire[0].
*/

void Mage::fireballDepletion()
{

	flames.Fireballs();

	total = fire[0] - fire[1];

}

/*
In showFireballs, the player will receive a message to advised that a certain number of fireballs are needed to complete the next mission and how many have been used.
It will then print to the screen the remaining fireballs which the player has.
*/

void Mage::showFireballs()
{

	cout << "You need to use " << fire[1] << " smoke bombs to complete the mission. " << endl;
	cout << "Number of smoke bombs used: " << fire[1] << endl;
	cout << "The number of smoke bombs remaining is: " << total << endl;

}

