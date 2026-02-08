    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       int tc;
       cin>>tc;
       while(tc--){
     
        int n,x;
        cin>>n>>x;
         vector<long long>pts;
         pts.push_back(0);
         for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            pts.push_back(ele);
         }
     
         long long ans=INT_MIN;
         pts.push_back(x);
     
         n=pts.size();
     
         for(int i=1;i<n;i++){
            if(i==n-1)
            ans=max(ans,2*(pts[i]-pts[i-1]));
            else
            ans=max(ans,(pts[i]-pts[i-1]));
         }
     
         cout<<ans<<endl;
     
     
       }
     
        return 0;
    }