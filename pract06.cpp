#include<iostream>
using namespace std;

class Shape
{
    public:
    int a, b;
    Shape()
    {
        a=0;
        b=0;
        cout<<"Constructor of Shape class called"<<endl;
    }
    void area()
    {
        cout<<"Shape area undefined"<<endl;
    }
    ~Shape()
    {
        cout<<"Destructor of Shape class called"<<endl;
    }
    
};

class Rectangle : public Shape
{
    public:
    Rectangle()
    {
        a=10;
        b=20;
        cout<<"Constructor of Rectangle class called"<<endl;
    }
    void area1()
    {
        cout<<"Rectangle area is "<<a*b<<endl;
    }
    ~Rectangle()
    {
        cout<<"Destructor of Rectangle class called"<<endl;
    }
};

int main()
{
    Rectangle obj;
    obj.area();
    obj.area1();
    return 0;
}