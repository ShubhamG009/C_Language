#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store student information
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Function to add a new student record
void addStudent(struct Student students[], int *count) {
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].roll_number);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
}

// Function to display all student records
void displayStudents(struct Student students[], int count) {
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("---------------------------\n");
    }
}

int main() {
    struct Student students[100]; // Store up to 100 student records
    int count = 0; // Current number of student records

    while (1) {
        printf("\n--- Student Information System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    addStudent(students, &count);
                    printf("Student added successfully!\n");
                } else {
                    printf("Maximum number of students reached!\n");
                }
                break;
            case 2:
                if (count > 0) {
                    displayStudents(students, count);
                } else {
                    printf("No student records to display!\n");
                }
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
