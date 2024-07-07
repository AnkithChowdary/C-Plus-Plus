#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

  //Un ordered map 
  unordered_map<string, string>mp;
  mp.insert(make_pair("key1","value1"));
  mp.insert(make_pair("key2","value2"));
  
  //Insertion using index
  mp["Name"]="Ankith";
  //Insertion by creating pairs and then adding to the map
  pair<string,string>p;
  p.first="Name1";
  p.second="Yogendra";
  mp.insert(p);

  //Value at key
  cout << mp.at("Name1") << endl;
  //Updation at key
  mp.at("Name1")="Bhomraj";
  cout << mp.at("Name1") <<endl;

  // we can even use the indexing way to modify the value of a specific key


  //Iterating map using iterator
  unordered_map<string,string>::iterator it=mp.begin();
  while (it!=mp.end()) {
    pair<string,string>p=*it;
    cout << p.first << " " << p.second <<endl;
    it++;
  }


  //Finding the key in the map
   (mp.find("key2")!=mp.end())?(cout << "Key found"):cout <<"Key not found";
  return 0;
}