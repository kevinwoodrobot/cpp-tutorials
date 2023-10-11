#include <iostream> 


int main() 
{
    // declare int array
    int myIntArray[3] = {1,2,3}; 

    // declare float array 
    float myFloatArray[3] = {1.123, 2.342, 0.3423}; 

    // uninitialized array can have random values 
    int myResultsMayVary[3]; 

    // can initialize them yourself 
    for (int i = 0; i < 3; i++)
    {
        myResultsMayVary[i] = 0; 
    }

    // initialized to all zeros using initializer 
    int initializerArray[3] = {0}; 

    // access single element 
    int firstNum = myIntArray[2]; 

    // array sizes 
    int totalByteSize = sizeof(myIntArray); // 4*3 = 12 bytes 
    int unitByteSize = sizeof(myIntArray[0]); // int is 4 bytes  
    int length = totalByteSize/unitByteSize; 

    // int mySize = 5; // error not const 
    const int mySize = 5; 
    int myArray[mySize]; 

    // 2d array 
    int myMatrix[3][3] = { {1,2,3},
                           {4,5,6},
                           {7,8,9}};

    // access element in 2d array 
    int middle = myMatrix[1][1]; 

    // print 2d array 
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << myMatrix[i][j] << " "; 
        }
        std::cout << "\n"; 
    }

    return 0; 
}