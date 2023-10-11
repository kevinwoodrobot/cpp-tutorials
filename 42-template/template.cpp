/*
    template used to allow functions to work with different variable types 
*/
#include <iostream> 

template <typename T>
T add(T num1, T num2)
{
    return num1 + num2; 
}


int main() 
{
    auto result = add(1.2,2.3); 
    std::cout << result << "\n"; 
    return 0; 
}