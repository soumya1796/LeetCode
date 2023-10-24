/* O(n) time and O(n) space */
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
bool checkMonotonic(vector<int> &arr, int &size){
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
void RotateArray(vector<int> &arr, int &size){
    int temp=arr[size-1];
    for(int i=size-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}
void CheckSortedAndRotated(vector<int> &arr, int &size){
    for(int i=1;i<size;i++){
        RotateArray(arr,size);
        if(checkMonotonic(arr,size)){
            cout << "Array is sorted with k: " << i << endl;
        }
    }
    
}
int main(){
    int size;
    cout << "Enter number of elements in array" << endl;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) { 
        cout << "Enter a number: "; 
        cin >> arr[i]; 
    }
    if(checkMonotonic(arr,size)){
        cout << "Array is sorted" << endl;
    }
    else{
        CheckSortedAndRotated(arr,size);
    }
    
}