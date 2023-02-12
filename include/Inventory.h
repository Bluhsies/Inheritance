#pragma once

/*
These are the included headers, as vector, string and iostream functionality is required.
*/

#include <vector>
#include <string>
#include <iostream>

using namespace std;

/*
The class Inventory contains items which will be included in the player's loot, as well as specialised items for the StoryFinale() function, which is called from Story.h.
In the protected field are a number of arrays relating to each of the 4 classes. smoke for Rogue, axes for Warrior and fire for Mage.
The vector<string> is used to contain the loot items which the player has acquired through their adventure.
*/

class Inventory
{
protected:

	vector<string> vsItems;
	

	int iItems;
	

	int smoke[2] = { 9, 3 };
	
	int axes[2] = { 7, 2 };

	int fire[2] = { 5, 4 };

public:

	Inventory();
	Inventory(vector<string> viItemsNew);
	void setItem(string viItemsNew);
	vector<string> getItem();

	void SmokeBombs();

	void ThrowingAxes();

	void Fireballs();
};