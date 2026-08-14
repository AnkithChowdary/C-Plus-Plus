#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&vec){
    int n=vec.size();
    

    for(int j=0;j<n;j++){
        int minidx=j;
        for(int i=j+1;i<n;i++){
            if(vec[i]<vec[minidx]){
                minidx=i;
            }
        }
        swap(vec[j],vec[minidx]);
    
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>vec={5,4,3,2,1};
    selectionSort(vec);
    for(int num:vec){
        cout<<num<<" ";
    }
    return 0;
}