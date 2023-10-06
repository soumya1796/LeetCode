
#include<iostream>
using namespace std;
void Pattern17(int n){
    int i, j;
    char k;
    for(i=0;i<n;i++){
        k='A'+n-1;
        k=k-i;
        for(j=0;j<=i;j++){
            cout << k++;                 
            }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern17(n);
    return 0;
}