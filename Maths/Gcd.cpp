#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    
    
        return gcd(a - b, b);
    
    
}

int main() {
    int a = 72, b = 24;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
