#include<iostream>
using namespace std;

int pow(int x, int n) {
    if(n == 1) return n;

    int res = pow(x*x, int(n/2));

    if(n&1) return res * res * n;
    else return res * res;
}

int main() {

    cout << "hello world";

    return 0;
}