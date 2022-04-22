#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNo;
    char name[20];
    void getData()
    {
        cout<<"Enter Student roll number: ";
        cin>>rollNo;

        cout<<"Enter Student name: ";
        cin>>name;
    }
};

class Marks : public Student
{
    public:
    int science, math, geography;
    void getMarks()
    {
        cout<<"Enter Science marks: ";
        cin>>science;
        cout<<"Enter Math marks: ";
        cin>>math;
        cout<<"Enter Geography marks: ";
        cin>>geography;
    }
};

class Result : public Marks
{
    int total;
    float avg;
    char grade;
    public:
    void displayResult()
    {
        total = science+math+geography;
        avg = total/3;

        if (avg>=80) grade = 'O';
        else if (avg>=70 && avg<80) grade = 'A';
        else if (avg>=50 && avg<70) grade = 'B';
        else if (avg>=40 && avg<50) grade = 'C';
        else grade = 'F';

        cout<<"Roll no: "<<rollNo<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Total marks: "<<total<<endl;
        cout<<"Average: "<<avg<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

int main()
{
    Result obj;
    obj.getData();
    obj.getMarks();
    obj.displayResult();
    return 0;
}