# Implementation of Class Template and Function Template in C++

## Problem Statement
To implement class templates and function templates in C++ for generic programming and code reusability. The program performs arithmetic operations using a class template and finds the maximum of two values using a function template.

## Objectives
- Understand class templates and function templates.
- Implement generic code for different data types.
- Handle division by zero using exception handling.
- Test the program with integer and decimal values.

## Concepts Used

### 1. Class Template
The `Calculator<T>` class template performs addition, subtraction, multiplication and division. The type parameter `T` allows the same class to work with different data types.

Examples:
- `Calculator<int>`
- `Calculator<double>`

### 2. Function Template
The `findMax<T>()` function template returns the maximum of two values.

Examples:
- `findMax(10, 20)` returns `20`.
- `findMax(5.5, 3.2)` returns `5.5`.

### 3. Exception Handling
The program checks for division by zero and throws a `runtime_error`. A `catch` block displays the exception message.

## Technologies Used
- C++
- `iostream`
- `stdexcept`
- Code::Blocks or VS Code
- G++ or another compatible C++ compiler

## How to Compile and Run

Save the source code as `templates.cpp`.

Compile using G++:

```bash
g++ templates.cpp -o templates
```

On Windows:

```bash
templates.exe
```

On Linux/macOS:

```bash
./templates
```

## Test Cases

| Test Case | Operation | Expected Result |
|---|---|---|
| TC1 | Addition of 10 and 5 | 15 |
| TC2 | Subtraction of 10 and 5 | 5 |
| TC3 | Multiplication of 10 and 5 | 50 |
| TC4 | Division of 10 by 5 | 2 |
| TC5 | Addition of 10.5 and 2.5 | 13 |
| TC6 | Division of 10.0 by 4.0 | 2.5 |
| TC7 | Maximum of 10 and 20 | 20 |
| TC8 | Maximum of 5.5 and 3.2 | 5.5 |
| TC9 | Division by zero | Exception message displayed |

## Repository Structure

```text
cpp-templates/
├── templates.cpp
├── README.md
└── screenshots/
    ├── template_output.png
    └── exception_output.png
```

## Conclusion
This project demonstrates class templates and function templates in C++. It illustrates generic programming, code reusability, arithmetic operations on different data types and exception handling for division by zero.

## Author
Name: Shujaat Khan  
Course: B.Tech. Artificial Intelligence and Machine Learning  
College: MIT Academy of Engineering, Pune
