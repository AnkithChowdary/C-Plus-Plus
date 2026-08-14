#include <bits/stdc++.h>
using namespace std;
int findUpperBound(vector<int>&vec,int x){
    int low=0;
    int high=vec.size()-1;

    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(vec[mid]>x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int findLowerBound(vector<int>&vec,int x){
    int low=0;
    int high=vec.size()-1;

    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(vec[mid]>=x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int x=6;
    vector<int>vec={1,4,5,10,11};
    int lower=lower_bound(vec.begin(),vec.end(),);
    cout<<lower<<endl;

    cout<<"Lower bound of"<<x<<" is "<<findLowerBound(vec,x)<<endl;

    cout<<"Upper bound of"<<x<<" is "<<findUpperBound(vec,x)<<endl;

    return 0;
}