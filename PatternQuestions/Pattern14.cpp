
#include<iostream>
using namespace std;
void Pattern14(int n){
    int m = 2*n;
    int i, j;
    int k=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j<=i){
                cout << j+1;
            }
            else if(j>=(m-i-1)){
                cout << m-j;
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
    Pattern14(n);
    return 0;
}