// First repeating element: input [10,5,3,4,3,5,6]; output 3.
// Use an unordered_set while traversing from left to right.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10,5,3,4,3,5,6};
    unordered_set<int> seen;

    for (int num : arr) {
        if(seen.count(num) > 0){
            cout << num <<"\n";
            return 0;
        }
        seen.insert(num);
    }
    
}
