// Problem — Sort Students By Marks
// Input conceptually:
// 101 80
// 102 95
// 103 70
// 104 90
// Store each student as: pair<int,int>
// But store it like: marks, roll
// So:
// {80,101}
// {95,102}
// ...

// Then sort descending.
// Expected:
// 102 95
// 104 90
// 101 80
// 103 70

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
    sort(students.begin(), students.end());
    // printing
    for(auto p : students){
        cout << "{" << p.first << ", " << p.second << "}" << endl;
    }
    // Custom comparator using a lambda function
    sort(students.begin(), students.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second > b.second;// Descending order by 'second' element
    });
    for(auto p : students){
        cout << "{" << p.first << ", " << p.second << "}" << endl;
    }
}
