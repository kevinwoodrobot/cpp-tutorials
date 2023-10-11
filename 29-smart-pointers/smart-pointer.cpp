#include <iostream> 
#include <memory> 

/*
    smart pointers - handles the lifetime of the pointer 
    Will delete the pointer for you when pointer goes out of scope 
    or when program ends 

    unique pointer - can only point to one  
    shared pointer - more than one, will track how many copies 
    weak pointer - like shared ptr, but no count tracked and 
    can check if it has been expired 

    comment on when the destructor is called 
*/

class Animal
{
public: 
    Animal() {}
    ~Animal() {std::cout << "animal destroyed \n";}
    void doSomething() {std::cout << "zzz\n";}
private: 
}; 

void testUniquePointer()
{

}


int main() 
{
    // Test 1, normal pointer 
    // Test 1, normal pointer - destructor not called when out of scope, need to call delete 
    Animal* normalPtr = new Animal; 

    // Test 2, unique pointer 
    std::unique_ptr<Animal> uniquePtr = std::make_unique<Animal>();

    /*can't make copy because if one unique ptr dies 
    the copy will not point to anything and will cause problems */ 
    // std::unique_ptr<Animal> uniquePtr2 = animalPtr; 

    /* but can move pointer to another pointer*/
    auto uniquePtr2 = std::move(uniquePtr); 

    std::cout << "after testUniquePointer\n"; 
    // comment on how destructor is called after line above 

    // Test 3 shared pointer 
    std::shared_ptr<Animal> sharedPtr = std::make_shared<Animal>(); 
    std::shared_ptr<Animal> sharedPtr2; 
    sharedPtr2 = sharedPtr; 
    auto count = sharedPtr.use_count(); 
    std::cout << count  << "\n"; 
    std::cout << "after testSharedPointer\n"; 


    // Test 4 weak pointer 
    std::shared_ptr<Animal> sharedPtr = std::make_shared<Animal>(); 
    std::weak_ptr<Animal> weakPtr = sharedPtr; 
    sharedPtr.reset(); // kills pointer 
    weakPtr.lock()->doSomething(); // need lock to acess shared pointer 
    if(weakPtr.expired())
        std::cout << "expired \n"; 

    
    return 0; 
}

