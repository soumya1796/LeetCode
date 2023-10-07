#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) {
            cout << "Not Prime" << endl;
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}