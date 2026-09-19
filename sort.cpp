// Problem — Sort and Remove Confusion
// Given:

// 5
// 40 10 30 20 50
// Print:

// Ascending:
// 10 20 30 40 50
// Descending:
// 50 40 30 20 10

// Use sort() only. Don't manually sort.

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    // arr.push_back(2);
    sort(arr.begin(), arr.end());
    cout << "Ascending : " << endl;
    print(arr);
    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Descending : " << endl;
    print(arr);
}
