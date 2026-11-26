
# Personal Expense Tracker

A simple menu-driven C++ application to record and manage personal expenses using basic file handling.

## Features

1. **Add Expense** – Enter the amount, category, and description of an expense.
2. **View All Expenses** – Display all recorded expenses.
3. **Calculate Total Expenses** – Calculate the sum of all recorded expenses.
4. **File Storage** – Save expenses in a text file (`expenses.txt`).
5. **Load Previous Expenses** – Load previously saved expenses when the program starts.

## Technologies Used

- C++
- Arrays and Structures
- Loops and Conditional Statements
- File Handling (`ifstream`, `ofstream`)
- GCC Compiler

## Project Structure

```text
Personal-Expense-Tracker/
│
├── main.cpp
├── expenses.txt
├── README.md
└── .gitignore
```

## How to Run

### 1. Compile the program

```bash
g++ main.cpp -o expense
```

### 2. Execute the program

```bash
./expense
```

## Menu Options

```text
===== PERSONAL EXPENSE TRACKER =====

1. Add Expense
2. View All Expenses
3. Calculate Total Expenses
4. Exit
```

## Data Storage

Expenses are stored in `expenses.txt` so that previously entered records can be loaded when the application is restarted.

Each record contains:
- Expense amount
- Expense category
- Expense description

## Limitations

- Supports a maximum of 100 expenses.
- Categories are entered as single words.
- Uses a local text file for storage.
- Does not include editing or deleting of expenses.

## Conclusion

The Personal Expense Tracker demonstrates basic C++ programming concepts, including arrays, loops, conditional statements, and file handling, through a simple real-world application.
