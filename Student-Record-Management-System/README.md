# Student Record Management System

A beginner-friendly **Student Record Management System built using C**.

This project allows users to add, manage, search, update, delete, and analyze student records through a console-based interface.

The project is designed to practice fundamental C programming concepts such as **structures, arrays, functions, loops, conditional statements, file handling, sorting, string handling, statistics, attendance management, and input validation**.

---

## 🚀 Features

* ➕ Add Student
* 📋 Display All Students
* 🔍 Search Student by Roll Number
* ✏️ Update Student Records
* 🗑️ Delete Individual Student
* 📊 Calculate Student Result
* 📈 Sort Students by Percentage
* 📊 Class Statistics
* 🔎 Search Student by Name
* 🔤 Case-Insensitive Name Search
* 🏆 Student Ranking
* 🥇 Tied Student Ranking
* ✅ Pass/Fail Summary
* 🗑️ Delete All Records with Confirmation
* 📚 Subject-Wise Statistics
* 📅 Student Attendance Management
* ✏️ Update Attendance
* 📋 Attendance Report
* 💾 Save Records
* 🚪 Exit Confirmation
* 📁 Automatic Data Loading at Startup
* 🛡️ Input Validation

---

## 📌 Student Information Stored

Each student record contains:

### Basic Information

* Roll Number
* Name
* Age

### Academic Information

* Marks in 5 Subjects
* Total Marks
* Percentage
* Grade

### Attendance Information

* Total Classes
* Classes Attended
* Attendance Percentage

---

## 🏆 Grading System

| Percentage | Grade |
| ---------- | ----- |
| 90% – 100% | A     |
| 80% – 89%  | B     |
| 70% – 79%  | C     |
| 60% – 69%  | D     |
| 50% – 59%  | E     |
| Below 50%  | F     |

The project uses **40% as the passing percentage**.

---

## 📊 Class Statistics

The Class Statistics feature displays:

* Total number of students
* Class average percentage
* Highest percentage
* Student with the highest percentage
* Lowest percentage
* Student with the lowest percentage

---

## 🔎 Search Student by Name

Students can be searched using their name.

The search supports **partial matching**.

For example:

```text
Search: rah
```

can find:

```text
Rahul Sharma
Rahul Verma
```

---

## 🔤 Case-Insensitive Name Search

The name search is case-insensitive.

For example:

```text
rahul
RAHUL
Rahul
RaHuL
```

can all find the same student.

---

## 🏆 Student Ranking

The Student Ranking feature displays students according to their percentage in **descending order**.

Example:

```text
Rank   Roll No    Name                      Percentage
-------------------------------------------------------
1      103        Rahul                     95.00%
2      101        Aman                      90.00%
3      102        Rohit                     82.00%
```

The ranking uses a temporary copy of the records so that viewing rankings does not permanently change the original record order.

---

## 🥇 Tied Student Ranking

Students with the same percentage receive the same rank.

Example:

```text
Percentage
95%
90%
90%
80%
80%
70%
```

Results in:

```text
Rank
1
2
2
4
4
6
```

This uses **competition ranking**.

---

## 📚 Subject-Wise Statistics

The Subject-Wise Statistics feature analyzes each subject independently.

For every subject, the program displays:

* Average marks
* Highest marks
* Highest-scoring student
* Lowest marks
* Lowest-scoring student

Example:

```text
---------- Subject 1 ----------
Average Marks : 78.50
Highest Marks : 95.00
Highest Scorer: Rahul (Roll No: 101)
Lowest Marks  : 61.00
Lowest Scorer : Aman (Roll No: 102)
```

---

## 📅 Attendance Management

The Attendance Management feature stores attendance information for every student.

The system records:

* Total number of classes
* Classes attended
* Attendance percentage

The percentage is calculated using:

```text
Attendance Percentage =
(Classes Attended / Total Classes) × 100
```

Example:

```text
Total Classes     : 100
Classes Attended  : 85
Attendance        : 85.00%
```

---

## ✏️ Update Attendance

Attendance can be updated using the student's Roll Number.

The program validates that:

* Total classes cannot be negative.
* Attended classes cannot be negative.
* Attended classes cannot exceed total classes.

After updating, the attendance percentage is recalculated automatically.

