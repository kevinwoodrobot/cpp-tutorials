#include <iostream> 

int main() 
{
    try 
    {
        int foodCalories = -100;
        if (foodCalories > 0) 
        {
            std::cout << "Good job for eating! \n";
        } 
        else 
        {
            throw foodCalories;
        }
    }
    catch (int foodCalories) 
    {
        std::cout << "Exception: Give me your secret recipe! \n"; 
    }

    return 0; 
}
