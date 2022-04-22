#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
    ofstream f1("hello.txt");
    f1<<"@txusif"<<endl;
    f1.close();

    char myText[100];
    ifstream f2("hello.txt");
    while(f2)
    {
        f2>>myText;
        cout<<myText<<" ";
    }
    f2.close();
    return 0;
}