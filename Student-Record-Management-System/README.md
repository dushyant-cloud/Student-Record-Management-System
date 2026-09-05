# Student Record Management System

A beginner-friendly **Student Record Management System built in C**.
This project allows users to add, view, search, update, delete, calculate results, sort students, save records, and validate user input.

## 🚀 Features

* ✅ Add Student
* ✅ Display All Students
* ✅ Search Student by Roll Number
* ✅ Update Student Information
* ✅ Delete Student
* ✅ Calculate Total Marks
* ✅ Calculate Percentage
* ✅ Calculate Grade
* ✅ Display Pass/Fail Status
* ✅ Sort Students by Percentage
* ✅ Save Student Records to File
* ✅ Load Student Records when Program Starts
* ✅ Input Validation
* ✅ Prevent Duplicate Roll Numbers
* ✅ Validate Age
* ✅ Validate Marks (0–100)

## 🛠️ Technologies Used

* **C Programming**
* **GCC Compiler**
* **Visual Studio Code**
* **Git**
* **GitHub**

## 📚 Concepts Used

This project demonstrates several important C programming concepts:

* Variables and Data Types
* Conditional Statements
* Loops
* Arrays
* Strings
* Functions
* Structures
* Pointers
* Searching
* Sorting
* File Handling
* Input Validation

## 📁 Project Structure

```text
Student-Record-Management-System/
│
├── student_management.c
├── README.md
├── .gitignore
└── students.dat
```

> `students.dat` is generated automatically when student records are saved and is ignored by Git.

## ▶️ How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/dushyant-cloud/Student-Record-Management-System.git
```

### 2. Open the Project Folder

```bash
cd Student-Record-Management-System
```

### 3. Compile the Program

```bash
gcc student_management.c -o student_management
```

### 4. Run the Program

On Windows PowerShell:

```powershell
.\student_management.exe
```

## 💾 File Handling

The program uses a binary file named:

```text
students.dat
```

Student records are saved to this file and automatically loaded when the program starts.

This means student data can remain available even after closing the program.

## 🛡️ Input Validation

The program checks:

* Roll number must be positive.
* Roll numbers cannot be duplicated.
* Age must be between 5 and 100.
* Marks must be between 0 and 100.
* Invalid menu input is rejected.

## 📊 Grading System

| Percentage | Grade |
| ---------- | ----- |
| 90–100     | A     |
| 80–89      | B     |
| 70–79      | C     |
| 60–69      | D     |
| 50–59      | E     |
| Below 50   | F     |

## 📈 Sorting

Students can be sorted according to their percentage using **Bubble Sort**.

The student with the highest percentage is displayed first.

## 🔮 Future Improvements

Planned features for future versions:

* [ ] Student ID validation
* [ ] Better name input validation
* [ ] Subject names instead of Subject 1–5
* [ ] Separate files for different modules
* [ ] Improved user interface
* [ ] Statistics such as class average and highest scorer
* [ ] Export records to text/CSV
* [ ] Admin login system

## 📌 Project Status

**Currently under development 🚧**

New features will be added gradually as I continue learning C programming.

## 👨‍💻 Author

**Dushyant Kumar**

GitHub: [@dushyant-cloud](https://github.com/dushyant-cloud)
