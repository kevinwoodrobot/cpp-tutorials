#include <iostream> 
#include <map> 
#include <string> 

/*
    maps - data structure and has a key associated with a value 
*/


int main() 
{
    // create map 
    std::map<std::string, int> myMap1; 
    myMap1["kevin"] = 123; 
    myMap1["john"] = 32; 
    myMap1["amy"] = 21; 

    // create map other way, all at once 
    std::map<std::string, int> myMap2 = 
    {
        {"kevin",123},
        {"john",32},
        {"amy",21},
    }; 

    // access value from key 
    int val1 = myMap1.at("kevin"); // good for exception handling 
    int val2 = myMap1["kevin"]; 
    
    // other ways to add 
    myMap1.insert({"mark",23}); // insert makes a copy 
    myMap1.emplace("jose",11); // emplace construct value in place 

    // remove 
    myMap1.erase("john"); 

    for (const auto& element : myMap1)
    {
        std::cout << element.first << " : " << element.second << "\n"; 
    }

    auto it = myMap1.find("a"); 
    if (it == myMap1.end())
    {
        std::cout << "Not found!\n"; 
    }
    else
    {
        std::cout << "Found! \n"; 
    }



    return 0; 
}
