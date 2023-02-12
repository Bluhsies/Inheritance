#include "Story.h"

using namespace std;

/*
In the constructor, cChoice has been set to 'Y' to give char cChoice a value, however, this can and is changed in the below functions.
*/

Story::Story()
{

	cChoice = 'Y';

}

/*
The below function is part 1 of the story.
The player will be presented with a simple choice to pass the section via strength or cunning route.
This function can be called by the derived classes of Humanoid to access the story, as Humanoid has access to the data inside this class.
The player will input S for strength or C for cunning. Any other letter input will result in an error message and start the story part again, by calling the function in the else section of the if, else if and else statement.
*/

void Story::StoryPart1()
{

	cout << "You arrive at a village, with nothing but the clothes on your back and a few basic items. " << endl;
	cout << "You have been asked to cull the local boar population. " << endl;
	cout << "Do you wish to use brute strength or cunning to overcome this task?" << endl;
	cout << "Please input [S] for strength or [C] for cunning. " << endl;
	cin >> cChoice;

	if (cChoice == 'S' || cChoice == 's')
	{
		cout << "The boars are massacred and the village is happy, although a little frightened of you. " << endl;
		system("pause");
		system("CLS");
	}
	else if (cChoice == 'C' || cChoice == 'c')
	{
		cout << "You set up a series of traps and capture the boars, allowing you to move them to a new location. " << endl;
		cout << "The village is happy and they are not frightened of you. " << endl;
		system("pause");
		system("CLS");
	}
	else
	{
		cout << "That is an invalid option. " << endl;
		system("pause");
		system("CLS");
		StoryPart1();
	}

	
}

/*
The below function is part 2 of the story.
The player will be presented with a simple choice to pass the section via strength or cunning route.
This function can be called by the derived classes of Humanoid to access the story, as Humanoid has access to the data inside this class.
The player will input S for strength or C for cunning. Any other letter input will result in an error message and start the story part again, by calling the function in the else section of the if, else if and else statement.
*/

void Story::StoryPart2()
{

	cout << "You have been tasked with taking out a group of local bandits who have been pillaging the roads to the village. " << endl;
	cout << "Will you use strength or cunning to overcome this task? " << endl;
	cout << "Please input [S] for strength or [C] for cunning. " << endl;
	cin >> cChoice;

	if (cChoice == 'S' || cChoice == 's')
	{
		cout << "The bandits are slaughtered and their camp is burned to the ground. " << endl;
		system("pause");
		system("CLS");
	}
	else if (cChoice == 'C' || cChoice == 'c')
	{
		cout << "You lure the bandits into a trap and capture them, allowing them to be put into prison. " << endl;
		system("pause");
		system("CLS");
	}
	else
	{
		cout << "That is an invalid option. " << endl;
		system("pause");
		system("CLS");
		StoryPart2();
	}


}

/*
The below function is the finale of the story.
The player will be presented with a simple choice to pass the section via strength or cunning route.
This function can be called by the derived classes of Humanoid to access the story, as Humanoid has access to the data inside this class.
The player will input S for strength or C for cunning. Any other letter input will result in an error message and start the story part again, by calling the function in the else section of the if, else if and else statement.
*/

void Story::StoryFinale()
{
	cout << "A lich has raised an army of the dead to attack the village, laying waste to the outskirts and making their way to the centre. " << endl;
	cout << "The village elder advises that there are two ways to stop the lich's schemes. " << endl;
	cout << "Please input [S] for strength or [C] for cunning. " << endl;
	cout << "Will you use strength or cunning to over this task? " << endl;
	cin >> cChoice;

	if (cChoice == 'S' || cChoice == 's')
	{
		cout << "You carve a path through the legions of undead and face the lich head on." << endl;
		cout << "The battle is bloody, but you succeed. " << endl;
		cout << "The villagers hail you as a hero, but are wary of your aggression in the face of threats. " << endl;
		cout << "Thus concludes your story, for now... " << endl;
		system("pause");
		system("CLS");
	}
	else if (cChoice == 'C' || cChoice == 'c')
	{
		cout << "You sneak your way into the lich's lair and locate their phylactery. " << endl;
		cout << "Upon destroying the item, the lich's power wains and they fall to your power. " << endl;
		cout << "The undead legions stop and the villagers are saved. They respect your cunning and look to you as a source of inspiration in future decisions. " << endl;
		cout << "Thus concludes your story, for now... " << endl;
		system("pause");
		system("CLS");
	}
	else
	{
		cout << "That is an invalid option. " << endl;
		system("pause");
		system("CLS");
		StoryFinale();
	}



}