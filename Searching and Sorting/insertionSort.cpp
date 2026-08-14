#include <bits/stdc++.h>
using namespace std;
void insertSort(vector<int>&vec){
    int n=vec.size();
    for(int i=1;i<n;i++){
        int key=vec[i];
        int j=i-1;
        while(j>=0&&key<vec[j]){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=key;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>vec={5,4,3,2,1};
    insertSort(vec);
    for(int num:vec){
        cout<<num<<" ";
    }
    return 0;
}