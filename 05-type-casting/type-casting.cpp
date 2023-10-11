#include <iostream> 
/*
    type casting is used to convert one data type to another 
*/
int main() 
{ 

    float myFloat = 1.2; 

    // explicit type conversion (c-style)
    int myInt = (int)1.2; 

    // explicit type conversion using static_cast (function style)
    int myInt2 = static_cast<int> (myFloat); 

    // implicit type casting 
    int myInt3 = myFloat; 


    // Note: 
    // generally better to explicity type cast you values 
    // to be clear and avoid causing any confusion

  

    return 0; 
}