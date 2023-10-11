#include <iostream> 

/*
    struct to hold a group of variables 
*/

// creating a struct 
struct RunningData
{
    float avgSpeed; 
    float distance; 
    float time; 
    float heartRate; 
}; 

RunningData performanceBoost(RunningData data)
{
    data.avgSpeed *= 1.2; 
    data.heartRate *= 0.8; 
    data.time *= 0.8; 

    return data; 
}

int main() 
{
    // RunningData kData; 
    // kData.avgSpeed = 6; 
    // kData.distance = 6; 
    // kData.time = 60;
    // kData.heartRate = 160; 

    
    // initializing a struct 
    RunningData kData {6,6,60,160};  
    int myAvgSpeed = kData.avgSpeed; 

    RunningData kDataBetter = performanceBoost(kData); 
    int myAvgSpeedBetter = kDataBetter.avgSpeed; 

    // array of struct  
    const int nData = 2; 
    RunningData allData[nData] = 
    {
        {6,6,60,160}, 
        {6,6,60,150} 
    }; 

    for (int i = 0; i < nData; i++)
    {
        std::cout << "heart rate: " << allData[i].heartRate << "\n"; 
    }

    return 0; 
}