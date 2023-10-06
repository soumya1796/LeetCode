#include<iostream>
using namespace std;
void Pattern4(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << i+1;
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern4(n);
    return 0;
}