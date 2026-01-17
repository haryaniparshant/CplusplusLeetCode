#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;
    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()){
            result.push_back(numMap[complement]);
            result.push_back(i);
            return result;
        }
        numMap[nums[i]] = i;
    }
    return result;
}

int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = twoSum(nums, target);
    for(int index : result){
        cout << index << " ";
    }
    return 0;
}
