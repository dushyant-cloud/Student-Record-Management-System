# Student Record Management System

A beginner-friendly **Student Record Management System built using C**.

This project allows users to add, manage, search, update, delete, and analyze student records through a simple console-based interface.

The project is designed to practice fundamental C programming concepts such as **structures, arrays, functions, loops, conditional statements, file handling, sorting, string handling, and input validation**.

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
* ✅ Pass/Fail Summary
* 🗑️ Delete All Records with Confirmation
* 💾 Save Records
* 🚪 Exit Confirmation
* 📁 Automatic Data Loading at Startup
* 🛡️ Input Validation

---

## 📌 Student Information Stored

Each student record contains:

* Roll Number
* Name
* Age
* Marks in 5 Subjects
* Total Marks
* Percentage
* Grade

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

This means:

```text
rahul
RAHUL
Rahul
RaHuL
```

can all find the same student.

The feature converts the search text and student names to lowercase before performing the search.

---

## 🏆 Student Ranking

The Student Ranking feature displays students according to their percentage in **descending order**.

Example:

```text
========== STUDENT RANKING ==========

Rank   Roll No    Name                      Percentage
-------------------------------------------------------
1      103        Rahul                     91.20%
2      101        Aman                      84.60%
3      102        Rohit                     76.40%
```

The ranking uses a temporary copy of the records so that viewing rankings does not permanently change the original record order.

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

The updated empty record list is also saved to the data file so that deleted records do not reappear after restarting the program.

---

## 🚪 Exit Confirmation

The Exit Confirmation feature prevents accidental program termination.

When the user selects Exit:

```text
========== EXIT PROGRAM ==========
Are you sure you want to exit? (Y/N):
```

* `Y` or `y` → Records are saved and the program exits.
* `N` or `n` → Exit is cancelled and the main menu appears again.
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
13. Save Records
14. Exit
```

---

## 💾 File Handling

Student records are stored in:

```text
students.dat
```

The program automatically loads previously saved records when it starts.

Records are also automatically saved after important operations such as:

* Adding a student
* Updating a student
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

On Windows:

```powershell
.\student_management.exe
```

On Linux/macOS:

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
* Temporary data copies
* Confirmation-based operations
* Case-insensitive string searching
* Building and maintaining a GitHub project

---

## 🔮 Future Improvements

Possible future features include:

* 🔢 Tied ranking system
* 📚 Subject-wise statistics
* 📅 Attendance management
* 📄 CSV export
* 🔐 Password protection
* 💾 Backup and restore
* 🎨 Improved console interface
* 📊 More detailed performance reports
* 📝 Student attendance percentage
* 📂 Separate files for different classes

---

## 👨‍💻 Author

**Dushyant Kumar**

BCA — Cloud Computing & Virtualization

---

## 📜 License

This project is open-source and available for learning and educational purposes.
