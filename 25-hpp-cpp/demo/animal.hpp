#include <iostream>
#include <string> 

class Animal 
{
public: 
    Animal(std::string name, int weight);
    void makeSound(); 
    void displayWeight(); 
    int getWeight();
    void setWeight(int weight);

private: 
    std::string m_name; 
    int m_weight; 
}; 
