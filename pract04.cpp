#include<iostream>
using namespace std;

class ArrayAddition
{
    private:
    int a[10][10], b[10][10], c[10][10];
    public:
    void getData(int m, int n);
    void displayData(int m, int n);
};

void ArrayAddition :: getData(int m, int n)
{
    int i;
    cout<<"Enter elements for array A: ";
    for(i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements for arrray B: ";
    for(i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }
};

void  ArrayAddition :: displayData(int m, int n)
{
    cout<<"Array C: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j =0; i<n; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    ArrayAddition obj;
    int m, n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    obj.getData(m, n);
    obj.displayData(m, n);
    return 0;
}