//create task ,modify task, delete task,update task using switch case
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\nTask Manager Menu:\n";
        cout << "1. Create Task\n";
        cout << "2. Modify Task\n";
        cout << "3. Delete Task\n";
        cout << "4. Update Task\n";
        cout << "5. Display Tasks\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); 
                string newTask;
                cout << "Enter the new task: ";
                getline(cin, newTask);
                tasks.push_back(newTask);
                cout << "Task added successfully.\n";
                break;
            }
            case 2: {
                displayTasks(tasks);
                int taskIndex;
                cout << "Enter the task number to modify: ";
                cin >> taskIndex;
                if (taskIndex > 0 && taskIndex <= tasks.size()) {
                    cin.ignore();
                    cout << "Enter the modified task: ";
                    string modifiedTask;
                    getline(cin, modifiedTask);
                    tasks[taskIndex - 1] = modifiedTask;
                    cout << "Task modified successfully.\n";
                } else {
                    cout << "Invalid task number.\n";
                }
                break;
            }
            case 3: {
                displayTasks(tasks);
                int taskIndex;
                cout << "Enter the task number to delete: ";
                cin >> taskIndex;
                if (taskIndex > 0 && taskIndex <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskIndex - 1);
                    cout << "Task deleted successfully.\n";
                } else {
                    cout << "Invalid task number.\n";
                }
                break;
            }
            case 4: {
                displayTasks(tasks);
                int taskIndex;
                cout << "Enter the task number to update: ";
                cin >> taskIndex;
                if (taskIndex > 0 && taskIndex <= tasks.size()) {
                    cin.ignore();
                    cout << "Enter the updated task: ";
                    string updatedTask;
                    getline(cin, updatedTask);
                    tasks[taskIndex - 1] = updatedTask;
                    cout << "Task updated successfully.\n";
                } else {
                    cout << "Invalid task number.\n";
                }
                break;
            }
            case 5: {
                displayTasks(tasks);
                break;
            }
            case 0: {
                cout << "Exiting Task Manager. Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
