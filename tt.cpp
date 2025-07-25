#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    int marks;

public:
    void inputStudent() 
    {
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enterthe roll number of the student"<<endl;
        cin>>roll;
        cout<<"enter the marks of the student"<<endl;
        cin>>marks;
    }

    void diaplaydata()
    {
        cout <<"name:"<<name<<endl;
        cout <<"roll:"<<roll<<endl;
        cout <<"marks:"<<marks<<endl;
    }
};

    int main()
    {
    Student s;
    s.inputStudent();
    s.diaplaydata();
    }