// Problem — Maximum, Minimum and Sum

// Input:

// 5
// 10 40 20 5 30

// Output:

// Maximum: 40
// Minimum: 5
// Sum: 105

// Use:
// max_element()
// min_element()
// accumulate()
// No manual loops for calculation.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Maximum: " << *max_element(arr.begin(), arr.end()) << endl;
    cout << "Minimum: " << *min_element(arr.begin(), arr.end()) << endl;
    cout << "Sum: " << accumulate(arr.begin(), arr.end(), 0);
}
