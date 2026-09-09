#include <bits/stdc++.h>
using namespace std;

// Build a string containing only digits.

int main(){
    string word;
    getline(cin, word);
    
    string digits;
    for(char ch : word){
        if(isdigit(ch)){
            digits.push_back(ch);
        }
    }
    cout << digits;
}
