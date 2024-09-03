#include <iostream>
#include <thread>
#include <chrono>
#include "TaskManager.h"
#include "FocusMode.h"

using namespace std;
//Function to display main menu to user
void displayMenu() {
    cout << "\nWelcome to Task Guru! An app not only for maintaining and staying on top of tasks, but for aiding in creating a more focused you.\n\n";
    cout << "------ Task Guru Menu ------\n";
    cout << "1. Add a Task\n";
    cout << "2. Remove a Task\n";
    cout << "3. Display All Tasks\n";
    cout << "4. Mark Task as Complete\n";
    cout << "5. Enter Focus Mode (completely optional!)\n";
    cout << "6. Exit\n";
    cout << "------------------------------\n"; 
    cout << "\nPlease choose an option(1-7): ";
}
//Productivity tracker was removed as I felt it served no purpose in this program. If anything, I felt it would unmotivate the user if they saw how long they took on a task. 
//Function was created to handle focus mode. Made outside of int main because I felt the program would be more efficient this way and for me to use switch cases. 
void handleFocusMode() {
    FocusMode focus;
    int choice;
    cout << "\nAre you sure you want to have a focus session? No pressure! (1 for Yes, 0 for No): ";
    cin >> choice;
    //felt binary would be useful in this instance as 0 means false (off) and 1 means true (on)
    if (choice == 1) {
        int duration;
        cout << "Great choice! How long would you like to focus?\n Remember: No matter how small it may seem, focusing for a small amount of time is still a big achivement!\n";
        cout << "1. 5 minutes\n";
        cout << "2. 10 minutes\n";
        cout << "3. 15 minutes\n";
        cout << "4. 20 minutes\n";
        cout << "\nEnter your choice: ";
        cin >> duration;

        switch (duration) {
        case 1:
            focus.startFocusSession(5);
            break;
        case 2:
            focus.startFocusSession(10);
            break;
        case 3:
            focus.startFocusSession(15);
            break;
        case 4: 
            focus.startFocusSession(20); 
            break;
        default:
            cout << "\n choice! Focus session canceled.\n";
            return;
        }

        focus.rewardUser();
    }
    else {
        cout << "\nNo problem! Remember to take breaks and stay refreshed. You got this!\n\n";
    }
}

int main() {
    TaskManager manager; 
    FocusMode focus;

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string title, description, dueDate;
            bool recurring, priority;
            string recurrenceInterval;

            cout << "\nEnter Task ID: ";
            cin >> id;
            cin.ignore();

            cout << "\nEnter Task Title: ";
            getline(cin, title);

            cout << "\n Task Description: ";
            getline(cin, description);

            cout << "\nEnter Due Date: ";
            getline(cin, dueDate);

            cout << "\n Is this task recurring? (0 for No, 1 for Yes): ";
            cin >> recurring;
            cin.ignore();

            if (recurring) {
                cout << "\nEnter Recurrence Interval (e.g., 'Daily', 'Weekly'): ";
                getline(cin, recurrenceInterval);
            }

            cout << "\nIs this task a priority? (0 for No, 1 for Yes): ";
            cin >> priority;

            task* newTask = new task(id, title, description, dueDate, "\nThis task is in progress...\n", recurring, recurrenceInterval, priority);
            manager.addTask(newTask);
            // Creates a new task object and adds it to the task manager
            cout << "\nTask added! Lets get it!\n";
            break;
        }
        case 2: {
            int id;
            cout << "\nEnter the Task ID to remove: ";
            cin >> id;
            manager.removeTask(id);
            break;
        }
        case 3: {
            manager.displayAllTasks();
            break;
        
 
        }
        case 4: { 
            int id;
            cout << "\nEnter the Task ID to mark as completed: ";
            cin >> id;

            task* t = manager.findTaskById(id);
            if (t) {
                t->markCompleted();
                cout << "\nTask marked as completed! Well done!\n";
            }
            else {
                cout << "\nTask not found.\n";
            }
            break;
        }
        case 5:
            handleFocusMode();
            break;

        case 6:
            cout << "\nThank you for using Task Guru! Remember, every small step counts towards your goals!\n\n";
            break;
        default:
            cout << "\n option. Please choose again.\n\n";
        }

    } while (choice != 6); //This will loop until the user enters 6 to exit it. 

    return 0;
}
