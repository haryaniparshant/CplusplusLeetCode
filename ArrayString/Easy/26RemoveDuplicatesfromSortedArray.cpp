#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    if (nums.empty()) return 0;
    int j = 1;
    for(int i = 1; i < nums.size(); i++) 
    {
        if(nums[i] != nums[j-1]) 
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
        

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int newLength = removeDuplicates(nums);
    
    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}