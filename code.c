#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define SUBJECTS 5

// Structure to store student information
struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks[SUBJECTS];
    float percentage;
    char grade;
};

// Function declarations
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
void calculateStudent(struct Student students[], int count);
void sortStudents(struct Student students[], int count);
void saveToFile(struct Student students[], int count);
void loadFromFile(struct Student students[], int *count);

float calculatePercentage(float marks[]);
char calculateGrade(float percentage);

int main() {

    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    // Load previously saved data
    loadFromFile(students, &count);

    while (1) {

        printf("\n======================================\n");
        printf("      STUDENT RECORD MANAGEMENT\n");
        printf("========================================\n");


        printf("1. Add Student\n");
        printf("2. Display all Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Calculate Result\n");
        printf("7. Sort by Percentage\n");
        printf("8. Save Records\n");
        printf("9. Exit\n");

        printf("\nEnter your choice : ");
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
                updateStudent(students, count);
                break;
            
            case 5:
                deleteStudent(students, &count);
                break;
            
            case 6:
                calculateStudent(students, count);
                break;
            
            case 7:
                sortStudents(students, count);
                break;
            
            case 8:
                saveToFile(students, count);
                break;
            
            case 9:
                saveToFile(students, count);
                printf("\nThankyou for using the system!!\n");
                exit(0);

            default:
                printf("\nIncalid choice! Please try again.\n");
        }
    }

    return 0;
}

// 👇 Actual function code goes AFTER main()

void addStudent(struct Student students[], int *count) {

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter Age: ");
    scanf("%d", &students[*count].age);

    (*count)++;

    printf("\nStudent added successfully!\n");
}


void displayStudents(struct Student students[], int count) {

    for (int i = 0; i < count; i++) {

        printf("\nRoll No: %d", students[i].rollNo);
        printf("\nName: %s", students[i].name);
        printf("\nAge: %d\n", students[i].age);
    }
}