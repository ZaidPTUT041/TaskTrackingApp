#include<iostream>

using namespace std;
#include"User.h"

int main()
{

	User u("Zaid Riaz", "919806dec");
	u.ViewProfile();
	u.ResetPass("919dec");
	cout << endl<<"After reseting password " << endl;
	u.ViewProfile();
	return 0;
}