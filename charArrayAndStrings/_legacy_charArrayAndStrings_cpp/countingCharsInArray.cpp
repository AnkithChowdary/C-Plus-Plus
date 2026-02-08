#include<iostream>
#include<vector>
using namespace std;
void countChar(char arr[],int &s,int &count){
  int i=0;
     while(arr[i]){
      if(arr[i]=='\0'){
        break;
      }else{
        count++;
      }
      i++;
     }
}
int main() {
  char arr[10];
  cin>>arr;
  int count=0;
  int size=sizeof(arr);
  countChar(arr,size,count);
  cout << count;
}