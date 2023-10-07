#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //Use either double or long long int
    double factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    cout << factorial << endl;
    return 0;
}