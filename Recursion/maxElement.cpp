#include <iostream>
using namespace std;
int findMaxElement(int arr[],int size,int &maxi,int idx){
 if(idx>=size){
  return 0;
 }
 maxi=max(maxi,arr[idx]);
 findMaxElement(arr,size,maxi,idx+1);
 return maxi;
}
int main() {
    int arr[]={5,10,1,50,40};
    int maxi=INT_MIN;
    int ans=findMaxElement(arr,5,maxi,0);
    cout<<ans;
    return 0;
}