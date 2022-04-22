#include<iostream>
using namespace std;

class Base
{
    public:
    void print()
    {
        cout<<"Hello World"<<endl;
    }
};

class Derived : public Base
{
    public:
    void print()
    {
        cout<<"Hello wassup :)"<<endl;
        Base::print();
    }
};

int main()
{
    Derived obj;
    obj.print();
    return 0;
}