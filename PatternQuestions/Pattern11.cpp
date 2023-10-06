#include<iostream>
using namespace std;
void Pattern11(int w){
    int n = (w+1)/2;
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<i;j++){
            cout << "*";            
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern11(n);
    return 0;
}