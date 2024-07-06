#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int>v){
  int i;
  for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<""<<endl;
}
int main(){
  
  vector<int>v={5,4,7,10,4};
  
  int max=*max_element(v.begin(),v.end());
   cout<<max;

   int n;
   cin>>n;
   partial_sort(v.begin(),v.begin()+n,v.end());
print(v);
  return 0;
}