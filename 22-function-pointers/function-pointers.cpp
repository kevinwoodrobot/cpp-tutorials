#include <iostream>


void function1()
{
    std::cout << "function 1 \n"; 
}

void function2()
{
    std::cout << "function 2 \n"; 
}

int main() 
{
    // void (*funcPointer)(void) = &function1; 
    auto funcPointer = &function1; // declaring functin pointer 
    (*funcPointer)(); // calling function pointer

    // array of functions 
    void (*funcArray[2])() = {function1, function2}; 

    // loop through array of functions 
    for (int i = 0; i < 2; i++)
    {
        (*funcArray[i])(); 
    }

    return 0; 
}