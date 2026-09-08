# Student Record Management System

A beginner-friendly **Student Record Management System written in C**.

This project allows users to add, display, search, update, delete, sort, and manage student academic records through a simple menu-driven console application.

It was developed as a **1st Semester BCA project** to practice core C programming concepts such as structures, arrays, functions, loops, conditional statements, pointers, and file handling.

---

## 🚀 Features

* ➕ Add Student
* 📋 Display All Students
* 🔍 Search Student by Roll Number
* 🔎 Search Student by Name
* ✏️ Update Student Records
* 🗑️ Delete Student Records
* 📊 Calculate Student Result
* 📈 Sort Students by Percentage
* 🏆 Student Ranking
* 📚 Class Statistics
* ✅ Pass/Fail Summary
* 💾 Save Student Records
* 📂 Load Student Records Automatically
* 🔢 Duplicate Roll Number Prevention
* ✔️ Input Validation
* 📊 Automatic Total and Percentage Calculation
* 🎓 Automatic Grade Calculation

---

## 🧮 Grading System

| Percentage | Grade |
| ---------- | ----- |
| 90–100%    | A     |
| 80–89%     | B     |
| 70–79%     | C     |
| 60–69%     | D     |
| 50–59%     | E     |
| Below 50%  | F     |

### Pass Criteria

Students with **40% or above** are considered PASS.

Students below **40%** are considered FAIL.

---

## 💻 Technologies Used

* **Language:** C
* **Compiler:** GCC / MinGW
* **Editor:** Visual Studio Code
* **Operating System:** Windows
* **Data Storage:** Binary File Handling

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

> `students.dat` is generated automatically by the program and is ignored by Git.

---

## ⚙️ How to Run

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

On Windows PowerShell:

```powershell
.\student_management.exe
```

---

## 📋 Main Menu

```text
========================================
       STUDENT RECORD MANAGEMENT
========================================

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
12. Save Records
13. Exit
```

---

## 💾 Data Storage

The program uses **binary file handling** to store student records.

The file used is:

```text
students.dat
```

Records are automatically loaded when the program starts and can be saved using the **Save Records** option.

---

## 🛡️ Input Validation

The program includes several validation checks:

* Roll number must be positive.
* Duplicate roll numbers are not allowed.
* Age must be between 5 and 100.
* Marks must be between 0 and 100.
* Invalid menu input is handled.
* Maximum student capacity is 100.

---

## 📊 Student Information

Each student record contains:

```text
Roll Number
Name
Age
Marks for 5 Subjects
Total Marks
Percentage
Grade
```

The program automatically calculates:

```text
Total = Sum of all subject marks

Percentage = (Total / 500) × 100
```

---

## 🏆 Student Ranking

The Student Ranking feature sorts students according to their percentage and displays their rank, roll number, name, and percentage.

---

## 📈 Class Statistics

The Class Statistics feature displays:

* Total number of students
* Class average
* Highest percentage
* Student with the highest percentage
* Lowest percentage
* Student with the lowest percentage

---

## ✅ Pass/Fail Summary

The Pass/Fail Summary feature provides:

* Total students
* Number of passed students
* Number of failed students
* Pass percentage
* Fail percentage

The passing criteria is:

```text
Percentage >= 40 → PASS
Percentage < 40  → FAIL
```

---

## 🎯 Learning Objectives

This project helped me practice:

* C Structures
* Arrays
* Functions
* Pointers
* Loops
* Conditional Statements
* String Handling
* Searching
* Sorting
* File Handling
* Input Validation
* Menu-driven Programming
* Basic Data Management

---

## 🔮 Future Improvements

Possible future features include:

* Delete all records with confirmation
* Exit confirmation
* Case-insensitive name search
* Better ranking with tied ranks
* Subject-wise statistics
* Attendance management
* Export records to text/CSV
* Password-protected administration
* Improved console UI

---

## 👨‍💻 Author

**Dushyant Kumar**

BCA — Cloud Computing & Virtualization

---

## 📜 License

This project is created for educational and portfolio purposes.
