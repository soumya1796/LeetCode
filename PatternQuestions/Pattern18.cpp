
#include<iostream>
using namespace std;
void Pattern18(int n){
    int m = 2*n;
    int i, j;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if((j>=n-i && j<n+i && i<n)||(i>=n && j>=(n-m+1+i) && (j< (n+m-1-i)))){
                cout << " ";
            } 
            else{
                cout << "*";
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