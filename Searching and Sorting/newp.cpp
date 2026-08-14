#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int>vec){
    for(int num:vec){
        cout<<num<<" ";
    }
    cout<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    cin.ignore();
    vector<int>vec;
    while(n-->0){
        string line;
        getline(cin,line);
        stringstream ss(line);
        string cmd;
        ss>>cmd;
    
    if(cmd=="append"){
        int nbr;
        cin>>nbr;
        vec.push_back(nbr);
    }else if(cmd=="insert")
        int pos,nbr;
        cin>>pos>>nbr;
        if(pos>=0&&pos<vec.size()){
            insert(vec.begin()+pos,nbr);
        }
        

    }else if(cmd=="extend"){
        vector<int>temp=vec;
        insert(vec.end(),temp.begin(),temp.end());
    }else if(cmd=="reverse"){
        reverse(vec.end(),vec.end());
    }else if(cmd=="index"){
        int idx;
        cin>>idx;
        if(idx<0||idx>=vec.size())
        cout<<-1<<endl;
        else
        cout<<vec[i]<<endl;
    }else if(cmd=="length"){
        int size=vec.size();
        cout<<size<<endl;
    }else if(cmd=="count"){
        int nbr;
        cin>>nbr;
        cout<<count(vec.begin(),vec.end(),nbr)<<endl;
    }else if(cmd=="sort"){
        sort(vec.begin(),vec.end());
        printVec(vec);

    }
     
     
    return 0;
}