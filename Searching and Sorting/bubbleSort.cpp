#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>&vec){
    int n=vec.size();

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>arr={5,4,1,8};

    bubbleSort(arr);

    for(int nbr:arr){
        cout<<nbr<<" ";
    }

    return 0;
}