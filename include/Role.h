#pragma once

#include <iostream>
#include <string>

using namespace std;

/*
In the below class, the variable sRole has been placed into the private section, meaning that only the class Role can access this data directly.
There is also the constructor of Role();, Role(string sNewRoleIn) and two functions, void setRole and string getRole.
*/

class Role
{
private:

	string sRole;


public:

	Role();
	Role(string sNewRoleIn);

	void setRole(string sLastRoleIn);
	
	string getRole();

};