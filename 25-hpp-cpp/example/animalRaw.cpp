#include <iostream>
#include <string> 

class Animal 
{
public: 
    // Constructor 
    // Animal(std::string name, int weight)
    // {
    //     m_name = name; 
    //     m_weight = weight; 
    // } 

    // Constructor with initializer list 
    Animal(std::string name, int weight) : 
        m_name(name), m_weight(weight) {}

    void makeSound()
    {
        std::cout << "zzzzz\n"; 
    }

    void displayWeight() 
    {
        std::cout << m_weight << "\n"; 
    }

    int getWeight() {return m_weight;}; 
    void setWeight(int weight) {m_weight = weight;}



private: 
    std::string m_name; 
    int m_weight; 

}; 

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