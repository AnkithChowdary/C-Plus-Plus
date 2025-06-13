class Solution {
public:
    
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=-1;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long prod=mid*mid;
            if(prod==x)
            return mid;
            else if(prod<x)
            {
                ans=mid;
                s=mid+1;
            }else{
               e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};