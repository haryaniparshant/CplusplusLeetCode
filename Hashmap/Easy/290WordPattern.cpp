#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> p2s;
    unordered_map<string, string> uniquewords;
    vector<string> words;

    for(int i = 0; i < s.size(); i++){
        string word = "";
        while(i < s.size() && s[i] != ' '){
            word += s[i];
            i++;
        }
        words.push_back(word);
    }

    if(words.size() != pattern.size()){
        return false;
    }

    for(int i = 0; i < pattern.size(); i++){
        if(p2s.find(pattern[i]) != p2s.end()){
            if(p2s[pattern[i]] != words[i]){
                return false;
            }
        } else {
            if(uniquewords.find(words[i]) != uniquewords.end()){
                return false;
            }
            uniquewords[words[i]] = pattern[i];
            p2s[pattern[i]] = words[i];
        }
    }

    return true;
}
        

int main() {
    string s = "abba", t = "dog cat cat dog";
    cout << wordPattern(s, t) << endl;
    return 0;
}