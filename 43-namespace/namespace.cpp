/*
    namespace - good to define your own functions or class 
    to avoid name conflict 

    example if using cmath library and using the sqrt function, 
    maybe you want to make your own sqrt function

    then use namespace to avoid name conflict 
*/


#include <iostream> 
#include <cmath>

namespace KWOODmath
{
    double sqrt(double xIn)
    {
        double xCur = xIn;
        double xNew = 1;
        double minError = 0.01; 
        double error = 1000; 
        while ( error > minError) 
        {
            xCur = (xCur + xNew) / 2;
            xNew = xIn / xCur;
            error = xCur - xNew; 
        }
        return xCur;
    }
}

int main() 
{
    std::cout << sqrt(7.0) << "\n"; 
    std::cout << KWOODmath::sqrt(7.0) << "\n"; 
    return 0; 
}