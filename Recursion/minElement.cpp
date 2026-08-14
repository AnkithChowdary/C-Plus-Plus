#include <iostream>
using namespace std;

int findMinElement(int arr[],int size,int &mini,int idx){
 if(idx>=size){
  return 0;
 }
 mini=min(mini,arr[idx]);
 findMinElement(arr,size,mini,idx+1);
 return mini;
}
int main() {
    int arr[]={5,10,1,50,40};
    int maxi=INT_MAX;
    int ans=findMinElement(arr,5,maxi,0);
    cout<<ans;
    return 0;
}