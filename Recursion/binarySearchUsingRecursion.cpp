#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key, int s, int e){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return binarySearch(arr,n,key,s,mid-1);
    }
    return binarySearch(arr,n,key,mid+1,e);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    cout<<binarySearch(arr,n,key,0,n-1);
    return 0;
}