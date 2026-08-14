#include <iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>&arr,int start,int end){
  int i=start-1;
  int j=start;
  int pivot=arr[end];
  while(j<end){
    if(arr[j]<pivot){
      i++;
      swap(arr[i],arr[j]);
    }
    j++;
  }
  i++;
  swap(arr[i],arr[end]);
  return i;
}
void quickSort(vector<int>&arr,int start,int end){
   if(start>=end)
   return;

   int pivotIdx=findPivot(arr,start,end);
   quickSort(arr,start,pivotIdx-1);
   quickSort(arr,pivotIdx+1,end);
}
int main() {
  vector<int>vec={7,6,2,9,5,3,8};
  quickSort(vec,0,vec.size()-1);
  for(int num:vec){
    cout<<num<<" ";
  }
    return 0;
}