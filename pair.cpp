// Problem — Pair Practice

// Store student data as: roll number + marks
// Example:
// {101, 85}
// {102, 92}
// {103, 78}

// Print:
// 101 85
// 102 92
// 103 78

// Use : vector<pair<int,int>>

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> students;
    for(int i = 0; i<n; i++){
        int roll, mark;
        cin >> roll >> mark;
        students.push_back({roll, mark});
    }
    // printing
    // for(pair<int, int> p : students){
    //     cout << "{" << p.first << ", " << p.second << "}" << endl;
    // }
    for(auto p : students){
        cout << "{" << p.first << ", " << p.second << "}" << endl;
    }
}
