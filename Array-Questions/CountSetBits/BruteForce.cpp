#include<iostream>
using namespace std;
int CountSetBits(int n){
    int count = 0;
    while(n){
        count += n&1;
        n=n>>1;
    }
    return count;
}
int main(){
    unsigned int n;
    cin >> n;
    int count = CountSetBits(n);
    cout << "Total Set Bits in n: " << count << endl;
}
