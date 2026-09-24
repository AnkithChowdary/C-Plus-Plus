#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s="Ankith Chowdary";
    cout << s.length() << endl;

    s.clear();
    cout << s.empty() << endl;

    s.append("Ankith chowdary");
    cout << s << endl;

    cout << s.front() << endl;
    cout << s.back() << endl;

    s.pop_back();
    cout << s << endl;

    cout << s.length() << endl;
    cout<< s.capacity() <<endl;
    s.insert(14,"y");
    cout << s << endl;

    s.erase(0,7);
    cout << s <<endl;

    s.replace(0,5,"ankith");
    cout << s << endl;

    cout << s.substr(0,6) << endl;

    if(s.find("ankith")==string::npos){
        cout << "Not found" <<endl;
    }else{
        cout << "Found" <<endl;
    }
    // similary we have rfind()- finds last occurrence

    string a="apple";
    string b="Apple";
    cout << "Compare(): " << a.compare(b) <<endl;

    // resize()

    // resize with fill .resize(8,'x')

    // string to integer
    string num="1234";
    int n=stoi(num);
    

    string longNum="12345";
    int l=stol(longNum);


    string bigNum="123456789123";
    long long ll=stoll(bigNum);

    // number to string
    int val=100;
    string con=to_string(val);
    


    

    return 0;
}