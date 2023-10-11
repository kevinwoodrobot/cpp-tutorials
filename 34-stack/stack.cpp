#include <iostream> 
/*
    stack - first in, last out data structure

    like stacking plates 
    good for depth first search applications 

*/
const int maxSize = 50; 

class Stack
{
public: 
    Stack() {m_top = 0;}

    // adds value to stack 
    void push(int value)
    {
        m_stack[m_top] = value; 
        m_top++; 
    }

    // removes value on top of stack 
    int pop()
    {
        if (m_top == 0)
        {
            return -9999999; 
        }
        else
        {
            m_top--;
            return  m_stack[m_top]; 
        }

    }

    bool isEmpty()
    {
        if (m_top == 0)
            return true; 
        else
            return false; 
    }

    // print from top to bottom (i.e. end of array to beginning)
    void print()
    {
        if (m_top == 0) 
        {
            std::cout << "Empty Stack! \n"; 
            return; 
        }

        int i = m_top-1;
        while(i >= 0)
        {
            std::cout << m_stack[i] << "\n"; 
            i--; 
        }
    }

private: 
    int m_stack[maxSize]; 
    int m_top; 
};

int main() 
{
    Stack myStack; 
    bool statusStart = myStack.isEmpty(); 
    myStack.push(1); 
    myStack.push(2); 
    // myStack.print(); 
    myStack.pop(); 
    myStack.push(3); 
    myStack.print(); 
    int topVal = myStack.pop(); 
    bool statusEnd = myStack.isEmpty(); 


    return 0; 
}