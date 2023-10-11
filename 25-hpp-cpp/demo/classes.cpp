#include <iostream>
#include <string> 


int main() 
{
    Animal mogie("mogie",10); 
    mogie.makeSound(); 
    int weight = mogie.getWeight(); 
    mogie.displayWeight(); 
    mogie.setWeight(12); 
    mogie.displayWeight(); 

    return 0; 
}