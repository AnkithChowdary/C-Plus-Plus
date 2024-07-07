#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

  //Un ordered map 
  unordered_map<string, string>mp;
  mp.insert(make_pair("key1","value1"));
  mp.insert(make_pair("key2","value2"));
  // unordered_map<string,string>::iterator it=mp.begin();
  //Insertion using index
  mp["Name"]="Ankith";
  //Insertion by creating pairs and then adding to the map
  pair<string,string>p;
  p.first="Name1";
  p.second="Yogendra";
  mp.insert(p);

  //Value at key
  cout << mp.at("Name1");

  return 0;
}