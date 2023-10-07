#include<iostream>
using namespace std;
void Pattern2(int n){
    int i, j;
    int m = 3*n+1;
    char k;
    char orig_k;
    for(i=0;i<n;i++){
        k='1'+i;
        orig_k = k;
        for(j=0;j<=m;j++){
            if(j<2*(n-1)-i || j>2*(n-1)+i){
                cout << " ";
            }
            else{
                cout << k;
                if(k!='*'){
                    k='*';
                }
                else{
                    k=orig_k;
                }
            }
            
        }
        k=orig_k;
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