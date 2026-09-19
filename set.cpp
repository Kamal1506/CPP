// Remove duplicates: input [10,20,10,30,20,40]; 
// print unique elements using set, then try again with unordered_set and observe the ordering.

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> set;
    set.insert(10);
    set.insert(20);
    set.insert(10);
    set.insert(30);
    set.insert(20);
    set.insert(40);
    for(int num : set){
        cout << num << " ";
    }
    cout << endl;
    unordered_set<int> setting;
    setting.insert(10);
    setting.insert(20);
    setting.insert(10);
    setting.insert(30);
    setting.insert(40);
    setting.insert(20);
    for(int num : setting){
        cout << num << " ";
    }
    
}
