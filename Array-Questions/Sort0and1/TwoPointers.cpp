#include<iostream>
using namespace std;
void Sort0and1(int *arr,int &size){
    int start=0, end = size -1;
    while(start <= end){
        if(arr[start]==0){
            start++;
        }
        else{
            swap(arr[start], arr[end]);
            end--;
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
    Sort0and1(arr,size);
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << ",";  
    } 
}