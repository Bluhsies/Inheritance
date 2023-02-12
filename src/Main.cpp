/*
P2681678 
Ian Corkill
This is the 1st Deliverable for Introduction to Object Orientated Programming.
I have amended the code from the animal example provided, to sterotypical roleplaying games classes.
*/

/*
Reference List:
Dawson, M. (2010) Beginning C++ Through Game Programming. 3rd Edition. Course Technology.
*/

/*
Below are the header files which are used to access the information contained within the types and classes created in the project.
By using these header files, they will include not only the information stored within the classes themselves, but also the data stored within their base and abstract classes.
(Dawson, 2010. Pg 8)
*/

#include "Rogue.h"
#include "Assassin.h"
#include "Mage.h"
#include "Warrior.h";

/*
int main is the main function for the program and is where the main program is initialised. (Dawson, 2010. p.35)
The program will then return a value of 0, showing that it has ran successfully, once it has been completed.
Objects have been instantiated for the Rogue, Assassin, Mage and Warrior classes. (Dawson, 2010. Pg 259)
By using the switch statement, the user will be taken to the main menu, which will ask the user for input to access the game and subsequently select a class to play as.
A mixture of lower case and upper case letters can be used for the corresponding choice and will take the user to different branches of the code. (Dawson, 2010. p.51)
These are defined as cases, which represent a different aspect of the program.
For example, if the user has entered the main program and selected option [D] for warrior, this will take the user through the warrior scenario.
To call a member function, the object name is followed by the member function, with a . inbetween both parameters. (example, rogue.Class();)
This will call to the screen the information outlined in the Rogue (base and abstract) classes, where Rogue will take information from Humanoid and in turn Humanoid from Story, Role and Inventory. (Dawson, 2010. Pg 260)
This information will differ depending on the object used to call the member function and it's place in inheritance.
*/

int main()
{
	Rogue rogue;
	Assassin assassin;
	Mage mage;
	Warrior warrior;
	

	char cMenuOption = 'Y';
	char cMenuOption2 = 'Y';


	cout << "Welcome to the RPG story simulator. Please press [A] to begin. " << endl;
	cin >> cMenuOption;
	
	switch (cMenuOption)
	{
	case 'a':
	case 'A':

		cout << "Please select a character: " << endl;
		cout << "[A] Rogue " << endl;
		cout << "[B] Assassin (Rogue Subclass) " << endl;
		cout << "[C] Mage " << endl;
		cout << "[D] Warrior " << endl;

		cin >> cMenuOption2;
		system("CLS");

		switch (cMenuOption2)
		{
		case 'a':
		case 'A':
			rogue.Class();
			rogue.RoleName('D');
			rogue.Health(10);
			rogue.InventoryAssign(2);
			rogue.StoryPart1();
			rogue.Health(10, 15);
			rogue.InventoryAssign(3);
			rogue.StoryPart2();
			rogue.Health(10, 15, 20);
			rogue.smokeDepletion();
			rogue.showSmoke();
			rogue.StoryFinale();
			break;

		case 'b':
		case 'B':

			assassin.Class();
			assassin.RoleName('D');
			assassin.Health(10);
			assassin.InventoryAssign(1);
			assassin.StoryPart1();
			assassin.Health(10, 15);
			assassin.InventoryAssign(2);
			assassin.StoryPart2();
			assassin.Health(10, 15, 30);			
			assassin.addBonusSmoke();
			assassin.showSmoke();
			assassin.StoryFinale();
			break;

		case 'c':
		case 'C':

			mage.Class();
			mage.RoleName('C');
			mage.Health(5);
			mage.InventoryAssign(2);
			mage.StoryPart1();
			mage.Health(5, 10);
			mage.InventoryAssign(1);
			mage.StoryPart2();
			mage.Health(5, 10, 15);
			mage.fireballDepletion();
			mage.showFireballs();
			mage.StoryFinale();
			break;

		case 'd':
		case 'D':

			warrior.Class();
			warrior.RoleName('T');
			warrior.Health(20);
			warrior.InventoryAssign(3);
			warrior.StoryPart1();
			warrior.Health(20, 25);
			warrior.InventoryAssign(1);
			warrior.StoryPart2();
			warrior.Health(20, 25, 30);
			warrior.axeDepletion();
			warrior.showAxes();
			warrior.StoryFinale();
			break;
		
		default:
			cout << "That is an invalid option. Taking you back to the start of the simulator. " << endl;
			system("pause");
			main();
			break;
			
		}
		
	break;

	default:
		cout << "That is an invalid option. Please press [A]. " << endl;
		system("pause");
		main();
		break;
		
	}

	return 0;

}