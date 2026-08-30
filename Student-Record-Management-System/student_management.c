#include <stdio.h>

#define MAX_STUDENTS 100

//Structure for storing student information

struct Student {
    int rollNo;
    char name[50];
    int age;
};

//Function Declarations
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);

int main() {

    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {

        printf("\n========================================\n");
        printf("       STUDENT RECORD MANAGEMENT\n");
        printf("========================================\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addStudent(students, &count);
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}


// ================================
// ADD STUDENT
// ================================

void addStudent(struct Student students[], int *count) {

    if (*count >= MAX_STUDENTS) {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter Age: ");
    scanf("%d", &students[*count].age);

    (*count)++;

    printf("\nStudent added successfully!\n");
}


// ================================
// DISPLAY STUDENTS
// ================================

void displayStudents(struct Student students[], int count) {

    if (count == 0) {
        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== STUDENT LIST ==========\n");

    for (int i = 0; i < count; i++) {

        printf("\nStudent %d\n", i + 1);
        printf("--------------------------\n");
        
        
        printf("Roll Number : %d\n", students[i].rollNo);
        printf("Name        : %s\n", students[i].name);
        printf("Age         : %d\n", students[i].age);
    }
}

// ================================
// SEARCH STUDENT
// ================================

void searchStudent(struct Student students[], int count) {

    int rollNo;
    int found = 0;

    if (count == 0) {
        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== SEARCH STUDENT ==========\n");

    printf("Enter Roll Number to search: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {

        if (students[i].rollNo == rollNo) {

            printf("\nStudent Found!\n");
            printf("--------------------------\n");
            printf("Roll Number : %d\n", students[i].rollNo);
            printf("Name        : %s\n", students[i].name);
            printf("Age         : %d\n", students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent with Roll Number %d not found!\n", rollNo);
    }
}