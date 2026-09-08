// Convert lowercase letters to uppercase manually
#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    
    for(int i = 0; i<input.size(); i++){
        if(islower(input[i])){
            input[i] = toupper(input[i]);
        }
        else{
            input[i] = tolower(input[i]);
        }
    }
    
    cout << input;
}
