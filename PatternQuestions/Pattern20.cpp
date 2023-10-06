
#include<iostream>
using namespace std;
void Pattern18(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j== n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }                             
            }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern18(n);
    return 0;
}