# C++ Dynamic Memory Allocation Task

This repository contains a C++ program that demonstrates how to perform dynamic memory allocation for variables of any data type, assign values, print values and memory addresses, and finally deallocate the dynamically allocated memory.

## Problem Statement

The objective is to implement a function named `dynamicMemoryAllocation` that:
- Dynamically allocates memory for a variable of any data type.
- Assigns a value to the dynamically allocated memory.
- Prints the value and the memory address of the dynamically allocated variable.
- Deallocates the memory after use.

## How the Solution Works

### Key Steps:
1. **Dynamic Allocation:** Memory for the variable is dynamically allocated using the `new` keyword.
2. **Assigning Values:** The value of the dynamically allocated variable is set.
3. **Printing:** The program prints both the value and memory address of the variable.
4. **Deallocation:** Finally, the memory is deallocated using the `delete` keyword to prevent memory leaks.

### Example Usage:
In the `main` function, we have used an integer variable as an example and passed it to the `dynamicMemoryAllocation` function, but the function is templated, meaning it can accept any data type.

### Code Example:

```cpp
#include <iostream>

// Template function for any data type
template <typename T>
void dynamicMemoryAllocation(T value) {
    T* ptr = new T;  
    *ptr = value;  
    std::cout << "Value: " << *ptr << std::endl;
    std::cout << "Memory Address: " << ptr << std::endl;
    delete ptr;
}

int main() {
    int exampleValue = 10;
    dynamicMemoryAllocation(exampleValue);
    return 0;
}
