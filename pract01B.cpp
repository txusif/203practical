#include<iostream>
using namespace std;

class Employee
{
    private:
    char name[30];
    int age;
    float salary;
    void getInfo();
    public:
    void displayInfo();
};

void Employee :: getInfo()
{
    cout<<"Enter Employee name: "<<endl;
    cin>>name;

    cout<<"Enter Employee age: "<<endl;
    cin>>age;

    cout<<"Enter Employee salary: "<<endl;
    cin>>salary;
}

void Employee :: displayInfo()
{
    getInfo();
    cout<<"Employee name: "<<name<<endl;
    cout<<"Employee age: "<<age<<endl;
    cout<<"Employee salary: "<<salary<<endl;
}

int main()
{
    Employee obj;
    obj.displayInfo();
    return 0;
}