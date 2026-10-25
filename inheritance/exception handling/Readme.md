# Exception Handling Operations in C++

## 1. Problem Statement
To implement exception handling operations in C++ using `try`, `throw`, and `catch` blocks. The program performs arithmetic operations through a menu-driven calculator and handles exceptional conditions such as division by zero, invalid menu choices, and invalid numerical inputs.

## 2. Objectives
- To understand exception handling in C++.
- To implement `try`, `throw`, and `catch` blocks.
- To handle invalid inputs and runtime errors.
- To test the program using different input conditions.

## 3. Concepts Used
- **try:** Contains statements that may generate an exception.
- **throw:** Generates an exception when an error occurs.
- **catch:** Handles the exception thrown from the `try` block.
- **Input validation:** Checks whether the user has entered valid input.
- **Looping:** Allows repeated calculator operations until the user selects Exit.

## 4. Features
The program provides the following operations:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

It also handles:
- Division by zero.
- Invalid menu choices.
- Non-numeric input for the menu choice.
- Invalid numerical input while entering operands.
- Safe program termination.

## 5. Technologies Used
- **Programming Language:** C++
- **Header File:** `iostream`
- **IDE:** Code::Blocks
- **Compiler:** G++ or another compatible C++ compiler

## 6. How to Compile and Run

Save the source code as `exception_handling.cpp`.

Compile using G++:

```bash
g++ exception_handling.cpp -o exception_handling
```

Run on Windows:

```bash
exception_handling.exe
```

On Linux/macOS:

```bash
./exception_handling
```

Alternatively, open the source file in Code::Blocks, build the program, and run it.

## 7. Test Cases and Results

| Test Case | Input | Expected Result | Status |
|---|---|---|---|
| TC1: Addition | Choice: 1; Numbers: 10, 5 | Result = 15 | Pass |
| TC2: Division by zero | Choice: 4; Numbers: 10, 0 | Division-by-zero exception message | Pass |
| TC3: Invalid menu choice | Choice: 8 | Invalid menu choice exception | Pass |
| TC4: Invalid numerical input | Choice: 1; Numbers: 10, abc | Invalid numbers exception | Pass |
| TC5: Exit | Choice: 5 | Program terminates successfully | Pass |

The test results above correspond to the program output screenshots captured during execution.

## 8. Sample Output

```text
Enter your choice: 1
Enter two numbers: 10 5
Result = 15
```

Division-by-zero handling:

```text
Enter your choice: 4
Enter two numbers: 10 0
Exception: Division by zero is not allowed!
```

Invalid menu choice:

```text
Enter your choice: 8
Exception: Invalid menu choice!
```

Invalid numerical input:

```text
Enter your choice: 1
Enter two numbers: 10 abc
Exception: Please enter valid numbers!
```

Exit operation:

```text
Enter your choice: 5
Program terminated successfully.
```

## 9. Repository Structure

```text
exception-handling-cpp/
├── exception_handling.cpp
├── README.md
└── screenshots/
    ├── normal_operation.png
    └── exception_handling.png
```

## 10. Conclusion
This practical demonstrates exception handling in C++ using `try`, `throw`, and `catch` blocks. The calculator performs arithmetic operations and handles exceptional conditions such as division by zero, invalid menu choices, and invalid numerical inputs. It demonstrates the importance of input validation and exception handling in developing reliable programs.

## Author
**Name:** Shujaat Khan  
**Course:** B.Tech. Artificial Intelligence and Machine Learning  
**College:** MIT Academy of Engineering, Pune
