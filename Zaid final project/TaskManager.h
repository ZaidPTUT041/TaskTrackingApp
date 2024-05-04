#pragma once
#include"User.h"


class TaskManager
{
private:
	User* users;
	int sizeofUsers;

public:

	TaskManager();
	TaskManager(User* users, int size);
	void AddUser(User& user);
	void DeleteUser(User& user);
	void HandleUserTasks();
	void ViewAllTasks();
	bool CreateAccount();
	bool Login();
};