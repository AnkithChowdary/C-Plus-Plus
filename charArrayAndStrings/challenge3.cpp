#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    return ch=='a'||ch=='e'|| ch=='o'||ch=='u';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
    Length
    Number of spaces
    Number of vowels
    Number of consonants
    Number of digits
    */
    
    string s;
    getline(cin,s);
    int spaceCnt=0;
    int consCnt=0;
    int digitsCnt=0;

    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            digitsCnt++;
        }else if(isspace(s[i])){
            spaceCnt++;
        }
        if(isalpha(s[i])){
            if(isVowel(s[i])){

            }
        }
    }

    return 0;
}