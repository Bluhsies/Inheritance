#include "Inventory.h"

/*
In the constructor, a number of items have already been added to vector<string>, which will be displayed when they are called from the Humanoid function InventoryAssign(). This can also be used by the derived classes of Rogue, Mage and Warrior and the Rogue's derived class, Assassin.
*/

Inventory::Inventory()
{

	vsItems = { "Dagger", "Potion", "Rock" };

}

/*
Below advises that the protected variable vsItems can be updated by user input in the main through viItemsNew, which will add a new item to the end of the vector list.
*/

Inventory::Inventory(vector<string> viItemsNew)
{

	vsItems = viItemsNew;

}

/*
In addition to the above, the below push_back function will put the new item which has been selected from the Main and in turn Humanoid.
*/

void Inventory::setItem(string viItemsNew)
{
	vsItems.push_back(viItemsNew);
}

/*
When getItem is called via Humanoid and its derived classes, the for loop will print out the list of items stored within the vector, until the final item has been printed.
It will then return the value vsItems on each occasion, to keep the stored values which will be used in future occasions when the player gains loot.
*/

vector<string> Inventory::getItem()
{
	
	for (const string& i : vsItems)
	{
		cout << i << " " << endl;
	}

	return vsItems;

	
}

/*
In the below function, SmokeBombs will access the data stored in smoke[0] from the Inventory class via inheritance, to print a message to the screen, advising how many smoke bombs the player already has.
*/

void Inventory::SmokeBombs()
{
	cout << "Number of smoke bombs to begin with: " << smoke[0] << endl;
	
}

/*
In the below function, ThrowingAxes will access the data stored in axes[0] from the Inventory class via inheritance, to print a message to the screen, advising how many throwing axes the player already has.
*/

void Inventory::ThrowingAxes()
{

	cout << "Number of throwing axes to begin with: " << axes[0] << endl;
}

/*
In the below function, Fireballs will access the data stored in fire[0] from the Inventory class via inheritance, to print a message to the screen, advising how many fireballs the player already has.
*/

void Inventory::Fireballs()
{

	cout << "Number of fireballs to begin with: " << fire[0] << endl;

}
