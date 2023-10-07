#include<iostream>
using namespace std;
void Pattern22(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0 || j==i || i==n-1){
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

        for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if( j==0 || j+i == n-1 || i==0){
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern22(n);
    return 0;
}