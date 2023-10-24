/* O(n) time and O(n) space */
#include<iostream>
#include<limits.h>
using namespace std;
void SecondSmallest_and_SecondLargest(int *arr,int &n){
    int secondMin = INT_MAX, min = INT_MAX, secondMax = INT_MIN, max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max)
            max=arr[i];
        if(arr[i] < min)
            min=arr[i];    
    }
    for(int i=0;i<n;i++){
        if(arr[i] > secondMax && arr[i] < max){
            secondMax = arr[i];
        }
        if(arr[i] < secondMin && arr[i] > min){
            secondMin = arr[i];
        }  
    }
    cout << "Second Largest: " << secondMax << endl;
    cout << "Second Smallest: " << secondMin << endl;
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
    SecondSmallest_and_SecondLargest(arr,size);
}