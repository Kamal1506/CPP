#include <bits/stdc++.h>
using namespace std;

// Calculate the sum of all digits in a string. This specifically tests ch - '0'.
// Input: a1b2c3; output: 6. Test 12345 → 15, abc → 0, 9a8b7 → 24.

int main(){
    string word;
    getline(cin, word);
    
    int sum = 0;
    for(char ch : word){
        if(isdigit(ch)){
            sum += ch-'0';
        }
    }
    cout << "sum of digits is " << sum;
}
