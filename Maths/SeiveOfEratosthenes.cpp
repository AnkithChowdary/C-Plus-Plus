#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

void isPrime(int n, vector<bool>& v) {
    v[0] = v[1] = false;
    for (int i = 2; i <= n; i++) {
        if (v[i]) {
            int j = 2 * i;
            while (j <= n) {
                v[j] = false;
                j += i;
            }
        }
    }
}

// Optimized Code
void isPrime1(int n, vector<bool>& v) {
    v[0] = v[1] = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (v[i]) {
            // Starts from i*i as others are already marked from 2 to i-1
            int j = i * i;
            while (j <= n) {
                v[j] = false;
                j += i;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<bool> tprimes(n + 1, true);
    auto start = high_resolution_clock::now();
    isPrime(n, tprimes);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by isPrime: " << duration.count() << " microseconds" << endl;
    
    for (int i = 2; i <= n; i++) {
        if (tprimes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    vector<bool> primes(n + 1, true);
    start = high_resolution_clock::now();
    isPrime1(n, primes);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by isPrime1: " << duration.count() << " microseconds" << endl;
    
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
