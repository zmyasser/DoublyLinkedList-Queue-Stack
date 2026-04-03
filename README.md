# 🎯 C++ Data Structures: Doubly Linked List, Queue & Stack 🚀


Welcome to this **C++ Data Structures repository**! Here you'll find implementations of a **Doubly Linked List**, a **Queue (FIFO)**, and a **Stack (LIFO)**, all **templated** to work with any data type. Perfect for learning **pointers, templates, and object-oriented programming**.  

---

## 📁 Project Structure

.
├── clsDblLinkedList.h      # Templated doubly linked list  
├── clsMyQueue.h            # Queue using the linked list  
├── clsMyStack.h            # Stack using the queue  
└── main.cpp                # Test program demonstrating all features  

---

## ⚡ Features

### 1️⃣ Doubly Linked List
- 🔹 Insert at beginning, end, or after a given index  
- 🔹 Delete first, last, or a specific node  
- 🔹 Reverse the list  
- 🔹 Update or access items by index  
- 🔹 Print the list contents  

### 2️⃣ Queue (FIFO)
- 🔹 `push()` — add an item to the back  
- 🔹 `pop()` — remove the front item  
- 🔹 `front()` — access the first item  
- 🔹 `back()` — access the last item  
- 🔹 `Size()`, `IsEmpty()`, `Reverse()`, `Clear()`  
- 🔹 Insert or update items at specific positions  

### 3️⃣ Stack (LIFO)
- 🔹 `push()` — add an item to the top  
- 🔹 `pop()` — remove the top item  
- 🔹 `Top()` — access the top item  
- 🔹 `Bottom()` — access the bottom item  
- 🔹 Supports all Queue extensions (Reverse, UpdateItem, InsertAfter, Clear, Print)  

---

## 💻 Usage
1. Clone the repository: git clone https://github.com/yourusername/YourRepoName.git
2. Compile the program: g++ main.cpp -o program
3. Run the executable:
   

---

## 🎨 Example Output

**Linked List:**  
1 2 3 4 5  
**Linked List after adding 500:**  
1 2 3 4 5 500  

**Queue:**  
10 20 30 40 50  
Queue Size: 5  
Queue Front: 10  
Queue Back: 50  
Queue after pop():  
20 30 40 50  

**Stack:**  
10 20 30 40 50  
Stack Size: 5  
Stack Top: 50  
Stack Bottom: 10  
Stack after pop():  
10 20 30 40  

---

## 📝 Notes
- All classes are **templated**, so they work with any data type (int, float, string, etc.).  
- `front()`, `back()`, `Top()`, `Bottom()` throw exceptions if the container is empty.  
- Index-based operations use **0-based indexing**.  
- Designed for **learning and practice** in **C++ OOP and data structures**.  

---

## 🎓 Learning Goals
- Understand **doubly linked list implementation**  
- Learn how to build **queue and stack abstractions**  
- Practice **C++ templates, pointers, memory management**  
- Implement **list manipulation functions** like insert, delete, reverse, update  

---

## 👨‍💻 Author
**Yasser Mouhamed**  
- Passionate about C++, programming, and data structures  
