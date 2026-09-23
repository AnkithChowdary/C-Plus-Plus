#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  char ch[50];
 
  cin.getline(ch,50);
  for(char k:ch){
    if(k=='\0')break;
    cout << k;
  }
 
  return 0;
}