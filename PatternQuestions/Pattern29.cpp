#include<iostream>
using namespace std;
void Pattern2(int n){
    int i, j;
    for(int i=0;i<n;i++){
        int cond = i<=n/2 ? 2*i : 2*(n-i-1);
        for(int j=0;j<=cond;j++){
            if(j<=cond/2){
                cout << j+1;
            }
            else{
                cout << cond-j+1;
            }
        }
        cout << endl;
    }
    }

int main(){
    cout << "Enter number of rows you want to print" << endl;
    int n;
    cin >> n;
    Pattern2(n);
    return 0;
}