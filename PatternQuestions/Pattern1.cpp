#include<iostream>
using namespace std;
void Pattern1(int x, int y){
    int i, j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number of rows and columns you want to print" << endl;
    int x,y;
    cin >> x;
5
    cin >> y;
    Pattern1(x,y);
    return 0;
}