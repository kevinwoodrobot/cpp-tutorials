#include <iostream> 
#include <algorithm> // will talk about later, need for example at the end 
#include <vector> // will talk about later, need for example at the end 

/*
    lambda 
        - anonymous functions 
        - compact way of defining a function
        - good for 1 time or few time usage of function
        - passing in a function to a function


    syntax:
    [capture](parameters) -> return_type { function body }

    capture - define any variables in the scope of program
*/

int main() 
{
    // using lambda with a name 
    // use auto OR float (*average)(float, float) 
    // (*average)(float, float)  = [](float num1, float num2) -> float {return (num1 + num2)/2;}; 
    auto average = [](float num1, float num2) -> float {return (num1 + num2)/2;}; 
    float myAvg = average(1,2); 

    // calling the lambda function without naming it 
    // note the (1,2) at the end is the input argument 
    float myAvg2 = [](float num1, float num2) -> float {return (num1 + num2)/2;}(1,2); 

    // calling lambda function directly with variables in 
    // the [ capture ] and with a name to the function
    float x = 1;
    float y = 2; 
    auto average2 = [x,y]() -> float {return (x + y)/2;}; 
    float myAvg3 = average2(); 

    // calling lambda directly with variables in the [ capture ]
    float myAvg4 = [x,y]() -> float {return (x + y)/2;}(); 

    // passing in function to function 
    std::vector<int> unorderedNums {3,2,5,1}; 
    std::sort(unorderedNums.begin(),unorderedNums.end(),
    [](int num1, int num2) {return num1 > num2;}); 

    for (int i : unorderedNums)
        std::cout << i << "\n"; 

    return 0; 
}


