#include <iostream>
#include<cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char ch;
    // a-z :97-122
    // A-Z-65-90
    // 0-9-48-57
    cin >> ch;

    if(isalpha(ch))
    {
        cout << "It is an alphabet" << endl;
    }else if(isdigit(ch)){
        cout << "It is a digit" << endl;
    }else{
        cout << "Special character" << endl;
    }
    if(isalnum(ch)){
        cout << "It is either digit or alphabet" <<endl;
    }
    cout << (char)tolower(ch) << endl;
    cout << (char)toupper(ch) << endl;

    return 0;
}