#include <iostream> 
#include <string> 
using namespace std; 

int main() 
{
    int myInt; 
    cout << "What is your favorite number? "; // or << endl; 

    // cin uses space as delimiter 
    // getline uses /n as delimiter 
    // make sure terminal setting is set (see readme.md)
    cin >> myInt; 
    cout << "Oh..." << myInt << "...that's lame...\n"; 

    // need this between cin and getline to work 
    // this will 
    cin.ignore(10000, '\n'); 

    string myName; 
    cout << "What's your name? "; 
    getline(std::cin,myName); 
    cout << "Hi, " << myName << "!\n"; 

    // print with format specifier %.2f 
    float myNum = 2.2324; 
    printf("My number is %.2f",myNum);
    return 0; 
}