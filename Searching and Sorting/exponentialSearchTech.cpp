#include<iostream>
#include<vector>
using namespace std;
int binarySearch(int arr[],int si,int ei,int target){
  int comparisions=0;
  while(si<=ei){
    
    int mid=si+(ei-si)/2;
    if(arr[mid]==target){
      return mid;
    }else if(arr[mid]>target){
      ei=mid-1;
    }else{
      si=mid+1;
    }
  }
  return -1;
}

int exponentialSearch(int arr[],int n,int target){
  
  if(arr[0]==target){
    return 0;
  }
  int i=1;
  while(i<n&&arr[i]<=target){
    i*=2;
  }
  return binarySearch(arr,i/2,min(i,n-1),target);
}

int main(){
   int a[]={3,4,5,6,11,13,14,15,56,70};
   int n=sizeof(a)/sizeof(int);
   int target=13;
   int ans=exponentialSearch(a,n,target);
   cout<<ans;
  return 0;
}