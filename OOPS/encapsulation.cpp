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
private:
    float *gpa;
    string gf;
public:
    void setGpa(float gpa)
    {
        *(this->gpa) = gpa;
    }
    float getGpa()
    {
        return *(this->gpa);
    }
    // ctor: Default Contructor
    Student()
    {
        cout << "Student default ctor called" << endl;
    }

    // ctor: Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa,string gf)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->gpa=new float(gpa);
        this->nos = nos;
        this->gf=gf;
    }

    // copy ctor
    // Student(const Student &srcob)
    // {
    //     cout << "Student copy ctor"<<endl;
    //     this->id = srcob.id;
    //     this->age = srcob.age;
    //     this->name = srcob.name;
    //     this->nos = srcob.nos;
    // }
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
        delete this->gpa;
    }
private:
    void gfchatting()
    {
        cout << "Chatting with gf" << endl;
    }

};
int main()
{

    Student A(3,11,"Yogi",5,9.5,"kuchbhi");
    cout << A.getGpa() << endl;
    A.setGpa(9.7);
    cout << A.getGpa() <<endl;
    
    return 0;
}