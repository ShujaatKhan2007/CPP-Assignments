# Implementation of Different Types of Inheritance in C++

## Overview
This project demonstrates the five main types of inheritance in C++ using a simple university management example:

1. **Single Inheritance** — `Student` and `Employee` inherit from `Person`.
2. **Multiple Inheritance** — `TeachingAssistant` inherits from both `Student` and `Employee`.
3. **Multilevel Inheritance** — demonstrates the path `Person -> Student -> TeachingAssistant`.
4. **Hierarchical Inheritance** — `Student` and `Employee` share the same base class, `Person`.
5. **Hybrid Inheritance** — combines multiple inheritance relationships in the same program.

The example also demonstrates constructors, protected data members, member functions, and virtual inheritance. Virtual inheritance is used so that `TeachingAssistant` has one shared `Person` base subobject.

## Objectives
- Understand inheritance in object-oriented programming.
- Implement and distinguish five inheritance types in C++.
- Demonstrate code reuse and class relationships through a real-world-inspired example.

## Technologies Used
- **Language:** C++
- **Headers:** `iostream`, `string`
- **Compiler:** Any compatible C++ compiler, such as GCC/MinGW
- **IDE:** Visual Studio Code, Code::Blocks, or another C++ IDE

## Project Structure
```text
Inheritance-Types-CPP/
├── inheritance.cpp
└── README.md
```

## How to Compile and Run

### Using GCC / MinGW
1. Save the source code as `inheritance.cpp`.
2. Open a terminal in the folder containing the file.
3. Compile the program:

   ```bash
   g++ inheritance.cpp -o inheritance
   ```

4. Run the program:

   **Windows**
   ```bash
   .\inheritance.exe
   ```

   **Linux / macOS**
   ```bash
   ./inheritance
   ```

No keyboard input is required because the example data is predefined in `main()`.

## Classes Used
- **`Person`**: Common base class that stores a person's name.
- **`Student`**: Virtually inherits from `Person` and stores a roll number.
- **`Employee`**: Virtually inherits from `Person` and stores an employee ID.
- **`TeachingAssistant`**: Inherits from both `Student` and `Employee`, demonstrating multiple and hybrid inheritance.

## Sample Output
```text
=== SINGLE INHERITANCE ===
Name: Aarav
Roll Number: 101

=== HIERARCHICAL INHERITANCE ===
Name: Riya
Employee ID: 501

=== MULTIPLE INHERITANCE ===
Name: Kabir
Roll Number: 102
Employee ID: 502

=== MULTILEVEL INHERITANCE ===
Person -> Student -> TeachingAssistant
Name: Kabir
Roll Number: 102
Employee ID: 502

=== HYBRID INHERITANCE ===
TeachingAssistant inherits from Student and Employee,
both derived from Person.
Name: Kabir
Roll Number: 102
Employee ID: 502
```

## Expected Learning Outcomes
After completing this project, the student should be able to:
- Explain the five types of inheritance in C++.
- Create base and derived classes.
- Use constructors to initialize class data.
- Explain how virtual inheritance helps avoid duplicate copies of a common base class.

## Author
- **Student Name:** Add your name
- **PRN:** Add your PRN
- **Course:** SY B.Tech. Artificial Intelligence and Machine Learning

## Notes
- Compile and run the program before submitting.
- Update the author details.
- Add screenshots of the source code and program output if required by your practical assignment.
