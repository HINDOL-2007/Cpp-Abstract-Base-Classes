# 🏛️ C++ Abstract Base Classes & Pure Virtual Functions

## 📖 About the Project
This project explores the design pattern of Interface Enforcement in C++. By utilizing Abstract Base Classes, the architecture dictates strict structural blueprints that all derived classes must follow, ensuring consistency across polymorphic systems. 

## ✨ Features
*   **Pure Virtual Functions:** Implements the `= 0` syntax to strip base class functions of their definitions, establishing a mandatory contract for derived classes.
*   **Abstract Class Enforcement:** Validates compiler restrictions that prevent the direct instantiation of an Abstract Base Class, ensuring it operates solely as an architectural template.
*   **Polymorphic Implementation:** Dynamically routes function calls through an array of base pointers to derived objects (`Metro` and `Train`) that successfully fulfill the pure virtual contract.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Abstract Base Classes, Pure Virtual Functions, Interface Enforcement, Object-Oriented Design, Run-Time Polymorphism.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ abstract_classes.cpp -o abstract_classes
