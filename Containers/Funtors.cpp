#include <bits/stdc++.h>
using namespace std;

class meraFun{
    public:
        bool operator()(int a,int b){
            return a>b;
        }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    meraFun f;
    if(f(1,4)==true){
        cout<<"1 is greater than 4";
    }else{
        cout<<"No";
    }


    return 0;
}