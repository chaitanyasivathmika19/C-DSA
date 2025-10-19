# 🚀 Data-Structures-Implementations

A collection of beginner-friendly **C programs** demonstrating fundamental implementations of **Stacks and Queues** using two core mechanisms: **Arrays** and **Linked Lists**.  
This repository helps learners **understand memory management, performance trade-offs, and operational logic** behind these crucial data structures.

---

> **Note:** Avoid uploading compiled `.exe` or temporary build files to version control.  
> Add them to `.gitignore` if necessary.

---

## 📂 Project Structure

/ (root)  
│── array_queue.c           # 📦 Queue implementation using array  
│── linked_list_queue.c     # 🔗 Queue implementation using linked list  
│── array_stack.c           # 📚 Stack implementation using array  
│── linked_list_stack.c     # 🧱 Stack implementation using linked list  

---

## 🧩 Programs & Key Concepts

| Data Structure | Implementation | File Name | Description | Key Concepts |
| --------------- | -------------- | ---------- | ------------ | ------------- |
| **Queue (FIFO)** | Linked List | `linked_list_queue.c` | Uses dynamic nodes (no fixed array size) for efficient enqueue/dequeue. | Dynamic memory, pointers, O(1) operations |
| **Queue (FIFO)** | Array | `array_queue.c` | Uses a fixed-size circular buffer for efficient element access. | Arrays, circular indexing, O(1) operations |
| **Stack (LIFO)** | Linked List | `linked_list_stack.c` | Implements push/pop with linked nodes for unlimited growth. | Pointers, dynamic memory |
| **Stack (LIFO)** | Array | `array_stack.c` | Implements push/pop at top index for fast access. | Arrays, top index tracking, O(1) operations |

---

## ⚖️ Key Differences and Rationale

Choosing between **Array-based** and **Linked List-based** structures depends on memory and performance needs.

### Queue Comparison

| Feature | Linked List Queue | Array Queue (Circular Buffer) |
| -------- | ---------------- | ----------------------------- |
| Size | Dynamic (auto-grows) | Fixed (predefined) |
| Enqueue/Dequeue | O(1) | O(1) (with circular logic) |
| Memory | Extra pointer overhead | Compact, less overhead |
| Resizing | Automatic | Requires array copy and reallocation |

---

### Stack Comparison

| Feature | Linked List Stack | Array Stack |
| -------- | ---------------- | ------------ |
| Size | Dynamic | Fixed |
| Push/Pop | O(1) | O(1) |
| Memory | More (pointer overhead) | Less (contiguous memory) |
| Use Case | When size unknown | When max size known |

---

## 🔧 Core Operations

### Queue (FIFO – First In, First Out)

- `enqueue(item)` → Add item to the rear  
- `dequeue()` → Remove item from the front  
- `peek()` → View the front item without removing  

### Stack (LIFO – Last In, First Out)

- `push(item)` → Add item to the top  
- `pop()` → Remove item from the top  
- `peek()` → View the top item without removing  

---

## 💻 How to Compile and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/chaitanyasivathmika19/C-DSA.git
   cd C-DSA

2. Compile the desired file:
   ```bash
   gcc filename.c -o outputname
3. Run the program:
   ```bash
   ./outputname

## 🧠 Why This Repo?

- ✅ Understand **core data structure mechanics** in C.  
- ✅ Learn **stack and queue operations** using both static and dynamic memory.  
- ✅ Build a foundation for **advanced DSA topics** like graphs, trees, and linked structures.  

---

## 📚 Resources & References

- [C Programming Language (Kernighan & Ritchie)](https://en.wikipedia.org/wiki/The_C_Programming_Language)  
- [GeeksforGeeks – Stacks & Queues in C](https://www.geeksforgeeks.org/stack-data-structure/)  
- [HackerRank – Data Structures Practice](https://www.hackerrank.com/domains/data-structures)  

---

## 📌 License

This project is open-source and available under the **MIT License**.
