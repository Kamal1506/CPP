#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int secLargest = INT_MIN;
    
    for(int num : arr){
        if(num > largest){
            secLargest = largest;
            largest = num;
        }
        else if(num > secLargest && num != largest){
            secLargest = num;
        }
    }
    cout << secLargest;
}
