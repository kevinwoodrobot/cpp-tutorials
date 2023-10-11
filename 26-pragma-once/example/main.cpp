#pragma once 

#include <iostream> 
#include "animal.hpp"
#include "zoo.hpp"

int main() 
{
    Zoo myZoo; 
    myZoo.addAnimals(Animal("mojie",10)); 
     
    return 0; 
}


