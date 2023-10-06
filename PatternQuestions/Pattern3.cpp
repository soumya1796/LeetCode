#include<iostream>
using namespace std;
void Pattern3(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << j+1;
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern3(n);
    return 0;
}