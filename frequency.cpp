#include <bits/stdc++.h>
using namespace std;

//Find frequency of a character. Input string and character. 
// Example: programming, m; output: 2. Test banana a → 3, hello l → 2, cpp z → 0.

int main(){
    string word;
    getline(cin, word);
    
    char letter;
    cin >> letter;
    int letterCount = 0;
    
    for(char ch : word){
        if(ch == letter){
            letterCount++;
        }
    }
    
    cout << letter << " -> " << letterCount;
}
