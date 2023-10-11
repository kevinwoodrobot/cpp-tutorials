#include <iostream> 

/*
    function

    structure is (return type) (function name) (input arg)
*/

// function with two parameters 
// float average(float num1, float num2)
// {
//     return (num1 + num2)/2; 
// }

// function with default parameter 
float average(float num1, float num2=2)
{
    return (num1 + num2)/2; 
}

// void function type 
void printResults(float result)
{
    std::cout << result << "\n"; 
}
// function overloading 
// new function definition with 3 input arguments 
float average(float num1, float num2, float num3)
{
    return (num1 + num2 + num3)/3; 
}

int main() 
{ 

    float myAvg = average(1,2,3); 
    printResults(myAvg); 
    return 0; 

}