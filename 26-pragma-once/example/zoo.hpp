#pragma once 

#include "animal.hpp"
#include "vector"

class Zoo
{
public: 
    Zoo() {}; 
    void addAnimals(Animal& animal)
    {
        m_animals.push_back(animal); 
    }; 

private: 
    std::vector<Animal> m_animals; 
}; 