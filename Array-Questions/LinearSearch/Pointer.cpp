/* O(n) time and O(n) space */
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int linearSearch(vector<int> &arr, int &size, int num){
    for(int i=0;i<size;i++){
      if(arr[i]==num){
          return i;
      }
  }
  return -1;
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
    int num;
    cout << "Enter number to be searched: ";
    cin >> num;
    int index = linearSearch(arr,size, num);
    cout << "Index: " << index << endl;

}