#include<iostream>
#include<string>
using namespace std;
void subSequences(string s, string ans,int index){
    if(index==s.length()){
        cout<<ans<<endl;
        return;
    }
    // Exclude
    subSequences(s,ans,index+1);
    // Include
    ans.push_back(s[index]);
    subSequences(s,ans,index+1);
    

}
int main(){
    string s = "ABC";
    subSequences(s,"",0);
    return 0;
}