#pragma once
#include<string>
#include<iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};


class Task
{
private:

	string title;
	string description;
	Date dueDate;
	bool IsCompleted;

public:

	Task();
	Task(string title, string desc);
	void createTask(string title, string desc, Date  dueDate);
	void EditTask(string title, Date dueDate);
	void DeleteTask(string title, Date dueDate);
	void ListTask();
};