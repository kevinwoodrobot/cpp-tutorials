#include <iostream> 

/*
    const keyword means the value cannot be changed 
    can be using in 
    - variables 
    - const input argument to a function
    - const function need to know classes (discuss later)
*/

void funcWithConstArg(const int fixedValue)
{
    // fixedValue++; // error
    std::cout<< fixedValue << "\n"; 
}

// must be inside classes, maybe discuss another video 
// void constFunction() const
// {

// }

int main() 
{
    // const variable 
    const int leaveMeAlone = 0; 
    // leaveMeAlone++; // error can't modify const value 

    // const input argument to a function 
    // input argument that passes into the function does not have to be const
    // just means the function will not modify the value
    int num = 7; 
    funcWithConstArg(num);

    // const function means can't modify any object or value within its scope 


    return 0; 
}