#include<iostream>
using namespace std;

class arrayaddition
{
    int A[10][10], B[10][10], C[10][10];
    public:
    void getdata(int m, int n);
    void displaydata(int m, int n);
};

void arrayaddition::getdata(int m, int n)
{
    cout<<endl<<"Enter elements for array A: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl<<"Enter elements for array B: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>B[i][j];
        }
    }
}

void arrayaddition::displaydata(int m, int n)
{
    cout<<endl<<"Array C: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
             C[i][j] = A[i][j] + B[i][j];
             cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int m, n;
    cout<<"enter number of rows: "<<endl;
    cin>>m;
    cout<<"Enter number of columns: "<<endl;
    cin>>n;
    arrayaddition obj;
    obj.getdata(m, n);
    obj.displaydata(m, n);
    return 0;
}