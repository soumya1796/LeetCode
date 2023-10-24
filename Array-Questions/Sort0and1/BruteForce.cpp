#include<iostream>
using namespace std;
void Sort0and1(int *arr,int &size){
    int countZeroBits=0, countOneBits=0;
    for(int i=0;i<size;i++){
        countZeroBits += arr[i]==0 ? 1:0;
        countOneBits += arr[i]==1 ? 1:0;
    }
    int index=0;
    while(countZeroBits--){
        arr[index]=0;
        index++;
    }
    while(countOneBits--){
        arr[index]=1;
        index++;
    }
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
    Sort0and1(arr,size);
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << ",";  
    } 
}