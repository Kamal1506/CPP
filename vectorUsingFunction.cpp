#include <bits/stdc++.h>
using namespace std;

void doubleValues(vector<int> &arr){
    for(int i = 0; i<arr.size(); i++){
        arr[i] *= 2;
    }
}
int main()
{
    vector<int> arr = {10, 20, 30};
    doubleValues(arr);
    for(int num : arr){
        cout << num << " ";
    }
}
