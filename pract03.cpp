#include<iostream>
using namespace std;

class Array
{
    int A[5];
    public:
    void setData();
    void displayData();
};

void Array :: setData()
{
    for(int i=0;i<5;i++)
    {
        cout<<"Enter 5 array elements: ";
        cin>>A[i];
    }
}

void Array :: displayData()
{
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    Array arr;
    arr.setData();
    arr.displayData();
    return 0;
}