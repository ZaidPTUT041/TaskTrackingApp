#pragma once



#include<iostream>
#include<string>
using namespace std;



class User
{
private:
	string name;
	string password;

public:

	User();
	User(string name);
	User(string name, string password);
	void ResetPass(string newpassword);
	void ViewProfile();

};

