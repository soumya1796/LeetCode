
#include<iostream>
using namespace std;
void Pattern21(int n){
    int i, j;
    int top, bottom, right, left;
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            top=i;
            left=j;
            bottom=n-1-i;
            right=n-1-j;
            cout << ((n/2)+1-min(min(top,bottom),min(left,right)));
        }
        cout<< endl;
    }
    
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern21(n);
    return 0;
}