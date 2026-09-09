#include <bits/stdc++.h>
using namespace std;

// Remove duplicate characters while preserving first occurrence. 
// Input: programming; output: progamin. 
// This is slightly harder. Test banana → ban, aaaa → a, abcdef → abcdef.

int main(){
    string word;
    getline(cin, word);
    
    string res;
    
    for(int i = 0; i<word.size(); i++){
        int index = word.find(word[i]);
        if(index == i){
            res.push_back(word[i]);
        }
    }
    
    cout << res;
}
