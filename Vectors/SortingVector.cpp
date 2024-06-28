#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Sorting(vector<int>&a){
  sort(a.begin(),a.end());
}
void print(vector<int>v){
  int i;
  for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<""<<endl;
}
int main(){
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int s;
    cin>>s;
    v.push_back(s);
  }
  Sorting(v);
  cout<<"After sorting:";
  print(v);

  reverse(v.begin(),v.end());




  return 0;
}