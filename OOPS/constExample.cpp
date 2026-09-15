#include<iostream>
using namespace std;

int main(){
    // x is constant.
    const int x=5;
    // initialization can be done.
    //bu we can't re-assign a avlue.
    // x=10;
    ///cout<< x<<endl;
    // 2 const with pointers
    const int *a=new int(2); // CONST data, NON CONST pointer.
    int const *a=new int(2);
    // as same as the above (2nd way to write const)
    // *a=20; // Cant change the content
    // cout<<*a<<endl;
    int b=5;
    a=&b;// pointer itself can be reassigned 
    cout<<*a<<endl;
    return 0;
}