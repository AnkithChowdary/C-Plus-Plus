// #include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<algorithm> // Include the algorithm header for std::includes
using namespace std;

int main(){
    vector<int> v = {1, 6, 4, 7, 10, 11};
    vector<int> v1 = {1, 6, 4, 7, 1, 10};

    cout<<accumulate(v.begin(),v.end(),0);
      
    return 0;
}
