#include <bits/stdc++.h>
using namespace std;

// Remove duplicate characters while preserving first occurrence. 
// Input: programming; output: progamin. 
// This is slightly harder. Test banana → ban, aaaa → a, abcdef → abcdef.

int main(){
    string word;
    getline(cin, word);
    
    string res;
    
    // for(int i = 0; i<word.size(); i++){
    //     int index = word.find(word[i]);
    //     if(index == i){
    //         res.push_back(word[i]);
    //     }
    // }

    bool seen[256] = false;

    for(char ch : word){
        if(!seen[(unsigned char)ch]){
            res.push_back(ch);
            seen[(unsigned char)ch] = true;
        }
    }
    
    cout << res;
}

// We are using the character's numeric value as an array index.
// For normal ASCII characters:
// 'a' → 97
// 'A' → 65
// '0' → 48
// So conceptually:
// seen[(unsigned char)'a']

// becomes : seen[97]