---

## 📋 Attendance Report

The Attendance Report displays attendance information for all students.

Example:

```text
================ ATTENDANCE REPORT ================

Roll No    Name                      Total Classes   Attended        Attendance
--------------------------------------------------------------------------
101        Rahul                     100             85              85.00%
102        Aman                      100             92              92.00%
103        Rohit                     100             76              76.00%
```

---

## ✅ Pass/Fail Summary

The Pass/Fail Summary feature displays:

* Total students
* Number of passed students
* Number of failed students
* Pass percentage
* Fail percentage

A student is considered **PASS** when their percentage is **40% or above**.

---

## 🗑️ Delete All Records

The Delete All Records feature removes every student record from the system.

Because this is a destructive operation, the program asks for confirmation:

```text
WARNING: This will delete ALL student records!
Are you sure? (Y/N):
```

Entering `Y` deletes all records.

Entering `N` cancels the operation.

---

## 🚪 Exit Confirmation

The Exit Confirmation feature prevents accidental program termination.

When the user selects Exit:

```text
========== EXIT PROGRAM ==========
Are you sure you want to exit? (Y/N):
```

* `Y` or `y` → Records are saved and the program exits.
* `N` or `n` → Exit is cancelled.
* Any other input → An invalid-input message is displayed.

---

## 📋 Main Menu

The current menu contains:

```text
========== STUDENT RECORD MANAGEMENT SYSTEM ==========

1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Calculate Result
7. Sort Students
8. Class Statistics
9. Search Student by name
10. Student Ranking
11. Pass/Fail Summary
12. Delete All Records
13. Subject-Wise Statistics
14. Update Attendance
15. Attendance Report
16. Save Records
17. Exit
```

---

## 💾 File Handling

Student records are stored in:

```text
students.dat
```

The program automatically loads previously saved records when it starts.

Records are automatically saved after important operations such as:

* Adding a student
* Updating a student
* Updating attendance
* Deleting a student
* Deleting all records
* Exiting the program

---

## 🛡️ Input Validation

The program validates user input to prevent common errors.

### Roll Number

* Must be positive
* Must be unique

### Age

* Must be between 5 and 100

### Marks

* Must be between 0 and 100

### Attendance

* Total classes cannot be negative
* Attended classes cannot be negative
* Attended classes cannot exceed total classes

### Menu

* Only valid menu numbers are accepted

### Exit

* Requires confirmation before closing the program

---

## 🛠️ Technologies Used

* **C Programming**
* Structures
* Arrays
* Functions
* Pointers
* Loops
* Conditional Statements
* File Handling
* Bubble Sort
* String Handling
* Input Validation
* Basic Statistical Calculations

---

## 📁 Project Structure

```text
Student-Record-Management-System/
│
├── student_management.c
├── README.md
├── .gitignore
└── students.dat
```

`students.dat` is ignored by Git because it contains locally generated student records.

---

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/dushyant-cloud/Student-Record-Management-System.git
```

### 2. Open the project folder

```bash
cd Student-Record-Management-System
```

### 3. Compile the program

```bash
gcc student_management.c -o student_management
```

### 4. Run the program

Windows:

```powershell
.\student_management.exe
```

Linux/macOS:

```bash
./student_management
```

---

## 🎯 Learning Objectives

This project helped me practice:

* C structures
* Arrays of structures
* Functions
* Pointers
* String handling
* Searching
* Sorting
* File handling
* Data validation
* Menu-driven programming
* Basic statistics
* Subject-wise data analysis
* Attendance management
* Temporary data copies
* Confirmation-based operations
* Case-insensitive string searching
* Ranking algorithms
* Handling tied rankings
* Building and maintaining a GitHub project

---

## 🔮 Future Improvements

Possible future features include:

* 📄 CSV export
* 🔐 Password protection
* 💾 Backup and restore
* 🎨 Improved console interface
* 📊 More detailed performance reports
* 📂 Separate files for different classes
* 📈 Attendance-based warnings
* 📊 Combined academic and attendance reports
* 📅 Monthly attendance tracking

---

## 👨‍💻 Author

**Dushyant Kumar**

BCA — Cloud Computing & Virtualization

---

## 📜 License

This project is open-source and available for learning and educational purposes.
