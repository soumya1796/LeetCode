#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int ans = n | (1<<k);
    cout << ans << endl;
    return 0;
}