#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>>vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
    }

    sort(vec.begin(),vec.end());

    for(auto it:vec){
        cout<<it[0]<<" "<<it[1]<<endl;
    }

    return 0;
}