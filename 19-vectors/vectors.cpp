#include <iostream> 
#include <vector> 

/*
    vectors are dynamic arrays 
        - lets you change the size 
        - can add and remove items easily 
*/

int main() 
{ 
    // declare empty vector 
    std::vector<int> emptyVector(5);

    // initialize vector 
    std::vector<int> happyVector = {1,2,3}; 

    // access element 
    int vectorElem = happyVector[2]; 

    // modify element 
    happyVector[0] = 7; 

    // add elements! benefit of dynamic array! 
    happyVector.push_back(10);

    // remove element in back 
    happyVector.pop_back(); 

    // erase element in middle using iterator 
    happyVector.erase(happyVector.begin() + 1);

    // insert in middle 
    happyVector.insert(happyVector.begin() + 1, 10); 

    // print out elements 
    for (int i = 0; i < happyVector.size(); i++)
    {
        std::cout << happyVector[i] << "\n"; 
    }

    // can also loop using range based loop
    for (int curElem : happyVector)
    {
        std::cout << curElem << "\n"; 
    }

    return 0; 
}