#include <iostream>

// Template function to handle any data type
template <typename T>
void dynamicMemoryAllocation(T value) {
    // Dynamically allocate memory for the variable
    T* ptr = new T; 
    
    // Assign a value to the dynamically allocated variable
    *ptr = value;  
    
    // Print the value and memory address of the dynamically allocated variable
    std::cout << "Value: " << *ptr << std::endl;
    std::cout << "Memory Address: " << ptr << std::endl;
    
    // Deallocate the dynamically allocated memory
    delete ptr;
}

int main() {
    // Example variable
    int exampleValue = 10;
    
    // Call the function with an example variable
    dynamicMemoryAllocation(exampleValue);
    
    return 0;
}
