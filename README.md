# cpp-fundamentals-labs
![Status](https://img.shields.io/badge/Status-In%20Progress-yellow)Each lab is self-contained and includes one or more C++ source files (.cpp, .h).

Lab 1
Goal: Develop comfort with basic C++ syntax, input/output, and modular programming.
Lab1 Q1:
Prompts the user for their initials and outputs a personalized greeting.
Focus: Character I/O, console output formatting.
Lab1 Q2:
Calculates the hypotenuse of a right-angled triangle using sqrt() and pow() from the <cmath> library.
Focus: Mathematical operations, input validation, rounding.
Lab1 Q3:
Implements a modular factorial program split into three files — main.cpp, fact.cpp, and fact.h.
Focus: Function declarations, header inclusion, separate compilation.

Lab 2
Goal: Understand parameter passing mechanisms and memory access.
Lab2 Q1:
Demonstrates passing by value, reference, and pointer, showing how each affects the original variable.
Focus: Memory management, function parameters, dereferencing pointers.

Features
Clean, self-contained lab files for easy compilation and testing.
Demonstrates both procedural and modular programming styles.
Consistent use of descriptive variable names and inline documentation.
Simple mathematical and logical problems to build strong syntax foundations.
Uses fundamental C++ concepts such as:
Standard input/output (cin, cout)
Functions and scope
Header files and prototypes
Loops, conditionals, and operators
Pointers, references, and memory semantics

Skills Demonstrated
C++ Fundamentals: Data types, control structures, input/output.
Modular Programming: Header and implementation files for reusability.
Mathematical Computation: Using <cmath> functions.
Memory Management: Understanding differences between stack, references, and pointers.
Problem Decomposition: Breaking a problem into smaller, testable units.
Code Style: Consistent indentation, naming, and logical structuring.

Possible Improvements
Error Handling:
Add input validation and exception handling (try/catch) for robustness.
Documentation:
Expand comments and add brief function headers for clarity in larger labs.
Unit Testing:
Introduce automated tests with frameworks like Google Test for factorials or math outputs.
Makefile / Build Script:
Add a Makefile to automate compiling multi-file labs.
Advanced Concepts (future labs):
Classes and Objects
Templates and STL Containers
File I/O
Dynamic Memory and Smart Pointers

Project Structure
/C++-Labs/
│
├── lab1/
│   ├── q1_initials.cpp
│   ├── q2_hypotenuse.cpp
│   ├── q3_factorial/
│   │   ├── main.cpp
│   │   ├── fact.cpp
│   │   └── fact.h
│
├── lab2/
│   └── q1_pass_methods.cpp
│
└── README.md

Status
This project is actively being updated as I complete more labs throughout the semester. Future labs will include topics such as arrays, strings, file handling, and classes.
