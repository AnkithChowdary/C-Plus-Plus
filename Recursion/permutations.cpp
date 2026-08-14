#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
stack<int>st;
void solve(vector<int> &nums,vector<int>&temp){
    if(temp.size()==nums.size()){
    res.push_back(temp);
    return;
    }

    for(int i=0;i<nums.size();i++){
      if(find(temp.begin(),temp.end(),nums[i])==temp.end()){
        temp.push_back(nums[i]);
      
      
      solve(nums,temp);
      temp.pop_back();
      }
    
      
    }
}

int main(){
  vector<int>arr={1,4,5,6};
  
  vector<int>temp;
  solve(arr,temp);
  for(auto &v : res) {
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
}
  
  return 0;
}