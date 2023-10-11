#include <iostream>
#include "animal.hpp"

Animal::Animal(std::string name, int weight) : 
    m_name(name), m_weight(weight) 
{
    
}

void Animal::makeSound()
{
    std::cout << "zzzzz\n"; 
}

void Animal::displayWeight() 
{
    std::cout << m_weight << "\n"; 
}

int Animal::getWeight() 
{
    return m_weight;
}

void Animal::setWeight(int weight) 
{
    m_weight = weight;
}

