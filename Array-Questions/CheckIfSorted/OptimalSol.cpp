/* O(n) time and O(n) space */
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
bool checkMonotonic(vector<int> &arr, int &size){
    int flag=0;
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            flag++;
        }
    }
    if(arr[0]<arr[size-1]) flag++;
    if(flag<=1) return true;
    else return false;
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
    if(checkMonotonic(arr,size)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }
    
}