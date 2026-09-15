#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    // ctor: Default Contructor
    Student()
    {
        cout << "Student default ctor called" << endl;
    }

    // ctor: Parameterized Constructor
    Student(int id, int age, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // copy ctor
    Student(const Student &srcob)
    {
        cout << "Student copy ctor"<<endl;
        this->id = srcob.id;
        this->age = srcob.age;
        this->name = srcob.name;
        this->nos = srcob.nos;
    }
    // Behaviour / Methods / Functions
    void study()
    {
        cout << this->name << "Studying" << endl;
    }

    void sleep()
    {
        cout << this->name << "Sleeping" << endl;
    }

    void  bunk()
    {
        cout <<  this->name << "Bunking" << endl;
    }

    ~Student()
    {
        cout << "Dtor called" << endl;
    }

};
int main()
{
    // Student A(1,15,"Ankith",6); // Stack
    // Student B(1,15,"Yogi",6);
    // Student C(1,15,"Bhom",6);
    // Student D(1,15,"Sonu",6);

    // copy ctor
    // Student B=A;

    // cout << B.name <<endl;

    // Dynamic Allocation , or Student pointer
    Student *A=new Student(1,14,"Rohith",7);
    cout << A->age << endl;
    A->study();
    // When u allocate memory dynamically we need this delete things by ourselves then only distructor gets called
    delete A;
    return 0;
}