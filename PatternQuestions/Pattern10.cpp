#include<iostream>
using namespace std;
void Pattern10(int w){
    int n = (w+1)/2;
    int m = 2*n -1;
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j>=(n-i-1)&& j<=(n-1+i)){
                cout << "*";                    
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<m;j++){
            if(j>=(n-i-1)&& j<=(n-1+i)){
                cout << "*";                    
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
    Pattern10(n);
    return 0;
}