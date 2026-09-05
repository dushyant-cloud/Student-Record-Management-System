#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100
#define SUBJECTS 5
#define FILE_NAME "students.dat"

struct Student {
    int rollNo;
    char name[50];
    int age;

    float marks[SUBJECTS];
    float total;
    float percentage;
    char grade;
};

// Function declarations
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
void calculateResult(struct Student students[], int count);
void sortStudents(struct Student students[], int count);

void saveStudents(struct Student students[], int count);
void loadStudents(struct Student students[], int *count);

char getGrade(float percentage);
int rollNumberExists(struct Student students[], int count, int rollNo);


// MAIN FUNCTION
int main() {

    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    // Load saved students when program starts
    loadStudents(students, &count);

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
        printf("7. Sort by Percentage\n");
        printf("8. Save Records\n");
        printf("9. Exit\n");

        printf("\nEnter your choice: ");

        // Input validation for menu
        if (scanf("%d", &choice) != 1) {

            printf("\nInvalid input! Please enter a number.\n");

            while (getchar() != '\n');

            continue;
        }

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
                saveStudents(students, count);
                break;

            case 9:
                saveStudents(students, count);
                printf("\nRecords saved. Exiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Enter 1-9.\n");
        }
    }

    return 0;
}


// GET GRADE
char getGrade(float percentage) {

    if (percentage >= 90)
        return 'A';

    else if (percentage >= 80)
        return 'B';

    else if (percentage >= 70)
        return 'C';

    else if (percentage >= 60)
        return 'D';

    else if (percentage >= 50)
        return 'E';

    else
        return 'F';
}


// CHECK DUPLICATE ROLL NUMBER
int rollNumberExists(struct Student students[], int count, int rollNo) {

    for (int i = 0; i < count; i++) {

        if (students[i].rollNo == rollNo)
            return 1;
    }

    return 0;
}


