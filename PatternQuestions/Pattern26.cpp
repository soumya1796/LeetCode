
#include<iostream>
using namespace std;
void Pattern21(int n){
    int m = 2*n;
    int i, j;
    int k;
    for(i=0;i<n;i++){
        k=1;
        for(j=0;j<m-1;j++){
            if(j>=n-1-i && j<=n-1+i){
                if(j<n-1){
                    cout << k++;
                }
                else if(j==n-1){
                    cout << k;
                }
                else{
                    cout << --k;
                }
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
    Pattern21(n);
    return 0;
}