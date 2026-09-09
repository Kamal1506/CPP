#include <bits/stdc++.h>
using namespace std;

// Remove the first and last characters.

int main(){
    string word;
    getline(cin, word);
    
    if(word.size() <= 2){
        cout << "";
        return 0;
    }
    word.pop_back();
    word.erase(0,1);
    cout << word;
    return 0;
}
