#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2==0) cout << "Even " << endl;
    else cout << "Odd" << endl;
    if(n&1==0) cout << "Even" << endl;
    else cout << "Odd " << endl;
    return 0;
}