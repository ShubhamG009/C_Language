#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a task
struct Task {
    char description[100];
    int priority;
};

// Function to add a task to the to-do list
void addTask(struct Task tasks[], int *taskCount) {
    if (*taskCount >= 10) {
        printf("Sorry, the to-do list is full!\n");
        return;
    }

    struct Task newTask;
    printf("Enter task description: ");
    scanf(" %[^\n]s", newTask.description);
    printf("Enter task priority (1-10): ");
    scanf("%d", &newTask.priority);

    if (newTask.priority < 1 || newTask.priority > 10) {
        printf("Invalid priority. Priority should be between 1 and 10.\n");
        return;
    }

    tasks[*taskCount] = newTask;
    (*taskCount)++;
    printf("Task added to the to-do list.\n");
}

// Function to display the to-do list
void displayTasks(struct Task tasks[], int taskCount) {
    if (taskCount == 0) {
        printf("The to-do list is empty.\n");
        return;
    }

    printf("To-Do List:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s (Priority: %d)\n", i + 1, tasks[i].description, tasks[i].priority);
    }
}

int main() {
    struct Task tasks[10];
    int taskCount = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                displayTasks(tasks, taskCount);
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
