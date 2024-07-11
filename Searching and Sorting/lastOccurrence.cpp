#include<iostream>
#include<vector>
using namespace std;
void lastOccurrence(vector<int>arr,int target,int &index) {
  int start = 0, end = arr.size()-1;
  int mid = start + (end-start)/2;
  while(start <= end) {
    if(target < arr[mid])
      end = mid-1;
    else if(target == arr[mid]){
      index = mid;
     start=mid+1;
    }
     else
     start = mid+1;

mid = start + (end-start)/2;
     
  }

}
int main(){
    vector<int>arr(5);
    arr[0]=4;
    arr[1]=4;
    arr[2]=7;
    arr[3]=9;
    arr[4]=11;
  int index=-1;
    lastOccurrence(arr,4,index);   //Output : 1

    cout << index;
    return 0;
}