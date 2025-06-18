#include <iostream>
#include<vector>
using namespace std;


void printRev(vector<int>& vec, int size){

  if(size<0)
  return;
  else{
   cout<<vec[size]<<" ";
   printRev(vec,size-1);
  }

}
int main() {
    vector<int>vec={4,1,7,6};

    printRev(vec,vec.size()-1);
    return 0;
}