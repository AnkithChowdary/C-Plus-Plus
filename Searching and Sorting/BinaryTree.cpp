#include<bits/stdc++.h>
using namespace std;


class node{
  int n;
  node *left;
  node *right;

  node(int val){
    int n=val;
    this->n=val;
    left=NULL;
    right=NULL;
  }
};
