#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()) return false;
    unordered_map<char, int> charhash;
    unordered_map<char, int> charhash2;
    int listsize = t.length();
    for(int i = 0; i < listsize; i++){
        if(charhash.find(s[i]) != charhash.end()){
            if(charhash[s[i]] != t[i]) return false;
        }
        else{
            if(charhash2.find(t[i]) != charhash2.end()){
                return false;
            }
            charhash[s[i]] = t[i];
            charhash2[t[i]] = s[i];
        }
    }
    return true;
}
        

int main() {
    string s = "paper", t = "title";
    cout << isIsomorphic(s, t) << endl;
    return 0;
}