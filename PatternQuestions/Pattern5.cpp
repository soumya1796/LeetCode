#include<iostream>
using namespace std;
void Pattern5(int n){
    int i, j;
    for(i=n;i>0;i--){
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
    Pattern5(n);
    return 0;
}