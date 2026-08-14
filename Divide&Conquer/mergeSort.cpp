#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int s,int e,int mid){
  int leftLength=mid-s+1;
  int rightLength=(e-mid);

  int *leftArr=new int[leftLength];
  int *rightArr=new int[rightLength];
    int idx=s;
    for(int i=0;i<leftLength;i++){
      leftArr[i]=arr[idx];
      idx++;
    }
    for(int j=0;j<rightLength;j++){
      rightArr[j]=arr[idx];
      idx++;
    }

    int i=0;
    int j=0;
    int k=s;

    while(i<leftLength&&j<rightLength){
      if(leftArr[i]<rightArr[j]){
          arr[k++]=leftArr[i++];
      }else{
        arr[k++]=rightArr[j++];
      }
    }

    while(i<leftLength){
      arr[k++]=leftArr[i++];
    }
    while(j<rightLength){
      arr[k++]=rightArr[j++];
    }
   delete[]leftArr;
   delete[]rightArr;
}


void mergeSort(int arr[],int s,int e){
  int mid=s+(e-s)/2;
  if(s>=e)
  return;
  else{
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e,mid);
  }
}
int main(){

  int arr[]={2,1};
  int n=sizeof(arr)/sizeof(int);
  mergeSort(arr,0,n-1);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}