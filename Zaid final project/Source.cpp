#include<iostream>
#include<fstream>

using namespace std;
#include"User.h"

int main()
{

	//User u("Zaid Riaz", "919806dec");
	//u.ViewProfile();
	//u.ResetPass("919dec");
	//cout << endl<<"After reseting password " << endl;
	//u.ViewProfile();


	ifstream rdr("user.txt");
	ofstream wrt("signedup.txt");


	string name;
	string pass;

	rdr >> name;
	rdr >> pass;
	wrt << name;
	wrt << "\n";
	wrt << pass;

	cout << name << "      :      " << pass;

	return 0;
}