#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
vector<int>v(4);
  v[0]=1;
  v[1]=2;
  v[2]=3;
  v[3]=4;
  v[4]=6;
  bool a=binary_search(v.begin(),v.end(),4);
  cout << a << endl;      // Output: 1
   // Searches for a value in the container and 
   //returns it's iterator if not found gives the iterator of the value which is just greater than the given value
  auto b=lower_bound(v.begin(),v.end(),5);
  cout << *(b) <<endl;  // Output: 6

  //Gives the next greater value than the given value
  b=upper_bound(v.begin(),v.end(),2);  //Output : 3
   cout << *(b);
  auto range = equal_range(v.begin(), v.end(), 3);
    if (range.first != range.second) {
        cout << "Elements equal to 3 found in range: ";
        for (auto it = range.first; it != range.second; ++it) {
            cout << *it << " ";
        }
        cout << endl; // Output: Elements equal to 3 found in range: 3
    } else {
        cout << "No elements equal to 3 found" << endl;
    }



    //gives max of two numbers
    int m=max(5,10);
    cout << m << endl; // Output: 10
    //Gives the min of two numbers
    int mini=min(5,10);
    cout << mini <<endl;  // Output: 5

    b=min_element(v.begin(),v.end());
    cout << *(b) << endl;

    b=max_element(v.begin(),v.end());
    cout << *(b) << endl;



  return 0;
}