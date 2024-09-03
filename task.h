#pragma once
#ifndef TASK_H
#define TASK_H 
#include <string>
using namespace std;

class task
{
private:
	int id;
	string title;
	string description;
	string dueDate;
	string status;
	bool recurring;
	string recurrenceInterval;
	bool priority;

public:
	task(); //Main constructor 
	task(int id, string title, string description, string dueDate, string status, bool recurring, string recurrenceInterval, bool priority); //Constructor set with parameters
	//Having these two constructors fixed an error that was being given.

	int getId();
	void setDetails(string newTitle, string newDescription, string newDueDate);
	void setPriority(bool newPriority);
	void displayDetails();
	void markCompleted();
};
#endif

