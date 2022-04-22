#include <iostream>
using namespace std;

class complex
{
    int real,imag;
    public:
    void set()
    { 
        cout<<"Enter Real and Imaginary part: "<<endl;
        cin>>real>>imag;
    }

    friend complex sum(complex a,complex b)
    {
        complex c;
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        return c;
    }
    
    void display()
    { 
        cout<<"Complex number: "<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    complex a,b,c;
    a.set();
    b.set();
    // a.display();
    // b.display();
    c=sum(a,b);
    c.display();
    return(0);
}