#include<iostream>
using namespace std;
void Sort0and1(int *arr,int &size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
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