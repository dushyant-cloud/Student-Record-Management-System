#include <stdio.h>

#define MAX_STUDENTS 100
#define SUBJECTS 5

//Structure for storing student information

struct Student {
    int rollNo;
    char name[50];
    int age;

    float marks[SUBJECTS];
    float total;
    float percentage;
    char grade;
};

//Function Declarations
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
void calculateResult(struct Student students[], int count);
void sortStudents(struct Student students[], int count);

//Calculate Grade
char getGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else if (percentage >= 50) {
        return 'E';
    } else {
        return 'F';
    }
}


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
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Calculate Result\n");
        printf("7. Sort Students\n");
        printf("8. Exit\n");

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
                updateStudent(students, count);
                break;

            case 5:
                deleteStudent(students, &count);
                break;
            
            case 6:
                calculateResult(students, count);
                break;
            
            case 7:
                sortStudents(students, count);
                break;

            case 8:
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

//===============================
// UPDATE STUDENT
//===============================

void updateStudent(struct Student students[], int count) {

    int rollNo;
    int found = 0;

    if (count == 0) {
        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== UPDATE STUDENT ==========\n");

    printf("Enter Roll Number to update: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {

        if (students[i].rollNo == rollNo) {

            printf("\nStudent Found!\n");
        
            printf("Current Name : %s\n", students[i].name);
            printf("Enter New name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Current Age  : %d\n", students[i].age);
            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            found = 1;

            printf("\nStudent updated successfully!\n");
        
            break;
        }
    }

    if (found == 0) {
        printf("\nStudent with Roll Number %d not found!\n", rollNo);
    }
}

// ========================================
// DELETE STUDENT
// ========================================

void deleteStudent(struct Student students[], int *count) {

    int rollNo;
    int found = 0;

    if (*count == 0) {
        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== DELETE STUDENT ==========\n");

    printf("Enter Roll Number of student to delete: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < *count; i++) {

        if (students[i].rollNo == rollNo) {

            found = 1;

            // Shift all students after the deleted student
            // one position to the left
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }

            (*count)--;

            printf("\nStudent deleted successfully! ✅\n");

            break;
        }
    }

    if (found == 0) {
        printf("\nStudent with Roll Number %d not found.\n", rollNo);
    }
}

// FEATURE 1: CALCULATE RESULT
void calculateResult(struct Student students[], int count) {

    int rollNo;

    if (count == 0) {
        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== STUDENT RESULT ==========\n");

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {

        if (students[i].rollNo == rollNo) {

            printf("\n========== RESULT ==========\n");

            printf("Roll Number : %d\n",
                   students[i].rollNo);

            printf("Name        : %s\n",
                   students[i].name);

            printf("Total Marks : %.2f / 500\n",
                   students[i].total);

            printf("Percentage  : %.2f%%\n",
                   students[i].percentage);

            printf("Grade       : %c\n",
                   students[i].grade);

            if (students[i].percentage >= 40)
                printf("Status      : PASS ✅\n");
            else
                printf("Status      : FAIL ❌\n");

            return;
        }
    }

    printf("\nStudent not found.\n");
}


// FEATURE 2: SORT BY PERCENTAGE
void sortStudents(struct Student students[], int count) {

    if (count == 0) {
        printf("\nNo students found!\n");
        return;
    }

    struct Student temp;

    // Bubble Sort - highest percentage first
    for (int i = 0; i < count - 1; i++) {

        for (int j = 0; j < count - i - 1; j++) {

            if (students[j].percentage <
                students[j + 1].percentage) {

                temp = students[j];

                students[j] = students[j + 1];

                students[j + 1] = temp;
            }
        }
    }

    printf("\n========== RANKING ==========\n");

    for (int i = 0; i < count; i++) {

        printf("\nRank %d\n", i + 1);
        printf("-------------------------\n");

        printf("Roll Number : %d\n",
               students[i].rollNo);

        printf("Name        : %s\n",
               students[i].name);

        printf("Percentage  : %.2f%%\n",
               students[i].percentage);

        printf("Grade       : %c\n",
               students[i].grade);
    }

    printf("\nStudents sorted successfully! ✅\n");
} 