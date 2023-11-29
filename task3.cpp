
#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        Task newTask{ description, false };
        tasks.push_back(newTask);
        std::cout << "Task added successfully!" << std::endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks available!" << std::endl;
            return;
        }

        std::cout << "Tasks:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].description;
            if (tasks[i].completed)
                std::cout << " - Completed";
            std::cout << std::endl;
        }
    }

    void markTaskCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            std::cout << "Task marked as completed!" << std::endl;
        } else {
            std::cout << "Invalid task index!" << std::endl;
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            std::cout << "Task removed successfully!" << std::endl;
        } else {
            std::cout << "Invalid task index!" << std::endl;
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    do {
        std::cout << "\n------ TO-DO LIST MANAGER ------" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Mark Task as Completed" << std::endl;
        std::cout << "4. Remove Task" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore();
                std::cout << "Enter task description: ";
                std::string description;
                std::getline(std::cin, description);
                todoList.addTask(description);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                int index;
                std::cout << "Enter task index to mark as completed: ";
                std::cin >> index;
                todoList.markTaskCompleted(index);
                break;
            }
            case 4: {
                int index;
                std::cout << "Enter task index to remove: ";
                std::cin >> index;
                todoList.removeTask(index);
                break;
            }
            case 0:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

