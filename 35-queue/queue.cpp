/*
    queue - data structure 
        first in, first out 

        breadth first search 
    
*/
#include <iostream> 
const int maxSize = 50; 

class Queue
{
public: 
    Queue() 
    {
        m_last = 0;
        m_first = 0; 
    }


    // insert in the back 
    void enqueue(int value) 
    {
        m_queue[m_last] = value;
        if (m_last >= maxSize) // reset 
        {
            m_last = 0; 
        } 
        else
        {
            m_last++; 
        }
        
    }

    // removes and return the first item 
    int dequeue()
    {
        if (isEmpty())
        {
            return -99999; //error
        }
        else
        {
            return m_queue[m_first++]; 
        }
   
    }

    // print queue from first to last 
    void print()
    {
        if (isEmpty())
        {
            std::cout << "Empty Queue!\n"; 
            return; 
        }

        int i = m_first; 
        while(i != m_last)
        {
            std::cout << m_queue[i] << "\n"; 
            i = (i+1) % maxSize; 
        }
    }
     
    // check if queue is empty 
    bool isEmpty() 
    {
        if (m_last == m_first)
        {
            return true; 
        }
        else
        {
            return false; 
        }
    }


private: 
    int m_queue[maxSize]; 
    int m_last; 
    int m_first; 

}; 

int main()
{
    Queue myQueue; 
    bool status = myQueue.isEmpty(); 
    myQueue.enqueue(1); 
    myQueue.enqueue(2); 
    myQueue.dequeue(); 
    myQueue.enqueue(3); 
    myQueue.print(); 

    return 0; 
}


