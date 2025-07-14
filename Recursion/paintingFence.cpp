#include <iostream>
#include<vector>
using namespace std;
 int solve(int n,int k){
        if(n==1)
        return k;
        
        if(n==2)
        return k+k*(k-1);
        
        
        int ans=(k-1)*(solve(n-1,k)+solve(n-2,k));
        return ans;
    }
    int countWays(int n, int k) {
        // code here
        return solve(n,k);
    }
int main() {
    cout<<countWays(3,2);
    return 0;
}