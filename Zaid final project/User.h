#pragma once



#include<iostream>
#include<string>
#include"Task.h"
using namespace std;



class User
{
private:
	string name;
	string password;
	Task* tasks;

public:

	User();
	User(string name);
	User(string name, string password);
	void ResetPass(string newpassword);
	void ViewProfile();

};

