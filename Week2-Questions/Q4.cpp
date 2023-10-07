#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int reverse=0, digit;
    while(n>0){
        digit = n%10;
        reverse = 10*reverse+digit;
        n=n/10;
    }
    cout << reverse << endl;
    return 0;
}