# 📚 Data Structures Implementations: Stacks and Queues

This repository contains fundamental implementations of the Queue and Stack data structures using two common underlying mechanisms: Arrays and Linked Lists.  
These examples are crucial for understanding the trade-offs and performance characteristics of each approach.

---

## 💻 Included Implementations

The repository includes four distinct code files, demonstrating each data structure and implementation method.

| Data Structure | Implementation | File/Code Name | Description |
|---|---|---|---|
| Queue (FIFO) | Linked List | linked_list_queue | Uses dynamic nodes (no fixed size array) for efficient Enqueue and Dequeue (O(1)). |
| Queue (FIFO) | Array | array_queue | Uses a fixed-size array (often with a circular buffer approach) for faster element access (O(1) at index) but requires pre-defined size. |
| Stack (LIFO) | Linked List | linked_list_stack | Uses dynamic nodes for efficient Push and Pop operations (O(1)) without fixed-size limitations. |
| Stack (LIFO) | Array | array_stack | Uses a fixed-size array where Push and Pop operate at one end (the "top") for fast, cache-friendly operations (O(1)). |

---

## 🛠️ Key Differences and Rationale

The choice between an Array-based or Linked List-based implementation depends on the specific use case, primarily due to their different memory management and performance characteristics.

### Queue Implementations

| Feature | Linked List Queue | Array Queue (Circular Buffer) |
|---|---|---|
| Size | Dynamic (grows/shrinks as needed). | Fixed (size must be declared in advance). |
| Enqueue/Dequeue | O(1) time complexity. | O(1) time complexity (using circular array logic). |
| Memory | Uses more memory per element (for pointers). | Uses less memory per element (no pointer overhead). |
| Resizing | Simple (no manual resizing needed). | Complex/Costly if the queue capacity needs to change (requires new array allocation and copy). |

---

### Stack Implementations

| Feature | Linked List Stack | Array Stack |
|---|---|---|
| Size | Dynamic (efficient for unknown or highly variable size). | Fixed (can lead to overflow if size is exceeded). |
| Push/Pop | O(1) time complexity (at the head/top). | O(1) time complexity (at the end/top index). |
| Memory | More memory overhead due to node pointers. | Less memory overhead; contiguous memory is cache-friendly and often faster for small to moderate data sizes. |
| Use Case | Ideal when the maximum size is unknown or very large, prioritizing memory efficiency over initial allocation. | Ideal when the maximum size is known or for performance-critical applications with frequent operations on smaller data sets. |

---

## 📜 Code Structure (Placeholder)

Each file will typically contain the core class/struct definition and the essential data structure operations.

### Queue Operations (FIFO - First-In, First-Out)
- enqueue(item): Adds an item to the rear of the queue.  
- dequeue(): Removes and returns the item from the front of the queue.  
- peek(): Returns the item at the front without removing it.

### Stack Operations (LIFO - Last-In, First-Out)
- push(item): Adds an item to the top of the stack.  
- pop(): Removes and returns the item from the top of the stack.  
- peek(): Returns the item at the top without removing it.

---

## 🧩 Example Placeholder

```c
// Example of how a code block placeholder would look
// This is for demonstration, as you did not provide the code itself.

// Code for array_queue implementation
// (Insert actual code here)
