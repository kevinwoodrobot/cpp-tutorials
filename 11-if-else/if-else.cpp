#include <iostream> 
    
int main() 
{
    /*
        condition statements 
            >
            < 
            >= 
            <= 
            == 
            != 

        combining conditions 
            &&
            ||

        if (true)

        else if (true)

        else 
    */
   
    // if condition inside is true, execute statement 
    // one line if statements don't need {} 
    if (true)
        std::cout << "true\n"; 

    // example using if, else if, and else 
    int myAge = 30; 

    if (myAge > 0 && myAge < 21)
    {
        std::cout << "you're too young to drink!\n";
    }
    else if (myAge >= 21  && myAge < 35)
    {
        std::cout << "start planning for retirement\n";
    }
    else
    {
        std::cout << "it's ok, you're stil young \n";
    }

    /*
        ternary operator - compact way of writing 
        if statements 
    */ 

    // longer way without ternary operator 
    int broAge = 20; 
    int sisAge = 25; 
    int olderAge = 0; 
    
    if (broAge > sisAge) 
    {
        olderAge = broAge; 
    }
    else
    {
        olderAge = sisAge; 
    }

    // compact way with ternary operator 
    olderAge = 0; // reset 
    olderAge = (broAge > sisAge) ? broAge : sisAge; 

    return 0; 


}