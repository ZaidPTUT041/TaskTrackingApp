


#include"Task.h"

Task::Task()
{
	this->title = "";
	this->description = "";
	this->dueDate = { 0,0,0 };
	this->IsCompleted = false;
}
Task::Task(string title, string desc)
{
	this->title = title;
	this->description = desc;
	this->dueDate = { 0,0,0 };
	this->IsCompleted = false;
}
void Task::createTask(string title, string desc, Date  dueDate)
{
	this->title = "";
	this->description = "";
	this->dueDate = { 0,0,0 };
	this->IsCompleted = false;
}
void Task::EditTask(string title, Date dueDate)
{

}
void Task::DeleteTask(string title, Date dueDate)
{

}
void Task::ListTask()
{

}