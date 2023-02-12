#include "Warrior.h"

/*
In the below constructor, the value for total has been set to 0.
*/

Warrior::Warrior()
{

	total = 0;

}

/*
In the below function, the virtual function which is derived from Humanoid has been given a message to print out when the function is called as part of the main. This will differ from other class() functions and is unique to the Warrior class.
*/

void Warrior::Class()
{

	cout << "You are the warrior! You are excellent at taking damage and dealing heavy blows. " << endl;

}

/*
The axeDepletion() function will call the throwing.ThrowingAxes() object from Humanoid and in turn Inventory, as Rogue is a derived class of Humanoid.
It will also calculate the value of total, by taking away the value stored in axes[1] from axes[0].
*/

void Warrior::axeDepletion()
{

	throwing.ThrowingAxes();

	total = axes[0] - axes[1];

}

/*
In showAxes, the player will receive a message to advised that a certain number of throwing axes are needed to complete the next mission and how many have been used.
It will then print to the screen the remaining throwing axes which the player has.
*/

void Warrior::showAxes()
{
	cout << "You need to use " << axes[1] << " throwing axes to complete the mission. " << endl;
	cout << "Number of throwing axes used: " << axes[1] << endl;
	cout << "The number of smoke bombs remaining is: " << total << endl;
}
