#include<iostream>
using namespace std;
bool helper(string s,string pattern){
  int m=s.size();
  int n=pattern.size();
  int c=0;
  for(int i=0;i<=m-n;i++){
    for(int j=0;j<n;j++){
      if(s[i]==pattern[j]){
          i++;
          c++;
      }else{
        break;
      }
    }
    if(c==pattern.size()){
      return true;
    }
  }
  return false;
}
int main() {
  string s,pattern;
  cin >>s;
  cin>>pattern;
  cout << helper(s,pattern);
}