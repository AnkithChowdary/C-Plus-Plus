#include <iostream>
#include <vector>
using namespace std;

vector<int> twosComplement(vector<int> v) {
    vector<int> comple(v.size()+1, 0);

    // Step 1: Inverting the bits
    for (int i = comple.size()-1,k=v.size()-1; i >=0; i--,k--) {
        comple[i] = v[k] == 0 ? 1 : 0;
    }

    // Step 2: Adding 1 to the inverted bits
    int carry = 1;
    for (int i = comple.size() - 1; i >= 0; i--) {
        int sum = comple[i] + carry;
        comple[i] = sum % 2;
        carry = sum / 2;
    }
    if(carry){
      comple[0]=carry;
    }

    return comple;
}

int main() {
    vector<int> v = {0, 0, 0, 0};
    vector<int> re = twosComplement(v);

    // Printing the array
    for (int i = 0; i < re.size(); i++) {
        cout << re[i];
    }
    cout << endl;

    return 0;
}
