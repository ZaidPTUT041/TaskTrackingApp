#include"User.h"





User::User()
{
	this->name = {};
	this->password = {};

}


User::User(string name)
{
	this->name = name;
	this->password = {};

}




User::User(string name, string password)
{
	this->name = name;
	this->password = password;

}

void User::ViewProfile()
{
	cout << "Name : " << name << endl;
	cout << "Password : " << password << endl;
}

void User::ResetPass(string new_password)
{
	this->password = new_password;
}