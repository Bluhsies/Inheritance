#include "Assassin.h"

/*
The constructor provides a value to the integers smokeBombBonus, iHealthTotal and total2 which are used within functions in the Assassin class.
*/

Assassin::Assassin()
{

    smokeBombBonus = 1;

    iHealthTotal = 0;

    total2 = 0;
}

/*
In the below function, the virtual function which is derived from Humanoid has been given a message to print out when the function is called as part of the main. This will differ from other class() functions and is unique to the Assassin class.
*/

void Assassin::Class()
{

	cout << "You are an assassin, a sub-class of the rogue. You are a silent killer of the night. " << endl;

}

/*
Within the addBonusSmoke function, this will call t he object smokeyness.smokeDepletion from the Rogue class and will print it to the user's screen when the addBonusSmoke function is called in the main.
This function uses multilevel inheritance, as it will take information from the Rogue class, which takes information from the Inventory class, accessed via the Humanoid class. Rather than just from one adjacent class to another.
The function will then calculate a new total from smoke[0] + smokeBombBonus (1) and provide a second total (total2) from taking the value stored in smoke[1] from the new total value created.
*/

void Assassin::addBonusSmoke()
{
    smokeyness.smokeDepletion();
    
    cout << "Now that you are an assassin, you gain one additional smoke bomb. " << endl;
    total = smoke[0] + smokeBombBonus;
    cout << "You have " << total << " smoke bombs. " << endl;
    total2 = total - smoke[1];

}

/*
showSmoke will take the value stored within smoke[1], which is taken from the Inventory class and print these to the screen, as well as the value of total2 taken from the addBonusSmoke function.
*/

void Assassin::showSmoke()
{

    cout << "You need to use " << smoke[1] << " smoke bombs to complete the mission. " << endl;
    cout << "Number of smoke bombs used: " << smoke[1] << endl;
    cout << "The number of smoke bombs remaining is: " << total2 << endl;

}

/*
The below Health classes are derived from the Humanoid and Rogue class, but are overloaded to provide a different value (in this case iAHealth) but still keep the original function name of Health.
These will print out the message each time it is called as part of the Assassin object in the main, which also setting the values for each integer in the main.
*/

void Assassin::Health(int iAHealth)
{

    cout << "At level one, your health is: " << iAHealth << endl;

}

void Assassin::Health(int iAHealth, int iAHealth2)
{

    cout << "Congratulations! You're now level 2! Your health is now: " << iAHealth + iAHealth2 << endl;

}

void Assassin::Health(int iAHealth, int iAHealth2, int iHealthBonus)
{

    iHealthTotal = iAHealth + iAHealth2 + iHealthBonus;

    cout << "Due to being an assassin, you gain 30 bonus health. Your new health total is: " << iHealthTotal << endl;

}


