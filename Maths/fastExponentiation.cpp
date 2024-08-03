#include<iostream>
using namespace std;

int fastExponentiation(int a,int b){
  int ans=1;
  while(b>0){
    if(b&1){
      //Odd
      ans=ans*a;
    }
    a=a*ans;
    b>>=1;
  }
  return ans;
}
  int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int res=fastExponentiation(a,b);
    cout << res;
  
}