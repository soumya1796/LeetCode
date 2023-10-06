
#include<iostream>
using namespace std;
void Pattern14(int n){
    int m = 2*n-1;
    int i, j;
    char k;
    for(i=0;i<n;i++){
        k='A';
        for(j=0;j<m;j++){
            if(j<(n-1-i) || j > (m-n+i)){
                cout << " ";
            }
            else{
                if(j<n)
                cout << k++;
                else{
                    k--;
                    k--;
                    cout << k;
                    k++;
                }
                
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