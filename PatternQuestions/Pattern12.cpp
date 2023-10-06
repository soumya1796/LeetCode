#include<iostream>
using namespace std;
void Pattern12(int n){
    int i, j;
    int k=0;
    for(i=0;i<n;i++){
        if(i%2==0) {
            k=1;
        }
        else{
            k=0;
        }
        for(j=0;j<=i;j++){
            cout << k;
            k=!k;
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern12(n);
    return 0;
}