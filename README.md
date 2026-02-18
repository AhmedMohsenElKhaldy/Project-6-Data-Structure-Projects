# Project-5---Data-Structure-Projects
🚀 Data Structures From Scratch – C++ Implementation
📌 Project Vision

This project is not about using ready-made STL containers.
It is about building them from scratch to understand how they really work internally.

The repository demonstrates how complex data structures can be layered on top of each other using:

Templates

Dynamic Memory

Pointer manipulation

Inheritance

Reusability principles

🏗 Architecture Design

This project follows a layered architecture:

Dynamic Array
     ↑
Stack (Array Based)
Queue (Array Based)

Doubly Linked List
     ↑
Queue (Linked List Based)
     ↑
Stack (Built on Queue)

STL Stack
     ↑
Undo / Redo System


This shows how higher-level abstractions are built from lower-level structures.

📦 Implemented Components
🔹 1. Custom Dynamic Array (ClsMyDynamicArray<T>)

A manual implementation similar to std::vector.

Features:

Resize

Insert at index

Delete by index

Reverse

Find element

Clear

Insert at beginning / end

Key Learning:

Memory reallocation and manual array management.

🔹 2. Doubly Linked List (ClsDoubleLinkedList<T>)

Full pointer-based implementation.

Features:

Insert at beginning / end

Insert after index

Delete first / last / specific node

Reverse list

Get / Update by index

Size tracking

Key Learning:

Bidirectional node linking and memory safety.

🔹 3. Stack Implementations
A) Stack using Dynamic Array

ClsMyStackArr<T>

B) Stack built on Queue

ClsMyStack<T>

Demonstrates inheritance + structural reuse.

🔹 4. Queue Implementations
A) Queue using Dynamic Array

ClsMyQueueArr<T>

B) Queue using Doubly Linked List

ClsMyQueue<T>

🔹 5. Undo / Redo System (ClsMyString)

Real-world implementation using STL stack<string>.

Concept:

_Undo stack stores previous states.

_Redo stack stores reverted states.

Demonstrates:

✔ State management
✔ Stack behavior in real applications
✔ Software design thinking

⏱ Time Complexity Overview
Structure	Access	Insert	Delete
Dynamic Array	O(1)	O(n)	O(n)
Doubly Linked List	O(n)	O(1)*	O(1)*
Stack	O(1)	O(1)	O(1)
Queue	O(1)	O(1)	O(1)

* When node reference is known.

🧠 What This Project Demonstrates

Deep understanding of data structures

Building abstraction layers

Object-Oriented Design

Template programming

Manual memory handling

Applying DS in real-world features (Undo/Redo)

💻 How to Run
git clone https://github.com/your-username/repository-name.git


Open in Visual Studio → Build → Run.

👨‍💻 Author

Ahmed Mohsen ElKhaldy
C++ Developer | Data Structure Enthusiast | Software Engineering Learner
