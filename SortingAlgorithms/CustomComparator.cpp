#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool mycomp(int &a,int &b){
  return a>b;                 //Decreasing order and if a<b then sorts in increasing order
}
void print(vector<int>v){
  int i;
  for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<""<<endl;
}
int main() {
  vector<int>v={5,1,4,3,10,7,6};
  sort(v.begin(),v.end(),mycomp);
  print(v);
  return 0;
}