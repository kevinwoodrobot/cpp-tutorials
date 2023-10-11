#include <iostream> 

/*
    pass by reference is used to 
*/

/*
    function input argument is pass by value 
    so makes a copy of the variable and increments the copy

    When we exit the function, the increment to the copy 
    becomes out of scope and disappears 
*/
void incrementPassByValue(int num)
{
    num++; 
}

/*
    function input argument is pass by reference
    so function receives a reference to the memory location. 
    Will reference the variable directly without making a copy

    Will modify the variable and see changes when exit function 
*/
void incrementPassByRef(int &num)
{
    num++; 
}

int main() 
{
    int myNum = 0; 
    incrementPassByValue(myNum);
    incrementPassByRef(myNum);  

    return 0; 
}