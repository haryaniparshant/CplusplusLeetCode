#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isPalindrome(string s) {
    if(s.empty()) return true; 
        int left = 0, right = s.size() - 1;
        while(left < right) 
        {
            if (!isalnum(s[left]))
            {
                left++;
            }
            else if(!isalnum(s[right])){
                right--;
            }
            else 
            {
                if(tolower(s[left]) != tolower(s[right])) 
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
}
        

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}