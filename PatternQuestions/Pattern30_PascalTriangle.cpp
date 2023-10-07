#include<iostream>
using namespace std;
void Pattern2(int n){
    int i, j;

    for(i=1;i<=n;i++){
        int c=1;
        for(j=1;j<=i;j++){
            cout << c << " ";
            c= c * (i-j)/j;
        }
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