// ADD STUDENT
void addStudent(struct Student students[], int *count) {

    if (*count >= MAX_STUDENTS) {

        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\n========== ADD STUDENT ==========\n");

    // Roll number validation
    while (1) {

        printf("Enter Roll Number: ");

        if (scanf("%d", &students[*count].rollNo) != 1) {

            printf("Invalid input! Enter a number.\n");

            while (getchar() != '\n');

            continue;
        }

        if (students[*count].rollNo <= 0) {

            printf("Roll number must be positive.\n");
            continue;
        }

        if (rollNumberExists(
                students,
                *count,
                students[*count].rollNo)) {

            printf("Roll number already exists!\n");
            continue;
        }

        break;
    }


    // Name
    printf("Enter Name: ");
    scanf(" %[^\n]", students[*count].name);


    // Age validation
    while (1) {

        printf("Enter Age: ");

        if (scanf("%d", &students[*count].age) != 1) {

            printf("Invalid input! Enter a number.\n");

            while (getchar() != '\n');

            continue;
        }

        if (students[*count].age < 5 ||
            students[*count].age > 100) {

            printf("Enter a valid age between 5 and 100.\n");
            continue;
        }

        break;
    }


    // Marks
    students[*count].total = 0;

    printf("\nEnter marks for 5 subjects:\n");

    for (int i = 0; i < SUBJECTS; i++) {

        while (1) {

            printf("Subject %d: ", i + 1);

            if (scanf("%f",
                      &students[*count].marks[i]) != 1) {

                printf("Invalid input! Enter a number.\n");

                while (getchar() != '\n');

                continue;
            }

            if (students[*count].marks[i] < 0 ||
                students[*count].marks[i] > 100) {

                printf("Marks must be between 0 and 100.\n");
                continue;
            }

            break;
        }

        students[*count].total +=
            students[*count].marks[i];
    }


    students[*count].percentage =
        students[*count].total / SUBJECTS;

    students[*count].grade =
        getGrade(students[*count].percentage);

    (*count)++;

    printf("\nStudent added successfully! ✅\n");

    // Automatically save
    saveStudents(students, *count);
}


// DISPLAY STUDENTS
void displayStudents(struct Student students[], int count) {

    if (count == 0) {

        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== STUDENT LIST ==========\n");

    for (int i = 0; i < count; i++) {

        printf("\nStudent %d\n", i + 1);
        printf("-------------------------\n");

        printf("Roll Number : %d\n",
               students[i].rollNo);

        printf("Name        : %s\n",
               students[i].name);

        printf("Age         : %d\n",
               students[i].age);

        printf("Marks       : ");

        for (int j = 0; j < SUBJECTS; j++) {

            printf("%.1f ",
                   students[i].marks[j]);
        }

        printf("\nTotal       : %.2f / 500\n",
               students[i].total);

        printf("Percentage  : %.2f%%\n",
               students[i].percentage);

        printf("Grade       : %c\n",
               students[i].grade);
    }
}


// SEARCH STUDENT
void searchStudent(struct Student students[], int count) {

    int rollNo;

    if (count == 0) {

        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== SEARCH STUDENT ==========\n");

    printf("Enter Roll Number: ");

    if (scanf("%d", &rollNo) != 1) {

        printf("Invalid input!\n");

        while (getchar() != '\n');

        return;
    }

    for (int i = 0; i < count; i++) {

        if (students[i].rollNo == rollNo) {

            printf("\nStudent Found! ✅\n");
            printf("-------------------------\n");

            printf("Roll Number : %d\n",
                   students[i].rollNo);

            printf("Name        : %s\n",
                   students[i].name);

            printf("Age         : %d\n",
                   students[i].age);

            printf("Total       : %.2f / 500\n",
                   students[i].total);

            printf("Percentage  : %.2f%%\n",
                   students[i].percentage);

            printf("Grade       : %c\n",
                   students[i].grade);

            return;
        }
    }

    printf("\nStudent not found.\n");
}


// UPDATE STUDENT
void updateStudent(struct Student students[], int count) {

    int rollNo;

    if (count == 0) {

        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== UPDATE STUDENT ==========\n");

    printf("Enter Roll Number: ");

    if (scanf("%d", &rollNo) != 1) {

        printf("Invalid input!\n");

        while (getchar() != '\n');

        return;
    }

    for (int i = 0; i < count; i++) {

        if (students[i].rollNo == rollNo) {

            printf("\nStudent Found! ✅\n");

            printf("Current Name: %s\n",
                   students[i].name);

            printf("Enter New Name: ");
            scanf(" %[^\n]", students[i].name);


            while (1) {

                printf("Enter New Age: ");

                if (scanf("%d",
                          &students[i].age) != 1) {

                    printf("Invalid input!\n");

                    while (getchar() != '\n');

                    continue;
                }

                if (students[i].age < 5 ||
                    students[i].age > 100) {

                    printf("Invalid age!\n");
                    continue;
                }

                break;
            }


            students[i].total = 0;

            printf("\nEnter new marks:\n");

            for (int j = 0; j < SUBJECTS; j++) {

                while (1) {

                    printf("Subject %d: ", j + 1);

                    if (scanf("%f",
                              &students[i].marks[j]) != 1) {

                        printf("Invalid input!\n");

                        while (getchar() != '\n');

                        continue;
                    }

                    if (students[i].marks[j] < 0 ||
                        students[i].marks[j] > 100) {

                        printf("Marks must be 0-100.\n");
                        continue;
                    }

                    break;
                }

                students[i].total +=
                    students[i].marks[j];
            }


            students[i].percentage =
                students[i].total / SUBJECTS;

            students[i].grade =
                getGrade(students[i].percentage);

            printf("\nStudent updated successfully! ✅\n");

            saveStudents(students, count);

            return;
        }
    }

    printf("\nStudent not found.\n");
}


// DELETE STUDENT
void deleteStudent(struct Student students[], int *count) {

    int rollNo;

    if (*count == 0) {

        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== DELETE STUDENT ==========\n");

    printf("Enter Roll Number: ");

    if (scanf("%d", &rollNo) != 1) {

        printf("Invalid input!\n");

        while (getchar() != '\n');

        return;
    }

    for (int i = 0; i < *count; i++) {

        if (students[i].rollNo == rollNo) {

            for (int j = i; j < *count - 1; j++) {

                students[j] = students[j + 1];
            }

            (*count)--;

            printf("\nStudent deleted successfully! ✅\n");

            saveStudents(students, *count);

            return;
        }
    }

    printf("\nStudent not found.\n");
}


// CALCULATE RESULT
void calculateResult(struct Student students[], int count) {

    int rollNo;

    if (count == 0) {

        printf("\nNo students found!\n");
        return;
    }

    printf("\n========== STUDENT RESULT ==========\n");

    printf("Enter Roll Number: ");

    if (scanf("%d", &rollNo) != 1) {

        printf("Invalid input!\n");

        while (getchar() != '\n');

        return;
    }

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


// SORT STUDENTS
void sortStudents(struct Student students[], int count) {

    if (count == 0) {

        printf("\nNo students found!\n");
        return;
    }

    struct Student temp;

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


// SAVE STUDENTS TO FILE
void saveStudents(struct Student students[], int count) {

    FILE *file;

    file = fopen(FILE_NAME, "wb");

    if (file == NULL) {

        printf("\nError: Could not save records!\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, file);

    fwrite(students,
           sizeof(struct Student),
           count,
           file);

    fclose(file);

    printf("\nRecords saved successfully! 💾\n");
}


// LOAD STUDENTS FROM FILE
void loadStudents(struct Student students[], int *count) {

    FILE *file;

    file = fopen(FILE_NAME, "rb");

    if (file == NULL) {

        // File doesn't exist yet
        return;
    }

    fread(count, sizeof(int), 1, file);

    if (*count > MAX_STUDENTS ||
        *count < 0) {

        *count = 0;

        fclose(file);

        printf("\nInvalid data file!\n");

        return;
    }

    fread(students,
          sizeof(struct Student),
          *count,
          file);

    fclose(file);

    printf("\n%d student record(s) loaded. 📂\n",
           *count);
}