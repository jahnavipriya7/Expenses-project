# Expense Tracker in C

## Overview

The **Expense Tracker** is a simple command-line application written in **C** that helps users record and manage their daily expenses.
The program allows users to store expense details such as date, category, and amount, and keeps the records in a file for future access.

This project demonstrates the use of **structures, file handling, and menu-driven programming** in C.

---

## Features

* Add daily expenses
* Store expense records in a file
* View all recorded expenses
* Calculate total spending
* Simple menu-driven interface

---

## Technologies Used

* **C Programming Language**
* **File Handling**
* **Structures**
* **Standard Input/Output**

---

## Project Structure

```
expense-tracker/
│
├── expense.c        # Main source code
├── expenses.dat     # File used to store expense records (generated after running)
└── README.md        # Project documentation
```

---

## How to Compile and Run

### Compile the program

```
gcc expense.c -o expense
```

### Run the program

```
./expense
```

---

## Example Menu

```
====== Expense Tracker ======
1. Add Expense
2. View Expenses
3. Exit
Enter choice:
```

---

## Concepts Demonstrated

This project helps understand important programming concepts such as:

* **Structures in C** for organizing data
* **Binary file handling** using `fopen`, `fwrite`, and `fread`
* **Menu-driven program design**
* **Basic data processing**

---

## Future Improvements

Possible enhancements for this project include:

* Category-wise expense reports
* Monthly expense summary
* Delete or edit expense records
* Data visualization for expenses
* User authentication system

---

## Author

**Jahnavi Priya**

Computer Science student interested in building practical programming projects and improving problem-solving skills.

