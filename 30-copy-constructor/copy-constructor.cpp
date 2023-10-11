#include <iostream> 
#include <string> 
/*
    copy constructor - special constructor that 
    helps you make copy of a class object 

    typically will need it when you dynamically allocate 
    memory with new 
*/

class Animal
{
public: 
    Animal() {}

    void setName(std::string name) 
    {
        m_name = name; 
    }  

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
    Zoo(int nAnimals)  
    {
        m_nAnimals = nAnimals; 
        m_animals = new Animal[nAnimals]; 
    }

    Zoo(const Zoo& zooCopy)
    {
        m_nAnimals = zooCopy.m_nAnimals; 
        //m_aniamls = zooCopy.m_animals; // won't work! not deep copy 
        m_animals = new Animal[m_nAnimals];

        for (int i = 0; i < m_nAnimals; i++)
            m_animals[i] = zooCopy.m_animals[i]; 
    }

    Animal* getAnimals() {return m_animals;}

private: 
    int m_nAnimals; 
    Animal* m_animals; 
};


int main() 
{
    Zoo theWoods(5); 
    theWoods.getAnimals()[0].setName("momo"); 
    std::cout << theWoods.getAnimals()[0].getName() << "\n"; 
    Zoo theNewWoods = theWoods; // not making a copy, still pointing to the the same, will work if copy constructor is made 
    // can also call copy constructor as 
    // Zoo theNewWoods(theWoods); 

    theWoods.getAnimals()[0].setName("mogie");

    // notice that the name changed for the copy because it's pointing to the same zoo object 
    std::cout << theNewWoods.getAnimals()[0].getName() << "\n"; 




}

