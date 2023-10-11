#include <iostream> 


class Node
{
public: 
    Node(int value) 
    {
        m_value = value;
        m_left = nullptr; 
        m_right = nullptr; 
    }

    int m_value; 
    Node* m_left;
    Node* m_right; 
}; 

class BinarySearchTree
{
public: 
    BinarySearchTree() {m_root = nullptr; } 

    void insert(int value)
    {
        if (m_root == nullptr)
        {
            m_root = new Node(value); 
            return; 
        }

        Node* cur = m_root; 

        while (true)
        {
            if (value == cur->m_value)
                return; 
            if (value < cur->m_value)
            {
                if (cur->m_left != nullptr)
                    cur = cur->m_left; 
                else
                {
                    cur->m_left = new Node(value); 
                    return; 
                }
            }
            else if (value > cur->m_value)
            {
                if (cur->m_right != nullptr)
                    cur = cur->m_right; 
                else
                {
                    cur->m_right = new Node(value); 
                    return; 
                }
            }
            
        }

    }

    void inOrderPrint(Node* curNode)
    {
        if (curNode == nullptr)
            return;
        inOrderPrint(curNode->m_left);
        std::cout << curNode->m_value << "\n"; 
        inOrderPrint(curNode->m_right); 
    }

    bool find(int value, Node* curNode)
    {
        if (curNode == nullptr)
            return false; 
        else if (value == curNode->m_value)
            return true;
        else if (value < curNode->m_value)
            return find(value,curNode->m_left); 
        else    
            return find(value,curNode->m_right); 
    }
 
    int findMin(Node* curNode)
    {
        if (curNode == nullptr)
            return -9999; 
        
        while (curNode->m_left != nullptr)
            curNode = curNode->m_left; 

        return curNode->m_value; 
    }

    int findMax(Node* curNode)
    {
        if (curNode == nullptr)
            return -9999; 
        
        while (curNode->m_right != nullptr)
            curNode = curNode->m_right; 

        return curNode->m_value; 
    }

    Node* m_root; 
}; 



int main()
{
    BinarySearchTree bst; 
    bst.insert(1); 
    bst.insert(2); 
    bst.insert(3);
    bst.inOrderPrint(bst.m_root); 
    bool found = bst.find(11,bst.m_root); 
    int max = bst.findMax(bst.m_root);
    int min = bst.findMin(bst.m_root);


    return 0;  
}