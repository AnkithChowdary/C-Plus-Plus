#include<iostream>
#include<vector>
using namespace std;

int findingOddOccuringElement(vector<int>& arr){
  int s=0;
  int size=arr.size();
  int e=size-1;
 
  while(s<=e){
    int mid=s+(e-s)/2;
    
    if(s==e){
      return s;
    }
    
    if(mid-1>=0&&arr[mid]!=arr[mid-1]&&mid+1<=size-1&&arr[mid]!=arr[mid+1]){
    return mid;
    }
    
      if(mid-1>=0&&arr[mid-1]==arr[mid]){
        
        if((mid-1)&1){
       e=mid-1;
        }else{
         s=mid+1;
      }
      }else if(mid+1<size&&arr[mid]==arr[mid+1]){
      if(mid&1){
       e=mid-1;
        }else{
         s=mid+1;
      }
      }
         
    }
    // If the even index then we are on the left part
    //MOve right
    // If odd index then it indicates we are on right part
    //Move left
    return -1;

  }


int main(){
vector<int>arr={1,1,2,2,3,3,5,5,7,9,9,11,11};
int ans=findingOddOccuringElement(arr);
cout<<"ans Index:"<<ans<<endl;
cout<<"ans element: "<<arr[ans]<<endl;


  return 0;
}