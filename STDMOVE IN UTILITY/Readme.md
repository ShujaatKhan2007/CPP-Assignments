# Implementation of std::move Using Utility Library in C++

## 📌 Project Overview

This project demonstrates the implementation of `std::move` using the C++ Standard Library. It explains the concept of move semantics and how resources can be transferred from one object to another instead of performing unnecessary copying.

The program implements a move constructor and a move assignment operator using rvalue references to demonstrate efficient resource management in C++.

## 🎯 Objectives

- To understand the concept of move semantics in C++.
- To implement a move constructor using rvalue references.
- To implement a move assignment operator.
- To understand resource transfer using `std::move`.
- To differentiate between copy operations and move operations.

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Programming language |
| iostream | Input and output operations |
| string | String manipulation |
| utility | Using `std::move` |
| VS Code / Code::Blocks | Development environment |

## 📚 Concepts Used

### 1. std::move

`std::move` is a function available in the `<utility>` header file. It converts an expression into an rvalue reference, allowing move operations to take place.

### 2. Move Constructor

A move constructor transfers resources from an existing object to a newly created object using an rvalue reference (`&&`).

### 3. Move Assignment Operator

A move assignment operator transfers resources from one existing object to another existing object using an rvalue reference.

### 4. Rvalue Reference

An rvalue reference is declared using `&&`. It allows functions such as move constructors and move assignment operators to accept temporary values or explicitly moved objects.

## ⚙️ Features

- Creates objects using a parameterized constructor.
- Implements a move constructor.
- Implements a move assignment operator.
- Uses `std::move` for resource transfer.
- Displays source and destination object values.
- Demonstrates the state of moved-from objects.

## 📂 Project Structure

```text
Std-Move/
│
├── main.cpp
└── README.md
```

## ▶️ How to Run the Program

**Step 1: Clone the repository**

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
```

**Step 2: Open the project folder**

```bash
cd Std-Move
```

**Step 3: Compile the program**

```bash
g++ -std=c++11 main.cpp -o main
```

**Step 4: Execute the program**

For Windows:

```bash
main.exe
```

For Linux/macOS:

```bash
./main
```

## 💻 Sample Output

```text
Before Move Construction:
Name: Shujaat

Move Constructor Called

After Move Construction:
Source Object: Name:
Destination Object: Name: Shujaat

Move Assignment Operator Called

After Move Assignment:
Source Object: Name:
Destination Object: Name: Shujaat
```

## 🧪 Testing

The program can be tested using the following cases:

1. Creating an object with a string value.
2. Transferring resources using a move constructor.
3. Checking the source object after move construction.
4. Transferring resources using a move assignment operator.
5. Checking the source and destination objects after move assignment.

## 📊 Difference Between Copy and Move

| Feature | Copy Semantics | Move Semantics |
|---|---|---|
| Purpose | Copies resources | Transfers resources |
| Constructor | Copy constructor | Move constructor |
| Parameter | `const ClassName&` | `ClassName&&` |
| Resource handling | Duplicates resources when required | Transfers ownership of resources |
| Performance | May involve additional copying | Can avoid unnecessary copying |

## ✅ Conclusion

This project successfully demonstrates the use of `std::move` from the utility library in C++. It provides an understanding of move semantics, rvalue references, move constructors and move assignment operators. It also explains how resource transfer can improve efficiency by avoiding unnecessary copying.

## 👨‍🎓 Author

**Shujaat Hidayat Khan**

B.Tech – Artificial Intelligence and Machine Learning

MIT Academy of Engineering, Pune

---

*Developed as part of the C++ Object-Oriented Programming Practical Assignment.*