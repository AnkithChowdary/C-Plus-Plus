#include<iostream>
#include<string>

using namespace std;

class Vehicle{
private:
    string name;
public:
    string model;
    int noOfTypres;
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }



    Vehicle(string name, string model, int noOfTypres)
    {
        cout << "Inside vehicle ctor" << endl;
        this->name=name;
        this->model=model;
        this->noOfTypres=noOfTypres;
    }
public:
    void start_engine()
    {
        cout << "Engine is starting" << name << " " << model << endl;
    }
    
    void stop_engine()
    {
        cout << "Engine is stopping"<< name << " " << model << endl;
    }
};

class Car : public Vehicle
{
public:
    int noOfDoors;
    string transmissionType;

    Car(string name, string model, int noOfTypres, int noOfDoors, string transmissionType):Vehicle(name,model,noOfTypres)
    {
        cout << "Inside car Ctor" << endl;
        this->noOfDoors=noOfDoors;
        this->transmissionType=transmissionType;
    }
public:
    void startAC()
    {
        cout << "AC has started of " << this->getName() << endl;
    }
    void stop_engine()
    {
        cout << "Engine is stopping " << this->getName() << " " << model << endl;
    }

};
int main(){
    Car A("Honda","500",4,4,"kuchbhi");
    
    return 0;
}
