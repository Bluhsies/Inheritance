#include "Role.h"

/*
In the constructor, sRole has been defined as "Hero". However, through input in the main by using the derived class objects from Humanoid and the function in Humanoid of RoleName(), this will determine if the character is a damage, caster or tank role.
This is autopopulated and so the player does not choose this themselves, however, the descriptors can be amended through the Humanoid class.
*/


Role::Role()
{
	sRole = "Hero";
}

Role::Role(string sNewRoleIn)
{
	sRole = sNewRoleIn;
}

/*
setRole is where data is taken from the string sFirstRoleIn(), where the different roles are assigned in the Humanoid class. These can be seen in the Humanoid class as role.setRole("Caster") as an example.
Because sRole has been set in the private section, only the Role class can view this directly. However, by using sFirstRoleIn to set the value of sRole, we can change the role from "Hero" to something like "Warrior" and still return the value via getRole.
*/

void Role::setRole(string sFirstRoleIn)
{
	sRole = sFirstRoleIn;
}

/*
In getRole, this will return the value of sRole which was set by sFirstRoleIn (the data taken from the Humanoid class when the role is determined) and is called again by role.getRole() in the Humanoid and derived classes.
*/

string Role::getRole()
{

	return sRole;
}