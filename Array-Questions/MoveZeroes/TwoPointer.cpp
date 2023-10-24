/* O(n) time and O(n) space */
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void moveZeroes(vector<int> &arr, int &size){
    int i,j=0;
    for(i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
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
    moveZeroes(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ;
    }
}