#include "Rogue.h"

/*
In the below constructor, the value for total has been set to 0.
*/

Rogue::Rogue()
{

	total = 0;

}

/*
In the below function, the virtual function which is derived from Humanoid has been given a message to print out when the function is called as part of the main. This will differ from other class() functions and is unique to the Rogue class.
*/

void Rogue::Class()
{

	cout << "You are the rogue! You are excellent at stealth missions. " << endl;

}

/*
The smokeDepletion() function will call the smokey.SmokeBombs() object from Humanoid and in turn Inventory, as Rogue is a derived class of Humanoid.
It will also calculate the value of total, by taking away the value stored in smoke[1] from smoke[0].
*/

void Rogue::smokeDepletion()
{

	smokey.SmokeBombs();

	total = smoke[0] - smoke[1];


}

/*
In showSmoke, the player will receive a message to advised that a certain number of smoke bombs are needed to complete the next mission and how many have been used.
It will then print to the screen the remaining smoke bombs which the player has.
*/

void Rogue::showSmoke()
{

	cout << "You need to use " << smoke[1] << " smoke bombs to complete the mission. " << endl;
	cout << "Number of smoke bombs used: " << smoke[1] << endl;
	cout << "The number of smoke bombs remaining is: " << total << endl;

}

