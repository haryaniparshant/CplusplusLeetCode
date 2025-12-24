#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int findmax(vector<int> dataSamples){
    int maxnumber = -32565;
    for (const int& number : dataSamples)
    {
        if(number > maxnumber){
            maxnumber = number;
        }
    }
    return maxnumber;
}
int findMinBatchSize(vector<int> dataSamples, int maxBatches) {
    int minbatchsize = 1;
    int maxbatchsize = findmax(dataSamples);
    int result = -1;
    while(minbatchsize <= maxbatchsize){
        int mid = minbatchsize + (maxbatchsize - minbatchsize) / 2;
        int batches = 0;
        for(const int& number : dataSamples)
        {
            batches+= (number + mid - 1) / mid;
            if(batches > maxBatches){
                break;
            }
            
            if(batches <= maxBatches){
                result = mid;
                maxbatchsize = mid - 1;
            }
            else{
                minbatchsize = mid + 1;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> dataSamples {3,2,4,5};

    
    cout << findMinBatchSize(dataSamples, 10) << endl;
    return 0;
}
