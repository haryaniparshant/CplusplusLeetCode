#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isPalindrome(string s) {
    if(s.empty()) return true; 
    vector <char> filtered;
    for(char c : s) 
    {
        if(isalnum(c)) 
        {
            filtered.push_back(tolower(c));
        }
    }
    s = string(filtered.begin(), filtered.end());
    cout << s << endl;
    int left = 0, right = s.size() - 1;
    while(left < right) 
    {
        if(s[left++] != s[right--]) 
        {
            return false;
        }
    }
    return true;
}
        

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    return 0;
}