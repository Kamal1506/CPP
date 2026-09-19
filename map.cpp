// Frequency of elements: input [10,20,10,30,20,10]; 
// use unordered_map to produce frequencies such as 10 → 3, 20 → 2, 30 → 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 10, 30, 20, 10};
    map<int, int> freq;
    unordered_map<int, int> unorder;

    for (int num : arr) {
        freq[num]++;
        unorder[num]++;
    }

    cout << "map (Sorted keys):\n";
    for (auto p : freq) {
        cout << p.first << " -> " << p.second << "\n";
    }

    cout << "\nunordered_map (Unordered keys):\n";
    for (auto p : unorder) {
        cout << p.first << " -> " << p.second << "\n";
    }
}
