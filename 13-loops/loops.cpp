#include <iostream> 

int main() 
{ 

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "\n"; 
    }

    int k = 0; 
    while (k < 10)
    {
        std::cout << k << "\n"; 
        k++; 
    }
    
    // do while loops will always execute at least one 
    // even if condition is not met 
    int j = 0; 
    do
    {
        std::cout << j << "\n"; 
    } while (j < 0);
    

    return 0; 
}