#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
void printVec(vector<int>v){
vector<int>::iterator i=v.begin();
  while(i!=v.end()){
    cout << *(i) << " ";
    i++;
  }
  cout << endl;
}

int main() {
  vector<int>v(4);
  v[0]=5;
  v[1]=6;
  v[2]=4;
  v[3]=1;
  // Calculates the sum of elements in particualar range
  // Zero is the default value
  int sum=accumulate(v.begin(),v.end(),0);
  cout << sum << endl;
vector<int>v1(4);
  v1[0]=5;
  v1[1]=6;
  v1[2]=4;
  v1[3]=1;

vector<int>v2(4);
  v2[0]=15;
  v2[1]=2;
  v2[2]=4;
  v2[3]=10;
  //Calculates the product of two vectors and finally their sum
int ans=inner_product(v1.begin(),v1.end(),v2.begin(),0);
cout << ans <<endl;  // Output: 113 (5*15 + 6*2 + 4*4 + 1*10)
  vector<int>r(v1.size());
  partial_sum(v1.begin(),v1.end(),r.begin());
  printVec(r);

  //Fills a range with incrementing values
  vector<int>vc(5);
  iota(vc.begin(),vc.end(),2);
  printVec(vc);
  return 0;
}