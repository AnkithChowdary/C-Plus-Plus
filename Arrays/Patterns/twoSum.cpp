#include<iostream>
using namespace std;
void checkTwoSum(int arr[],pair<int,int>&p,int n,int t){
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==t){
        p.first=arr[i];
        p.second=arr[j];
        break;
      }
    }
   }
}


int main() {
  int arr[]={2,4,3,7,6,7,0};
  int n=7;
  int target=5;
  pair<int,int>p=make_pair(-1,-1);
  checkTwoSum(arr,p,n,target);
   if(p.first==-1&&p.second==-1){
    cout << "Not found";
   }else{
    cout << "Found: " << p.first << " " << p.second;
   }

}