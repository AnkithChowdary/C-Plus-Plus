#include<iostream>
using namespace std;

class abc{
    
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}
    // default copy constructor: it doesn shallow copy
    // abc(const abc &obj)
    // {
    //     x=obj.x;
    //     y=obj.y;
    // }
    // Deep copy
    // now we have different memory locations
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }


    void print() const{
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n",x,y,*y);
    }
};
int main(){
    abc a(1,2);
    a.print();
    abc b=a;
    b.print();
    *b.y=20;
    b.print();

    a.print();
    return 0;
}