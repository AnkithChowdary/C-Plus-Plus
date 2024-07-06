// #include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<algorithm> // Include the algorithm header for std::includes
using namespace std;

int main(){

    vector<int>v;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(10);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(11);
      cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    vector<int> v1 = {1, 6, 4, 7, 1, 10};

    cout<<accumulate(v.begin(),v.end(),0);
      
    return 0;
}
