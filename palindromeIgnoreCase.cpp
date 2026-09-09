#include <bits/stdc++.h>
using namespace std;

// Palindrome ignoring case. Input: Madam; output: Palindrome. 
// Convert characters using tolower() while comparing. 
// Test RaceCar → Palindrome, Hello → Not Palindrome, A → Palindrome.

int main(){
    string word;
    getline(cin, word);
    
    if(word.size() == 0){
        cout << "Palindrome";
        return 0;
    }
    
    int left = 0;
    int right = word.size()-1;
    
    while(left < right){
        if(tolower(word[left]) != tolower(word[right])){
            cout << "Not a Palindrome";
            return 0;
        }
        left++;
        right--;
    }
    
    cout << "Palindrome";
    return 0;
}
