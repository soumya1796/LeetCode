/* O(n) time and O(n) space */
#include<iostream>
#include<vector>
using namespace std;
void RotateArray(int *arr,int &n, int k){
    //K could be greater then size of array
    k=k%n;
    vector<int> ans(k);
    int index=0;
    for(int i=n-k;i<n;i++){
        ans[index++]=arr[i];
    }
    //Start from back, there's a chance you could replace a element twice.
    for(int i=0;i<n-k;i++){
        arr[i+k]=arr[i];
    }

    for(int i=0;i<k;i++){
        arr[i]=ans[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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
    RotateArray(arr,size,k);
}