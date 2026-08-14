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
        ss>>nbr;
        vec.push_back(nbr);
        printVec(vec);
    }else if(cmd=="insert"){
        int pos,nbr;
        ss>>pos>>nbr;
        if(pos>=0&&pos<=vec.size()){
            vec.insert(vec.begin()+pos,nbr);
        }
        printVec(vec);

    }else if(cmd=="extend"){
        vector<int>temp=vec;
        vec.insert(vec.end(),temp.begin(),temp.end());
        printVec(vec);
    }else if(cmd=="reverse"){
        reverse(vec.begin(),vec.end());
        printVec(vec);
    }else if(cmd=="index"){
        int idx;
        ss>>idx;
        auto it=find(vec.begin(),vec.end(),idx);
        if(it!=vec.end()){
            cout<<distance(vec.begin(),it)<<endl;
        }
        else
        cout<<-1<<endl;
    }else if(cmd=="length"){
        int size=vec.size();
        cout<<size<<endl;
    }else if(cmd=="count"){
        int nbr;
        ss>>nbr;
        cout<<count(vec.begin(),vec.end(),nbr)<<endl;
    }else if(cmd=="sort"){
        sort(vec.begin(),vec.end());
        printVec(vec);

    }
    }
     
    return 0;
}