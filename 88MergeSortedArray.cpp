#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    m--;
    n--;
    
    while(m >= 0 && n >= 0){
        if(nums1[m] > nums2[n]){
            nums1[m + n + 1] = nums1[m];
            m--;
        }
        else{
            nums1[m + n + 1] = nums2[n];
            n--;
        }
    }
    while(n >= 0){
        nums1[m + n + 1] = nums2[n];
        n--;
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}