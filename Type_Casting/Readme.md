# Type Casting and Casting Operators in C++

## 1. Problem Statement
To implement type casting and casting operators in C++ and understand the conversion of values between different data types.

## 2. Objectives
- To understand implicit and explicit type conversion.
- To implement different casting operators in C++.
- To understand pointer conversion and runtime type checking.
- To observe the effect of type casting on program output.

## 3. Theory
Type casting in C++ is the process of converting a value from one data type to another. It can be implicit, where the compiler automatically converts a value, or explicit, where the programmer specifies the conversion. C++ provides four casting operators: `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`. These operators perform different types of conversions and help programmers control type conversion in their programs.

## 4. Concepts Used

### Implicit Type Conversion
The compiler automatically converts a value from one data type to another when appropriate. In this program, an integer value of 10 is converted to a double.

### static_cast
Performs conversions between compatible types. The program converts the double value 15.75 to the integer value 15.

### const_cast
Changes the const or volatile qualification of a type. The program demonstrates accessing an integer value through a pointer after removing const qualification.

### dynamic_cast
Performs runtime-checked conversions in polymorphic class hierarchies. The program checks whether a base-class pointer refers to a derived-class object.

### reinterpret_cast
Performs low-level conversions between certain types. The program converts an integer pointer to `uintptr_t` to display its address as an integer.

## 5. Technologies Used
- Programming Language: C++
- Header Files: `iostream`, `cstdint`
- IDE: Code::Blocks or VS Code
- Compiler: G++ or another compatible C++ compiler

## 6. How to Compile and Run

Save the source code as `type_casting.cpp`.

Compile using G++:

```bash
g++ type_casting.cpp -o type_casting
```

Run on Windows:

```bash
type_casting.exe
```

Run on Linux/macOS:

```bash
./type_casting
```

## 7. Test Cases and Results

| Test Case | Operation | Expected Result | Actual Result |
|---|---|---|---|
| TC1 | Implicit conversion of 10 to double | 10 | 10 |
| TC2 | Convert 15.75 to int using `static_cast` | 15 | 15 |
| TC3 | Demonstrate `const_cast` | Both values are 25 | Both values are 25 |
| TC4 | Convert `Base*` to `Derived*` using `dynamic_cast` | Successful conversion | Successful conversion |
| TC5 | Convert pointer to `uintptr_t` using `reinterpret_cast` | Display value and address | Value: 100; address displayed |
| TC6 | Execute complete program | Successful termination | Program executed successfully |

## 8. Sample Output

```text
=== IMPLICIT TYPE CONVERSION ===
Integer value: 10
Converted to double: 10

=== static_cast ===
Original double: 15.75
Converted to int: 15

=== const_cast ===
Value using const pointer: 25
Value using cast pointer: 25

=== dynamic_cast ===
dynamic_cast successful: Object is Derived

=== reinterpret_cast ===
Value of x: 100
Address stored as integer: [memory address varies]

Program executed successfully.
```

Note: The address displayed by `reinterpret_cast` may vary between executions and computers.

## 9. Repository Structure

```text
type-casting-cpp/
├── type_casting.cpp
├── README.md
└── screenshots/
    └── type_casting_output.png
```

## 10. Result
The program executed successfully and demonstrated implicit type conversion, `static_cast`, `const_cast`, `dynamic_cast`, and `reinterpret_cast`. The output verified the conversion of values, pointer operations, runtime type checking, and successful program termination.

## 11. Conclusion
This practical demonstrates different types of casting in C++. It explains how values are converted between data types and how casting operators are used for numeric conversions, pointer operations, and runtime type checking. The practical improves understanding of type safety and appropriate casting techniques in C++.

## Author
Name: Shujaat Khan  
Course: B.Tech. Artificial Intelligence and Machine Learning  
College: MIT Academy of Engineering, Pune
