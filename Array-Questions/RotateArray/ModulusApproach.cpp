/* O(n) time and O(n) space */
#include<iostream>
#include<vector>
using namespace std;
vector<int> RotateArray(int *arr,int &size, int k){
    vector<int> ans(size);
    for(int i=0;i<size;i++){
        ans[(i+k)%size]=arr[i];
    }
    return ans;
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
    int k;
    cout << "Positions to be shifted: " << endl;
    cin >> k;
    vector<int> ans = RotateArray(arr,size,k);

    for (int i = 0; i < size; i++) { 
        cout << ans[i] << " ";  
    } 
    cout << endl;
}