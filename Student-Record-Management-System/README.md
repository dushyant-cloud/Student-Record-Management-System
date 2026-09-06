# Student Record Management System

A console-based **Student Record Management System** developed in C. This project allows users to manage student records, calculate results, search and update students, store records in a file, and generate basic class statistics.

## 📌 Features

1. **Add Student**

   * Add a new student with roll number, name, age, and marks.
   * Prevents duplicate roll numbers.

2. **Display Students**

   * Displays all stored student records.

3. **Search by Roll Number**

   * Find a student using their roll number.

4. **Search by Name**

   * Search students using their name.
   * Supports partial name searches.

5. **Update Student**

   * Update an existing student's name, age, and marks.

6. **Delete Student**

   * Delete a student record using their roll number.

7. **Calculate Result**

   * Calculates total marks.
   * Calculates percentage.
   * Assigns grades.
   * Displays PASS or FAIL status.

8. **Sort Students**

   * Sorts students according to percentage.
   * Highest percentage appears first.

9. **Class Statistics**

   * Displays total number of students.
   * Calculates class average percentage.
   * Displays the student with the highest percentage.
   * Displays the student with the lowest percentage.

10. **File Handling**

    * Saves student records to a binary file.
    * Automatically loads records when the program starts.
    * Automatically saves records when students are added or updated.
    * Records are saved in `students.dat`.

11. **Input Validation**

    * Prevents invalid menu choices.
    * Roll numbers must be positive.
    * Duplicate roll numbers are prevented.
    * Age must be between 5 and 100.
    * Marks must be between 0 and 100.

## 🛠️ Technologies Used

* **C Programming**
* **GCC Compiler**
* **Visual Studio Code**
* **Git**
* **GitHub**

## 🧠 Concepts Used

This project demonstrates:

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
* Basic Statistics

## 📂 Project Structure

```text
Student-Record-Management-System/
│
├── student_management.c
├── README.md
├── .gitignore
└── students.dat
```

> `students.dat` is generated automatically by the program and is ignored by Git.

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

On Windows PowerShell:

```powershell
.\student_management.exe
```

## 📊 Grading System

| Percentage | Grade |
| ---------: | :---: |
|    90–100% |   A   |
|     80–89% |   B   |
|     70–79% |   C   |
|     60–69% |   D   |
|     50–59% |   E   |
|  Below 50% |   F   |

A student is considered **PASS** when their percentage is **40% or above**.

## 💾 File Handling

The program uses binary file handling to store student records.

* `fopen()` — Opens the file
* `fwrite()` — Saves records
* `fread()` — Loads records
* `fclose()` — Closes the file

The data is stored in:

```text
students.dat
```

## 🔎 Searching

The program supports two types of student searches:

### Roll Number Search

Searches for an exact roll number.

### Name Search

Allows searching using a complete or partial name.

For example:

```text
Rahul
```

can find:

```text
Rahul Kumar
Rahul Sharma
```

## 📈 Class Statistics

The statistics feature calculates:

* Total students
* Class average percentage
* Highest-performing student
* Lowest-performing student

## 🔄 Sorting

Students can be sorted by percentage using **Bubble Sort**, with the highest percentage appearing first.

## 🚀 Future Improvements

Possible future features include:

* Student ranking system
* Pass/Fail statistics
* Subject-wise statistics
* Delete all records
* Exit confirmation
* Better user interface
* Login/authentication system
* Export records to CSV
* Admin dashboard

## 📌 Project Status

**Currently under development 🚧**

The project already includes core student management, result calculation, file handling, validation, searching, sorting, and statistics features.

## 👨‍💻 Author

**Dushyant Kumar**

GitHub: `@dushyant-cloud`

---

⭐ If you find this project useful, consider giving the repository a star!
