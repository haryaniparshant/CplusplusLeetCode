#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }
    unordered_map<char, int> charCount;
    for (char &c : s) {
        charCount[c]++;
    }
    for (char &c : t)
    {
        if(charCount.find(c) == charCount.end() || charCount[c] == 0){
            return false;
        }
        charCount[c]--;
    }
    for(auto it : charCount){
        if(it.second != 0){
            return false;
        }
    }
    return true;
}

int main() {
    string s = "rat", t = "tar";
    cout << isAnagram(s, t) << endl;
    return 0;
}
