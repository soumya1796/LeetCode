/* O(n) time and O(n) space */
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> &arr, int &size){
    int i,j=0;
    for(i=0;i<size;i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout << arr[i] << " " ;
    }
    return j;
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
    int k = removeDuplicates(arr,size);
    cout << k << endl;
    for(int i=0;i<=k;i++){
        cout << arr[i] << " " ;
    }
}