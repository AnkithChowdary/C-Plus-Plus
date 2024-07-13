#include<iostream>
using namespace std;


int main() {
  int arr[]={10,20,30,40,50};
  for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
      cout << arr[i] << "    " << arr[j] << endl;
    }
  }
}
//Output:
// 20    10
// 30    10
// 30    20
// 40    10
// 40    20
// 40    30
// 50    10
// 50    20
// 50    30
// 50    40