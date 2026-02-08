#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    int maxEle=max_element(vec.begin(), vec.end()) - vec.begin();
    cout<<vec[maxEle]<<endl;

    
    return 0;
}