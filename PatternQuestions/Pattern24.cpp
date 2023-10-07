
#include<iostream>
using namespace std;
void Pattern21(int n){
    int i, j;
    int k;
    for(i=0;i<n;i++){
        k=1;
        for(j=0;j<=i;j++){
            if(i==n-1 || j==0 || i==j){
                cout << k;
            }
            else{
                cout << " ";
                k;
            }
            k++;
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