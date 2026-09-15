#if !defined(BIRD_H)
#include<iostream>
using namespace std;
#define BIRD_H

class Bird
{
    public:
        virtual void eat()=0;
        virtual void fly()=0;
        // Classes that inherits this class
        // has to implement pure vitual functions.
};

class Sparrow: public Bird
{
    public:
    void eat()
    {
        cout << "Sparrow eats\n";
    }
    void fly()
    {
        cout<< "Sparrow is flying\n";
    }
};
class eagle : public Bird
{
    public:
    void eat()
    {
        cout << "eagle eats\n";
    }
    void fly()
    {
        cout<< "eagle is flying\n";
    }
};

#endif // BIRD_H