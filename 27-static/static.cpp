#include <iostream> 


// static variables give local scope
void increment()
{
    static int i = 0; // declared and initialized only once 
    i++; 
}

class Math
{
public: 
    /*
        static variable can be used without instance of class 
    */
    static int num; 

    /*
        static function can be called without creating instance of class 
        doesn't use member variables 
    */
    static int add(int x1, int x2)
    {
        // m_var = 1; // error can't reference private var in static func 
        return x1 + x2; 
    }

private: 
    int m_var; 
}; 


int Math::num = 1; 

int main() 
{

    increment(); 
    increment(); 


    int answer = Math::add(1,2); 
    
    std::cout << Math::num << "\n"; 
     
    
    return 0; 
}

