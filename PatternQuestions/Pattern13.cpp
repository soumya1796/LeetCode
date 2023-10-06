#include<iostream>
using namespace std;
void Pattern13(int n){
    int i, j;
    int k=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << k++ << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern13(n);
    return 0;
}