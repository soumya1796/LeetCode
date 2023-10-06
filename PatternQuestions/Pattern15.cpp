
#include<iostream>
using namespace std;
void Pattern15(int n){
    int i, j;
    char k;
    for(i=0;i<n;i++){
        k = 'A';
        for(j=0;j<n;j++){
            if(j<=i){
                cout << k++;
            }
        }
        cout << endl;
    }
    cout << endl;
    for(i=0;i<n;i++){
        k = 'A';
        for(j=n-1;j>=0;j--){
            if(j>=i){
                cout << k++;
            }
        }
        cout << endl;
    }
    cout << endl;
    k = 'A';
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            if(j<=i){
                cout << k;
            }
        }
        k++;
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern15(n);
    return 0;
}