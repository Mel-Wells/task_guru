#pragma once
#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include <vector>
#include "task.h"

class TaskManager {
private:
    vector<task*> tasks;  // A vector of pointers to tasks, this type of ADT is useful for task management. 

public:
    void addTask(task* newTask);
    void removeTask(int id);
    void displayAllTasks() const;
    task* findTaskById(int id) const;
};

#endif


