# MemorySafetyExamples: C++ Pointer Concepts - Aliasing, Garbage, and Dangling References

This repository provides examples demonstrating key pointer-related concepts in C++:

- **Pointer Aliasing**: Demonstrates how multiple pointers can reference the same memory location, leading to shared access and modifications.
- **Memory Garbage**: Illustrates issues arising when pointers are set to `nullptr` after deallocation, potentially leading to memory leaks.
- **Dangling References**: Shows the dangers of accessing memory that has been deallocated, leading to undefined behavior.

## Overview

### Pointer Aliasing
The `createAlias()` function shows how aliasing occurs when multiple pointers point to the same memory location. Modifications through one pointer will affect all aliases.

### Memory Garbage
The `createGarbage()` function illustrates how memory can be lost when pointers are set to `nullptr` without proper deallocation, resulting in memory leaks.

### Dangling References
The `createDanglingReference()` function demonstrates the dangers of accessing memory that has been freed. Dereferencing such pointers results in undefined behavior.

## Code

All examples are included in the `main.cpp` file. Each concept is implemented in different sections within the file.

## How to Run

1. **Clone the repository:**

    ```bash
    git clone https://github.com/s-akhtar-dev/MemorySafetyExamples.git
    cd MemorySafetyExamples
    ```

2. **Compile and run the code:**

    Use a C++ compiler (e.g., `g++`):

    ```bash
    g++ -o main main.cpp
    ./main
    ```

## Notes

- **Pointer Aliasing**: Manage pointers carefully to avoid unintended side effects.
- **Memory Garbage**: Always properly manage memory to prevent leaks.
- **Dangling References**: Avoid dereferencing pointers after memory has been freed to prevent undefined behavior.

Feel free to explore the `main.cpp` file and experiment with different scenarios to understand these concepts better.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
