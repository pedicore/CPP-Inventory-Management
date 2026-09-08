# CPP Inventory Management System

A lightweight, multi-file **C++ Command Line Application** that demonstrates low-level memory management, dynamic array resizing, and custom search algorithms without relying on C++ Standard Template Library (STL) containers like `std::vector`.

---

## Key Features

* **Dynamic Array Resizing:** Automatically doubles memory allocation (`capacity *= 2`) when the item capacity is reached, mimicking vector behavior under the hood.
* **Manual Memory Management:** Uses explicit `new[]` and `delete[]` operators to manage heap memory safely without memory leaks.
* **Item Search:** Built-in linear search algorithm (`find_item_by_id`) to locate items by their unique ID.
* **Modular Multi-File Architecture:** Clean separation of concerns across header (`.h`), implementation (`.cpp`), and driver (`main.cpp`) files.

---

## Technical Concepts Covered

* **Data Structures:** Custom `struct` definitions (`item` and `inventory`).
* **Pointers & Heap Allocation:** Manual allocation, deep copying, and deallocation.
* **Modular Compilation:** Header guards (`#pragma once`) and multi-file compilation using `g++`.
* **Algorithms:** Linear Search and Dynamic Resizing logic.

---

## Project Structure

```text
CPP-Inventory-Management/
├── inventory.h      # Struct definitions and function prototypes
├── inventory.cpp    # Implementation of core memory & business logic
├── main.cpp         # Application entry point and testing routines
├── .gitignore       # Git ignore rule for binary files
└── README.md        # Project documentation


Build & Run
Prerequisites
A C++ compiler supporting C++11 or higher (e.g., GCC/MinGW).

Compilation
Open your terminal in the project directory and run:

g++ *.cpp -o app.exe


------------------------------------
Run the compiled executable:
.\app.exe
------------------------------------//sample output:
--- Current Inventory ---
ID: 101 | Name: Laptop | Qty: 5
ID: 102 | Name: Mouse | Qty: 25
ID: 103 | Name: Keyboard | Qty: 12

--- Searching for Item ---
Item with ID 102 found at index 1!
Name: Mouse | Quantity: 25

Memory freed successfully!

----------------------------------------------------------



## License
Distributed under the MIT License. See LICENSE for more information.
