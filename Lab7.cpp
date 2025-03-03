#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
   
   int size;
   cin>>size;
   int persons;
   cin>>persons;
   vector<int>>input(size);
   for(int i=0;i<size;i++){
    cin>>v[i];
   }
   sort(v.begin(),v.end(),[]int &a,int &b{
    return a>b;
   })
   int x=1;
   int c=0;
   int ans=0;
   for(int i=0;i<size;i++){
    c++;
    ans+=x*v[i];
      if(c==persons){
        x++;
      }
   }
   cout << ans;


  return 0;
}