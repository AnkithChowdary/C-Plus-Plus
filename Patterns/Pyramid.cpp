#include<iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      for(int s=0;s<n-i-1;s++){
        cout<<" ";
      }

      for(int a=0;a<i+1;a++){
        cout<<"* ";
      }
      cout<<endl;

    }
    
}