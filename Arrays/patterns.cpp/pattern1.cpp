#include<iostream>
using namespace std;


int main() {
  int arr[]={10,20,30,40,50};
  for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
      cout << arr[i] << "    " << arr[j] << endl;
    }
  }
}