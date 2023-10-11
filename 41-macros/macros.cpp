/*
    macros uses the define keyword 
        - to define constant values 
        - to define a function or any text, line of code etc 
        (define replaces word with number instead of variable being used) 
        - conditional compilation

        - no type checking 
        - all caps 
   
*/

#include <iostream>

#define GOLDEN_RATIO 1.618 
/*
    conditional compilation 
    test by commenting and uncommenting this out 
*/
#define PRINT_RESULT  
#define COUT_NUM(x) std::cout << x << "\n"

int main() 
{
    float width = 1.2; 
    float height = 1.2*GOLDEN_RATIO; 

#ifdef PRINT_RESULT
    // std::cout << height << "\n"; 
    COUT_NUM(height); 
#endif 

    return 0; 
}