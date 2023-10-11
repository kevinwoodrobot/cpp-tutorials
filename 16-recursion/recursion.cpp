#include <iostream> 

void printNumber(int i)
{  
    if (i > 0)
        printNumber(i-1); 
        std::cout << i << "\n"; 
}

int main() 
{
    printNumber(3); 

    return 0; 
}