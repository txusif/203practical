#include<iostream>
using namespace std;

float sum(float var1, float var2)
{
    return var1+var2;
}

int sum(int var1, int var2)
{
    return var1+var2;
}

int main()
{
    int a, b, c;
    float m, n, p;

    cout<<"Enter 2 Integer numbers: ";
    cin>>a>>b;

    cout<<"Enter 2 Float numbers: ";
    cin>>m>>n;

    c = sum(a, b);
    p = sum(m, n);

    cout<<"Int sum: "<<a<<" + "<<b<<" = "<<c<<endl;
    cout<<"Float sum:"<<m<<" + "<<n<<" = "<<p<<endl;
    return 0;
}