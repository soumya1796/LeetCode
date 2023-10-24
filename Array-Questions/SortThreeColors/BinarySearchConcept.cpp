#include<iostream>
using namespace std;
void SortThreeColors(int *arr,int &size){
    int start=0,end=size-1;
    int mid = 0;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            start++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
        else{
            mid++;
        }
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
    SortThreeColors(arr,size);

    for (int i = 0; i < size; i++) { 
        cout << arr[i] << ",";  
    } 
}