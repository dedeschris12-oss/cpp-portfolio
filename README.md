# cpp-portfolio
C++ Data Structures & Software Engineering Portfolio

A compilation of clean, performance-optimized C++ console applications developed in Xcode. This repository serves to demonstrate a strong foundational grasp of memory management, algorithmic complexity, object-oriented design patterns, and rigorous user-input stream validations.

📂 Featured Applications

1. Algorithmic Array Equivalency Evaluator (/array-equivalence-evaluator)

An optimized sorting-independent lookup algorithm designed to verify if two dynamic arrays contain identical frequency distributions of elements.

Core Concepts: Nested loop lookup mechanics, frequency counters, and optimization parameters to avoid the performance overhead of prior array sorting operations ($O(N^2)$ benchmark testing).

Key Achievement: Programmed flexible, logic-driven comparison protocols that account for duplicate values without altering underlying memory layouts.

2. Title-Case String Parsing Engine (/title-case-string-parser)

A dynamic text processing application that reads, sanitizes, and systematically transforms user-inputted console strings into standardized Title-Case syntax.

Core Concepts: Direct pointer-offset addressing, state-tracking flag systems, and memory-safe buffer boundaries.

Key Achievement: Safely traversed characters using raw pointer increments while gracefully stripping leading, trailing, and duplicate interior spacing to protect system memory allocations.

3. Student Records Database Management System (/student-records-system)

A robust command-line structural records utility to read, store, dynamically resize, and query database lists.

Core Concepts: Structured data design (struct), runtime dynamic array scaling (std::vector), and rigorous keyboard input validation patterns.

Key Achievement: Solved stream vulnerability issues by writing dedicated error handling routines to flush corrupt buffers (std::cin.clear() and std::cin.ignore()), safeguarding the program from terminal crashes on invalid inputs.

🛠️ Technical Specifications & Toolchain

Language Standard: C++11 / C++14

Compiler & Environment: Apple Clang / LLVM via Xcode Terminal Tools

Operating System Environment: macOS / POSIX Compliance

🔒 Focus on Secure & Clean Code Practices

Memory Safety: Implementation of modern memory boundaries, ensuring raw pointer iterations do not trigger segmentation faults or out-of-bounds pointer leaks.

Stream Integrity: Complete elimination of infinite-loop keyboard inputs by cleaning invalid buffer characters before they disrupt runtime memory.

Algorithmic efficiency: Prioritized lightweight data structures over bulky objects for simple, performance-first operations.
