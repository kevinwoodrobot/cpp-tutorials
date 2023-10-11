class Animal
{
public: 
    Animal(); 
    virtual void makeSound() {std::cout << "hmm"; }; 
private: 

}; 

/* Pure Virtual*/
// class Animal
// {
// public: 
//     virtual void makeSound() = 0; // pure virtual

// private: 

// }; 

class Dog : Animal
{
public: 
    Dog(); 
    void makeSound() override {std::cout<< "woof \n";} 

}; 


int main()
{
    Dog myDog; 
    myDog.makeSound(); 
}