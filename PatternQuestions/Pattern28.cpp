#include<iostream>
using namespace std;
void Pattern2(int n){
    int i, j;
    int k=1;
    for(i=0;i<n;i++){
        for(j=0;j<2*i+1;j++){
            if(j%2!=0){
                cout << "*";
            }
            else{
                cout<<k;
                k++;
            }
        }
        cout << endl;
    }
    int start = k-n;
    for(i=0;i<n;i++){
        k=start;
        for(j=0;j<=2*n-2*1-2*i;j++){

            if(j%2!=0){
                cout << "*";
            }
            else{
                cout<<k;
                k++;
            }
        }
        start = start -(n-i-1);
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