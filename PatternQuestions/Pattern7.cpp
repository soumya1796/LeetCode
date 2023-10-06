#include<iostream>
using namespace std;
void Pattern7(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>=(n-i-1)){
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
    Pattern7(n);
    return 0;
}