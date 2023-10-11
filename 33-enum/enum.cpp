#include <iostream> 

/*
    enum used to associate words with numbers 
    small is default to 0 and the rest cont in order 
*/
enum Size {SMALL,MEDIUM,LARGE}; 

int main() 
{
    Size mySize = LARGE; 

    switch (mySize)
    {
    case SMALL:
        std::cout << "SMALL \n"; 
        break;
    case MEDIUM:
        std::cout << "MEDIUM \n"; 
        break;    
    case LARGE:
        std::cout << "LARGE \n"; 
        break;
    default:
        std::cout << "error\n"; 
        break;
    }
}