#include<iostream>
using namespace std;
void subSequencesByIncludeExcludeMethod(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subSequencesByIncludeExcludeMethod(ros, ans+ch);
    subSequencesByIncludeExcludeMethod(ros, ans);

}