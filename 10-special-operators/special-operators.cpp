#include <iostream> 

/*
    special operators - used to increment or decrement variables 

    two special types 
    1. postfix i++
    2. prefix ++i
    3. addition assignment operator += (see also *=, -=, /=)
*/
int main() 
{
    int i = 0; 
    i++; // increment by one, same as i = i + 1 
    i--; // decrement by one, same as i = i - 1

    // postfix vs prefix 
    int j = 0; 
    int k = 0; 
    int postfix = j++; // increments AFTER assignment
    int prefix = ++k;  // increments BEFORE assignment

    // addition assignment 
    int sum = 0; 
    sum += 5; // sum = sum + 5 
    sum -= 7; // sum = sum - 7 

    return 0; 
}