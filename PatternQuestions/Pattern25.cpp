
#include<iostream>
using namespace std;
void Pattern21(int n){
    int i, j;
    int k;
    for(i=0;i<n;i++){
        k=i+1;
        for(j=0;j<n;j++){
            if(i==0 || j==0 || i+j==n-1){
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