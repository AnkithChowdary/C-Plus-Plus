#include<iostream>
using namespace std;
class TrieNode{
public:
    TrieNode* children[26];
    bool isLeaf;
    trie(){
        isLeaf=false;

        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
        
    }

    void insert(TrieNode*root,const string& key){
        TrieNode* curr=root;

        for(char ch:key){
            if(curr->children[ch-'a']==nullptr){
                TrieNode* newNode=new TrieNode();

                curr->children[ch-'a']=newNode;
            }
            curr=curr->children[ch-'a'];
        }
        curr->isLeaf=true;
        
    }

    
};



int main(){


    return 0;
}