#include<iostream>
#include "bird.h"
using namespace std;
void birddoesSomething(Bird*&bird){
    bird->eat();
    bird->fly();
}
int main()
{
    Bird* bird = new Sparrow();
    birddoesSomething(bird);
    return 0;
}