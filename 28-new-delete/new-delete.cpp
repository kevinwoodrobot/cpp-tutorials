#include <iostream> 
#include <string> 
#include <vector> 

class Animal
{
public: 
    Animal(std::string name) : m_name(name) {}
    ~Animal() {std::cout << "animal destroyed \n"; }
    std::string getName()
    {
        return m_name; 
    }

private: 
    std::string m_name; 
}; 

class Zoo
{
public: 
    Zoo() {} 
    ~Zoo() 
    {
        for (int i = 0; i < m_animals.size(); i++)
        {
            delete m_animals[i]; 
        }
    } 
    void addAnimal(std::string name)
    {
        m_animals.push_back(new Animal(name)); 
    }

private: 
    std::vector<Animal*> m_animals; 
}; 

int main() 
{
    Animal* animalPtr = new Animal("mogie");
    // std::string name = (*animalPtr).getName(); 
    std::string name = animalPtr->getName(); 
    delete animalPtr; //destructor is called, default destructor called if not implemented

    Animal* animalArray = new Animal[3]{Animal("momo"),Animal("angie"),Animal("mogie")}; 
    delete[] animalArray; 

    // using string literals 
    // Animal* animalArray = new Animal[3]{std::string{"momo"},std::string{"angie"},std::string{"mogie"}}; 
    
    // constructor with more than one input use {var1, var2}
    // Animal* animalArray = new Animal[3]{{"momo",1} ,{"angie",2} ,{"mogie",3}}; 
    Zoo theWoods; 
    theWoods.addAnimal("momo"); 
    theWoods.addAnimal("angie"); 
    theWoods.addAnimal("mogie"); 

    return 0; 
}