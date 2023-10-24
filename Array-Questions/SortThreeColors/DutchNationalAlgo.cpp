#include<iostream>
using namespace std;
void SortThreeColors(int *arr,int &size){
    int index=0,j=0,k=size-1;
    while(index<=k){
        if(arr[index]==0){
            swap(arr[index],arr[j]);
            j++;
            index++;
        }
        else if(arr[index]==2){
            swap(arr[index],arr[k]);
            k--;
        }
        else{
            index++;
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