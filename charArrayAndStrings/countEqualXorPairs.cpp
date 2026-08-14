#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        vector<int>b(n);

        for(int i=0;i<n;i++)
            cin>>b[i];

        
        unordered_map<long long>mp;
        for(int i=0;i<n;i++)
            mp[a[i]^b[i]]++;

        int cnt=0;
        for(auto it:mp){
            long long f=it.second;
            cnt+=(f*(f-1)/2);
        }

        cout<<cnt<<"\n";

        

        

        

    
    }
     
     
    return 0;
}