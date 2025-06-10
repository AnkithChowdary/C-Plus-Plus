#include<iostream>
#include<vector>
using namespace std;

int findingOddOccuringElement(vector<int>& arr){
  int s=0;
  int size=arr.size();
  int e=size-1;
 
  while(s<=e){
    int mid=s+(e-s)/2;
    cout<< "mid "<<mid<< endl;
    if(s==e){
      return s;
    }
    // If the element is at first or last so we shouldn't go for bound checking
    // Now in case if it lands then it will not be equal 
    int leftVal=-1;
    int currVal=arr[mid];
    int rightVal=-1;
    if(mid-1>=0)
    leftVal=arr[mid-1];

    if(mid+1<size){
      rightVal=arr[mid+1];
    }
    
    if(currVal!=leftVal&&currVal!=rightVal){
    return mid;
    }
    
      if(mid-1>=0&&currVal==leftVal){
        
        if((mid-1)&1){
       e=mid-1;
        }else{
         s=mid+1;
      }
      }else if(mid+1<size&&currVal==rightVal){
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
vector<int>arr={1,2,2,3,3};
int ans=findingOddOccuringElement(arr);
cout<<"ans Index:"<<ans<<endl;
cout<<"ans element: "<<arr[ans]<<endl;


  return 0;
}