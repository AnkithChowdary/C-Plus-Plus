#include<iostream>
using namespace std;

int main() {
  char arr[100];
  cin>>arr;
  cout << arr;
  cin.getline(arr,100);
  cout << arr << endl;


  // To specify the delimiter
  cin.getline(arr,100,'\t');
  cout << arr;
}