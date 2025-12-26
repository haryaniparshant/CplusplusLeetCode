#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

bool CanConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> charCount;
    for (char c : magazine) {
        if(charCount.find(c) != charCount.end()) {
            charCount[c]++;
            continue;
        }
        charCount[c] = 1 ;
    }
    for (char c : ransomNote) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return false;
        }
        charCount[c]--;
    }
    return true;
}
        

int main() {
    string s = "aa", t = "ab";
    cout << CanConstruct(s, t) << endl;
    return 0;
}