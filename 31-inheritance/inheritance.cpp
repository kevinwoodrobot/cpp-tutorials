#include <iostream> 
#include <string> 

/*
    inheritance - used to create derived classes 
    to have 
    different implementation of function,
    add more functions, 
    reuse code 
*/


class Animal
{
public: 
    Animal(std::string name) : m_name(name) {}
    void makeSound(){ std::cout << "hmmm \n"; }

private: 
    std::string m_name; 
}; 

class Dog : Animal 
{
public: 
    Dog (std::string name, int nBones) : Animal(name), m_nBones(nBones) {}
    void makeSound() { std::cout << "woof \n"; }
    void eatBones() {std::cout << "eating " << m_nBones << " bones \n"; }
private: 
    int m_nBones; 
}; 

int main() 
{
    Animal myAnimal("nicky"); 
    myAnimal.makeSound(); 
    Dog myDog("nicky",2); 
    myDog.makeSound(); 
    myDog.eatBones(); 

}