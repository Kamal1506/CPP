#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string vowel = "aeiouAEIOU";
    int vowels = 0;
    int digits = 0;
    int consonants = 0;
    int special = 0;
    for(char ch : s){
        if(vowel.find(ch) != string::npos){
            vowels++;
        }
        else if(isalpha(ch)){
            consonants++;
        }
        else if(isdigit(ch)){
            digits++;
        }
        else{
            special++;
        }
    }
    cout << "vowels : " << vowels << endl;
    cout << "digits : " << digits << endl;
    cout << "consonants : " << consonants << endl;
    cout << "special : " << special;
}
