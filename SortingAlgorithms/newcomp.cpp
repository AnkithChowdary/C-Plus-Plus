#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<vector<int>>events={{1,3,2},{4,5,2},{2,4,3}};


     auto mycmp=[&](const auto a,const auto b){
            return a[1]<b[1];
        };
        int ans=0;


        sort(events.begin(),events.end(),mycmp);



        for(int i=0;i<events.size();i++){
            for(int j=0;j<events[0].size();j++){
                cout<<events[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}