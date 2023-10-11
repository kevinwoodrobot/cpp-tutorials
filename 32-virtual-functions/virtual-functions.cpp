/*
    virtual function is a function that has to be implemented 
    in the derived class 

    virtual just means it will be implemented in the derived class 

    pure virtual means it has no implementation in the base class 
    and must be implemented in the derived class 

    abstract base class has one or more pure virtual functions
    all pure virtual functions need to be implemented 

    abstract base class cannot be instantiated 

    override keyword shows that the function implements 
    a virtual function 
*/

#include <iostream> 

/* Normal Base class*/
// class Animal
// {
// public: 
//     Animal() {}
//     virtual void makeSound() {std::cout << "hmm"; }
// private: 

// }; 

/* Abstract Base Class with Pure Virtual*/
class Animal
{
public: 
    virtual void makeSound() = 0; // pure virtual

private: 

}; 

class Dog : Animal
{
public: 
    Dog() {} 
    /* if make sound is not implemented with pure virtual 
    function, it will not build */ 
    void makeSound() override {std::cout<< "woof \n";} 

}; 


int main()
{
    Dog myDog; 
    myDog.makeSound(); 
}