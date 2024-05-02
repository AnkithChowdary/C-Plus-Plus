#include<iostream>
using namespace std;
int DtoB(int n){
    int r=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        r=r*10+bit;
        n=n/2;
         i++;
    }
    return r;
}
int main()
{
    int n;
    cin>>n;
    int r=DtoB(n);
    cout<<r;
    return 0;
}

