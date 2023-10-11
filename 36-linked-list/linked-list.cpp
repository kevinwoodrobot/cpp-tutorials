/*
    linked list is a data structure that has 
        - nodes with a value and a pointer to next node 

    linked list good for 
        - removing item from middle 
        - inserting item in front 

    array is better at 
        - accessing value at specific index (linked list need to traverse down all nodes)
        - easier to program 
*/
#include <iostream> 

class Node
{
public: 
    Node(int value,Node* next) 
    {
        m_value = value;
        m_next = next; 
    }

    int m_value;
    Node* m_next; 
}; 

class LinkedList
{
public: 
    LinkedList() 
    {
        m_head = nullptr; 
    }

    void addToFront(int value)
    {
        Node* tempNode = new Node(value,m_head); 
        m_head = tempNode; 
    }

    void addToBack(int value)
    {
        Node* prevLastNode = m_head; 

        while (prevLastNode != nullptr)
        {
            prevLastNode = prevLastNode->m_next; 
        }

        Node* lastNode = new Node(value,nullptr); 

        prevLastNode->m_next = lastNode; 

    }

    void addNode(int value)
    {
        if (m_head == nullptr)
        {
            addToFront(value); 
        }
        else if (value < m_head->m_value)
        {
            addToFront(value);
        }
        else
        {
            Node* tempNode = m_head; 
            while (tempNode->m_next != nullptr)
            {
                if (value > tempNode->m_value && value < tempNode->m_next->m_value)
                    break; 
                tempNode = tempNode->m_next; 
            }

            Node* newNode = new Node(value,tempNode->m_next);
            tempNode->m_next = newNode;  
        }
    }

    void printList()
    {
        Node* tempNode = m_head; 
        while (tempNode != nullptr)
        {
            std::cout << tempNode->m_value << "\n";
            tempNode = tempNode->m_next; 
        }
    }

    bool isEmpty() 
    {
        if (m_head == nullptr)
        {
            return true;
        }
        else
        {
            return false; 
        }
    }

    void removeNode(int value)
    {
        Node* tempNode = m_head; 

        if (tempNode->m_value == value)
        {
            m_head = m_head->m_next; 
        }

        while (tempNode != nullptr)
        {
            if (tempNode->m_next != nullptr && tempNode->m_next->m_value == value)
                break; 

            tempNode = tempNode->m_next; 
        }

        // point to the next next node (skipping current) 
        if (tempNode != nullptr)
            tempNode->m_next = tempNode->m_next->m_next; 
    }

    bool findNode(int value)
    {
        Node* tempNode = m_head; 
        while (tempNode != nullptr)
        {
            if (tempNode->m_value == value)
                return true; 
            tempNode = tempNode->m_next; 
        }

        return false; 
    }

private: 
    Node* m_head; 
}; 

int main() 
{
    LinkedList myLL; 
    myLL.addNode(1); 
    myLL.addNode(2); 
    myLL.addNode(3); 
    myLL.removeNode(2);
    myLL.printList(); 
    bool found = myLL.findNode(11); 

    return 0; 
}