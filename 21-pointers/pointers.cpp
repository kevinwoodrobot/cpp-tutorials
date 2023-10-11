#include <iostream> 

// input is pointer 
void incrementPointer(int* num)
{
    (*num)++; 
}

void printArray(int* array, int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << array[i] << "\n"; 
    }
}

int main() 
{
    int num = 0; 
    int *numPtr = &num; // pointer gets address of the value
    int numValue = *numPtr; // dereferences the pointer 

    incrementPointer(numPtr); 

    // initialize pointer to null 
    int *nullPointer = nullptr; 

    if (!nullPointer)
        std::cout << "pointer is null \n"; 

    const int len = 3;
    int myArray[len] = {1,2,3}; 
    auto array1 = myArray; // an array is technically a pointer to the first memory location 
    auto array2 = &myArray[0]; 

    // array3 and array4 are the same 
    auto array3 = *(myArray + 1); // value of inital pointer incremented by one  
    auto array4 = myArray[1]; // value of second element in array 

    printArray(myArray,len); 



    return 0; 
}