#include <iostream> 
#include <string> // need to include this to use strings 


int main()
{
    // declare string 
    std::string myFirstName = "kevin"; 

    // get the length 
    int length = myFirstName.length(); 

    // access character of a string 
    char letter = myFirstName[0]; 

    std::string myLastName = "wood"; 
    std::string myFullName = myFirstName + myLastName; 

    /*
        function: substr 
        paramter: 
            start index, int  
            end index, int 
        return: 
            the sub string, std::string 
    */
    std::string subString = myFullName.substr(0,5);

    // return index position of where the word shows up 
    unsigned int myIndex = myFullName.find("wood"); 

    // string to integer 
    std::string myNumberString = "3"; 
    int myNumberInt = stoi(myNumberString); 

    return 0; 
}