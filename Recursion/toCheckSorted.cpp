#include <iostream>
using namespace std;
bool checkSorted(int arr[],int &n,int i){
if(i>=n-1){
  return true;
}else{

  bool currAns=false;
  bool recursionAns=false;
  if(arr[i]<=arr[i+1]){
    currAns=true;
  }

  recursionAns=checkSorted(arr,n,i+1);

  return (currAns&&recursionAns);
}
}
int main() {
    int arr[]={1,2,3,1,4,5};
    int n=6;
    cout<<checkSorted(arr,n,0);

    return 0;
}