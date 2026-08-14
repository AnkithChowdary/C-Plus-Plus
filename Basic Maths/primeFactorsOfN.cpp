#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=6;



   unordered_set<int>st;
        
        for(int i=1;i<=n/2;i++){
            if(n%i==0)
            {
                st.insert(i);

                if(n%(n/i)==0)
                st.insert(n/i);
            }
        }
        

        vector<int>ans(st.begin(),st.end());
        sort(ans.begin(),ans.end());
        for(int num:ans){
            cout<<num<<" ";
        }

    return 0;
}