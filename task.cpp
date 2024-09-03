#include "task.h"
#include <iostream>
using namespace std;

task::task()
    : id(0), title(""), description(""), dueDate(""), status("\n task is in progress...\n"), recurring(false), recurrenceInterval(""), priority(false) {
    // Default constructor body
}

task::task(int id, string title, string description, string dueDate, string status, bool recurring, string recurrenceInterval, bool priority)
    : id(id), title(title), description(description), dueDate(dueDate), status(status), recurring(recurring), recurrenceInterval(recurrenceInterval), priority(priority) {
    // Constructor body with parameters
}

int task::getId() {
    return id; 
}
void task::setDetails(string newTitle, string newDescription, string newDueDate) {
    title = newTitle;
    description = newDescription;
    dueDate = newDueDate;
}

void task::setPriority(bool newPriority) { 
    priority = newPriority;
}
//Added a priority function which allows users to set which one has high priorities to help them navigate their tasks
void task::displayDetails() {
    cout << "\nID: " << id << "\nTitle: " << title << "\nDescription: " << description << "\nDue Date: " << dueDate
        << "\nStatus: " << status << "\nPriority: " << (priority ? "High" : "Normal") << endl; 
}

void task::markCompleted() {
    status = "\nCongrats you completed your task! Good work! \n";
}
