#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    if(i < s.length()) {
        return false;
    }
    return true;
}
        

int main() {
    string s = "abc", t = "ahbgdd";
    cout << isSubsequence(s, t) << endl;
    return 0;
}