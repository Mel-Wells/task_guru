#include "TaskManager.h"
#include <iostream>

void TaskManager::addTask(task* newTask) {
    tasks.push_back(newTask);
    cout << "\nTask added successfully.\n";
}

void TaskManager::removeTask(int id) {
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if ((*it)->getId() == id) { 
            delete* it;  
            tasks.erase(it);
            cout << "\nTask removed successfully.\n";
            return;
        } //Allowing user to remove tasks helps to declutter and keep the program organized for the user. 
    }
    cout << "\nTask not found.\n";
}

void TaskManager::displayAllTasks() const {
    if (tasks.empty()) {
        cout << "\nNo tasks available.\n\n"; //This will output if there are no added tasks
        return;
    }

    for (const auto& t : tasks) {
        t->displayDetails();
        cout << "\n---------------------------------\n";
    }
}

task* TaskManager::findTaskById(int id) const {
    for (const auto& t : tasks) {
        if (t->getId() == id) {
            return t;
        }
    }
    return nullptr;  // Return nullptr if task not found
}
