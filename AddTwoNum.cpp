#include<iostream>
using namespace std;

int add(int n1,int n2) {
    int carry=0;
    int result=0;
    int place=1;

    while (n1>0||n2>0||carry>0) {
        int a=n1%10;
        int b=n2%10;
        n1/=10;
        n2/=10;
        
        int sum=a+b+carry;
        carry=sum/10;
        result+=(sum%10)*place;
        place*=10;
    }
    
    return result;
}

int main() {
    int n1,n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin >> n2;
    cout<<"Sum: "<<add(n1,n2)<<endl;
    return 0;
}
