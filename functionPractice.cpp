#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr){
    int largest = arr[0];
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
void doubleElements(vector<int> &arr){
    for(int i = 0; i<arr.size(); i++){
        arr[i] *= 2;
    }
}
void printVector(const vector<int> &arr){
    for(int num : arr){
        cout << num << " ";
    }
}
int main()
{
    vector<int> arr = {10, 20, 5, 40, 15};
    cout << findLargest(arr) << endl;
    
    doubleElements(arr);
    
    printVector(arr);
    
    return 0;
}
