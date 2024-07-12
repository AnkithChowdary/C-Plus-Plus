#include<iostream>
using namespace std;

int main() {
  int maxi=INT_MIN;
   int arr[]={5,1,4,7,0};
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    maxi=max(arr[i],maxi);
   }
   cout << maxi;
}