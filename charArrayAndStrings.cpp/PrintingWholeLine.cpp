#include<String>
#include<iostream>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  s.append(" is a string");
  cout<<s;
  
  return 0;
}