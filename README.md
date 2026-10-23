# Banking Account Management System Using OOP in C++

## 1. Project Overview
This project implements a simple Banking Account Management System using C++. It demonstrates important Object-Oriented Programming (OOP) concepts through a practical banking application.

The program allows users to create a bank account, deposit money, withdraw money, view account details, and perform an account audit.

## 2. Problem Statement
To develop a banking application in C++ that demonstrates classes, objects, the `this` pointer, inline functions, static data members, static member functions, and friend classes.

## 3. Objectives
- Understand the implementation of classes and objects.
- Demonstrate the use of the `this` pointer.
- Implement inline functions and static class members.
- Use a friend class to access private account information.
- Perform basic banking operations with appropriate validation.

## 4. OOP Concepts Used
| Concept | Implementation |
|---|---|
| Class | `BankAccount` and `Auditor` |
| Objects | Bank account and auditor objects |
| `this` pointer | Used in the constructor to initialize object members |
| Inline function | `getBalance()` |
| Static data member | `accountCount` stores the number of accounts created |
| Static member function | `displayAccountCount()` |
| Friend class | `Auditor` accesses private members of `BankAccount` |

## 5. Features
- Create a bank account with an account number, account holder name, and initial balance.
- Deposit money into an account.
- Withdraw money with balance validation.
- Display account details and current balance.
- Audit account details using a friend class.
- Display the total number of accounts created.
- Handle invalid deposit and withdrawal amounts.

## 6. Technologies Used
- **Programming Language:** C++
- **Standard Library:** `<iostream>` and `<string>`
- **Compiler:** GCC / MinGW / any compatible C++ compiler
- **IDE:** Visual Studio Code, Code::Blocks, or Dev-C++

## 7. Project Structure
```text
Banking-OOP-Assignment/
├── banking.cpp
└── README.md
```
`banking.cpp` contains the complete C++ implementation.

## 8. How to Compile and Run
### Using GCC
1. Install a C++ compiler such as GCC.
2. Open a terminal in the project folder.
3. Compile the source code:
   ```bash
   g++ banking.cpp -o banking
   ```
4. Run the program.

   **Windows:**
   ```bash
   banking.exe
   ```

   **Linux / macOS:**
   ```bash
   ./banking
   ```

### Using an IDE
1. Open `banking.cpp` in your C++ IDE.
2. Build or compile the program.
3. Run the executable.
4. Enter the account details and select operations from the banking menu.

## 9. Sample Execution
```text
Enter account number: 101
Enter account holder name: Aman
Enter initial balance: Rs. 5000

--- Banking Menu ---
1. Deposit
2. Withdraw
3. Display Account
4. Audit Account
5. Display Account Count
0. Exit

Enter choice: 1
Enter deposit amount: Rs. 1500
Deposit successful.

Enter choice: 2
Enter withdrawal amount: Rs. 2000
Withdrawal successful.

Enter choice: 3

Account Number: 101
Account Holder: Aman
Current Balance: Rs. 4500
```

## 10. Test Cases
| Test | Operation | Expected Result |
|---|---|---|
| 1 | Create account with valid details | Account created |
| 2 | Deposit a positive amount | Balance increases |
| 3 | Withdraw an amount within balance | Balance decreases |
| 4 | Withdraw more than available balance | Transaction rejected |
| 5 | Deposit zero or a negative amount | Invalid deposit rejected |
| 6 | Audit account | Private account details displayed by auditor |
| 7 | Display account count | Number of created accounts displayed |

## 11. Limitations
- The program manages account information only during execution; data is not saved permanently.
- It demonstrates basic banking operations and is not a production banking application.
- The friend class demonstrates private-member access but does not implement real authentication or security.

## 12. Conclusion
The Banking Account Management System demonstrates how OOP concepts can be combined to develop a structured C++ application. It provides practical understanding of classes, objects, encapsulation, the `this` pointer, inline functions, static members, and friend classes.

## 13. Author
**Student:** [Your Name]  
**Course:** SY B.Tech. Artificial Intelligence and Machine Learning  
**Practical:** OOP Concepts in C++
