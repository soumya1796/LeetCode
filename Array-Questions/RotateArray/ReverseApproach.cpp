/* O(n) time and O(n) space */
#include<iostream>
#include<vector>
using namespace std;
void ReverseArray(int *arr, int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void RotateArray(int *arr,int &n, int k){
    ReverseArray(arr, 0, n-k-1);
    ReverseArray(arr, n-k, n-1);
    ReverseArray(arr, 0, n-1);
}
int main(){
    int size;
    cout << "Enter number of elements in array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) { 
        cout << "Enter a number: "; 
        cin >> arr[i]; 
    } 
    int k;
    cout << "Positions to be shifted: " << endl;
    cin >> k;
    k=k%size;
    RotateArray(arr,size,k);
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << " ";  
    } 
    cout << endl;
}