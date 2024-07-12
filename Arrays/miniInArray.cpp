#include<iostream>
using namespace std;

int main() {
  int mini=INT_MAX;
   int arr[]={5,1,4,7,0};
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    mini=min(arr[i],mini);
   }
   cout << mini;
}