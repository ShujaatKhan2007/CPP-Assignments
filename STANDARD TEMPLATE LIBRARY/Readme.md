# STL Containers in C++ – List and Vector

## 📌 Project Overview

This project demonstrates the implementation of two sequence containers of the C++ Standard Template Library (STL), namely **List** and **Vector**.

The program performs various operations such as insertion, deletion, searching, sorting, reversing, and displaying elements using both containers. It also includes basic boundary-condition checks to handle invalid positions.

## 🎯 Objectives

- To understand the Standard Template Library (STL) in C++.
- To implement List and Vector containers.
- To perform insertion, deletion, searching, sorting, and reversing operations.
- To understand the differences between List and Vector.
- To handle invalid positions and empty containers.

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Programming language |
| iostream | Input and output operations |
| list | Doubly linked list container |
| vector | Dynamic array container |
| algorithm | Searching, sorting and reversing |
| iterator | Iterator operations |
| VS Code / Code::Blocks | Development environment |

## 📚 Concepts Used

### 1. List Container

The List container is implemented using a doubly linked list. It supports efficient insertion and deletion when the required iterator is available. It does not support direct random access.

**Functions used:**
- `push_back()`
- `insert()`
- `erase()`
- `sort()`
- `reverse()`
- `size()`

### 2. Vector Container

The Vector container is implemented using a dynamic array. It stores elements in contiguous memory locations and supports random access using indices.

**Functions used:**
- `push_back()`
- `insert()`
- `erase()`
- `sort()`
- `reverse()`
- `size()`
- `capacity()`

## ⚙️ Features

- Create and display List and Vector containers.
- Insert elements at specified positions.
- Delete elements from specified positions.
- Search for a particular element.
- Sort elements in ascending order.
- Reverse the order of elements.
- Display the size of containers.
- Display the capacity of Vector.
- Validate insertion and deletion positions.

## 📂 Project Structure

```text
STL-Containers/
│
├── main.cpp
└── README.md
```

## ▶️ How to Run the Program

**Step 1:** Clone the repository.

```bash
git clone YOUR_GITHUB_REPOSITORY_URL
```

**Step 2:** Open the project folder.

```bash
cd STL-Containers
```

**Step 3:** Compile the C++ program using GCC.

```bash
g++ main.cpp -o main
```

**Step 4:** Execute the program.

On Windows:

```bash
main.exe
```

On Linux/macOS:

```bash
./main
```

## 💻 Sample Input

```text
Enter number of elements: 5
Enter elements:
30 10 50 20 40

Enter position for insertion: 2
Enter value to insert: 25

Enter position to delete: 4
Enter element to search: 40
```

## 📤 Sample Output

```text
Original List: 30 10 50 20 40

List after insertion: 30 10 25 50 20 40

List after deletion: 30 10 25 50 40

Element found in List.

List after sorting: 10 25 30 40 50

List after reversing: 50 40 30 25 10

Size of List: 5
```

The program also performs corresponding operations on the Vector container.

## 📊 Difference Between List and Vector

| Feature | List | Vector |
|---|---|---|
| Implementation | Doubly Linked List | Dynamic Array |
| Memory allocation | Non-contiguous | Contiguous |
| Random access | Not supported | Supported |
| Insertion and deletion | Efficient with iterator | May require shifting |
| Element access | Sequential | Direct indexing |

## 🧪 Testing

The program can be tested using the following cases:

1. Normal insertion and deletion.
2. Searching for an existing element.
3. Searching for a non-existing element.
4. Sorting elements in ascending order.
5. Reversing the elements.
6. Inserting at an invalid position.
7. Deleting from an invalid position.
8. Handling an empty container.

## ✅ Conclusion

This project successfully demonstrates the use of List and Vector containers from the C++ Standard Template Library. It provides practical understanding of container operations, iterators, algorithms, dynamic memory management, and the differences between linked-list-based and dynamic-array-based containers.

## 👨‍🎓 Author

**Shujaat Hidayat Khan**  
B.Tech – Artificial Intelligence and Machine Learning  
MIT Academy of Engineering, Pune

---

*This project is developed as part of the C++ Object-Oriented Programming practical assignment.*