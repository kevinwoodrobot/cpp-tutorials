#pragma once 

#include <string> 

class Animal 
{
public: 
    Animal(std::string name, int weight); 

private: 
    std::string m_name; 
    int m_weight; 

}; 
