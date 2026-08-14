#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int n){
    string res;
    res.reserve(32);
    while(n){
    
        res.push_back((n&1)?'1':'0');
    n>>=1;
    }
    reverse(res.begin(),res.end());
   return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<decimalToBinary(n);

    return 0;
}