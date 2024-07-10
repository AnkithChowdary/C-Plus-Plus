#include<iostream>
#include<vector>
#include<numeric>
using namespace std;


int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target<nums[mid])
            end=mid-1;
        else if(target==nums[mid])
        return mid;
        else
        start=mid+1;
    }
    return -1;
    }

int main(){
    vector<int>v(5);
    iota(v.begin(),v.end(),1);
  
    cout<<search(v,6);
    return 0;
}