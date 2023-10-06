
#include<iostream>
using namespace std;
void Pattern19(int n){
    int m = 2*n;
    int i, j;
    for(i=0;i<m-1;i++){
        for(j=0;j<m;j++){
            if((j>=i+1 && j<m-i-1 && i<n)||(i>=n && j<(i+1) && (j>= (m-i-1)))){
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
    Pattern19(n);
    return 0;
}