# C++ Dynamic Inventory Management System

A lightweight, C-style memory-managed Inventory Management System written in C++17. This project demonstrates low-level dynamic memory allocation, manual array resizing algorithms, multi-file modular architecture, and cross-platform CMake build configuration.

---

## 🌟 Key Features

- **Dynamic Memory Management:** Custom dynamic array implementation using raw pointers (`new[]` and `delete[]`).
- **Automatic Array Resizing:** Automatically doubles internal memory capacity when storage limits are reached.
- **Modular Architecture:** Clean separation of data structures, function declarations (`.h`), and implementations (`.cpp`).
- **Memory Safety:** Explicit memory cleanup function to prevent memory leaks and dangling pointers.
- **Cross-Platform Build:** Uses CMake for easy compilation across Windows, Linux, and macOS.

---

## 📁 Project Structure

```text
CPP-Inventory-Management/
├── CMakeLists.txt        # CMake build configuration script
├── README.md             # Project documentation
├── LICENSE               # License file
├── .gitignore            # Git exclusion rules
├── inventory.h           # Data structures & function prototypes
├── inventory.cpp         # Inventory management logic & memory control
└── main.cpp              # Driver code and demonstration