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
   cout << endl;

   //count function which returns the count of the keys in the map(0 or 1) as keys are unique in the map
   cout << mp.count("Key");

   //It is same in the case of ordered map but it's time complexity is more when compared to unordered map(O(1))
   //ordered map follows some order and it is implemented using self balancing binary search tree and whereas unordered map is implemented using HashTable

    
   //Deletion 
   
  return 0;
}