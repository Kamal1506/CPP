// Input:

// 7
// 10 20 10 30 10 40 20
// 10

// Output:3
// Use: count()

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    cout << count(arr.begin(), arr.end(), num);
}
