#include <bits/stdc++.h>
using namespace std;

// Reverse a string without reverse()

int main(){
    string s;
    getline(cin, s);
    
    // reverse(s.begin(), s.end());
    // cout << s << endl;

    int left = 0;
    int right = s.size()-1;
    while(left < right){
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
    cout << s;
}
