#include <bits/stdc++.h>
using namespace std;

// Find a substring inside another string.

int main(){
    string word;
    getline(cin, word);
    string w;
    getline(cin, w);
    int ind = word.find(w);
    if(ind >= 0){
        cout << "Found at " << ind+1 << endl;
        // cout << word.substr(ind, w.size());
    }
    else{
        cout << "Not found";
    }
}
