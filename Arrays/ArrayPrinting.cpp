#include<iostream>
using namespace std;

void printArray(int arr[],int n){
      for(int i=0;i<n;i++){
    cout<< arr[i] << " ";
  }  
}
int main() {
  int n;
  cin >> n;
  int arr[n];
for(int i=0;i<n;i++){
    arr[i]=i+1;    // the either way works too i[arr]=value;  
  }                //arr[i] = *(baseAddress+size*i)   i[arr] =*(size*i+arr)


}