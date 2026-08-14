#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int n){
     int maxLen=0;
     int currLen=1;
     
    sort(arr.begin(),arr.end());
    set<int>s(arr.begin(),arr.end());

    // int j=0;
    // while(j<n){
    //  if(!s.find(arr[i])){
        
    //  }
    // }
     

     return maxLen;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



   

    cout<<solve(arr,n);
    
     
     
    return 0;
}