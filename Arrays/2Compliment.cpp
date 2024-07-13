#include <iostream>
#include <vector>
using namespace std;

vector<int> twosComplement(vector<int> v) {
    vector<int> compli(v.size(), 0);

    // Step 1: Inverting the bits
    for (int i = v.size()-1; i >=0; i--) {
        compli[i] = v[i] == 0 ? 1 : 0;
    }

    // Step 2: Adding 1 to the inverted bits
    int carry = 1;
    for (int i = compli.size() - 1; i >= 0; i--) {
        int sum = compli[i] + carry;
        compli[i] = sum % 2;
        carry = sum / 2;
    }
    if(carry){
      compli[0]=carry;
    }

    return compli;
}

int main() {
    vector<int> v = {0, 0, 1, 0};
    vector<int> re = twosComplement(v);

    // Printing the array
    for (int i = 0; i < re.size(); i++) {
        cout << re[i];
    }
    cout << endl;

    return 0;
}
