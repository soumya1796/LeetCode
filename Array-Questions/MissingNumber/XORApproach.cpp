#include<iostream>
using namespace std;
int MissingNumber(int *arr,int &size){
    int totalSum=0;
    for(int i=1;i<=size;i++){
        totalSum^=i;
    }
    int arrSum=arr[0];
    for(int i=1;i<size;i++){
        arrSum^=arr[i];
    }
    return (totalSum^arrSum);
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
    int missingNumber = MissingNumber(arr,size);
    cout << "Missing Number: " << missingNumber << endl;
}