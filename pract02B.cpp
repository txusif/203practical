#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    while(i<=19)
    {
        i++;
        if (i==10)
        {
            continue;
        }
        else
        {
            cout<<i<<" ";
        }
    }
    return 0;
}