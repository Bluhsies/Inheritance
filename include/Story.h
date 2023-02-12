#pragma once

#include <iostream>

using namespace std;

/*
The below class Story contains only public, so that each of the derived classes (Rogue, Mage, Warrior and Assassin) can access the story aspect of the program.
There are 3 prototypes set up for the story, the constructor Story(); and the char cChoice which has been implemented in Story.cpp.
*/

class Story
{

public:

	char cChoice;

	Story();

	void StoryPart1();
	void StoryPart2();
	void StoryFinale();

};