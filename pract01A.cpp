#include<iostream>
using namespace std;

class Number
{
    private:
    int a, b;
    public:
    void readNumbers()
    {
        cout<<"Enter 2 numbers: "<<endl;
        cin>>a>>b;
    }

    void printNumber()
    {
        cout<<"a= "<<a<<", b= "<<b<<endl;
    }

    int calAddition()
    {
        return a+b;
    }
};

int main()
{
    Number obj;
    obj.readNumbers();
    obj.printNumber();
    int result = obj.calAddition();
    cout<<"Result: "<<result<<endl;
    return 0;
}