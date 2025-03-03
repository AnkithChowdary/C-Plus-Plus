#include<bits/stdc++.h>
using namespace std;


bool helper(int num,int copy,int d){
while(d-->0){
    if(copy%10<copy%100){
    return false;
    }
    num/=10;
    

  }
  return true;
}

int main(){
  int num;
  cin>>num;
  int d=log10(num);
  bool dec=false;
  bool isNum=false;
  int copy=num;
  while(dec){
  
  num--;
  copy=num;
  isNum=helper(num,copy,d);
  

  }
  
   
  cout << num;

    
  
  return 0;
}