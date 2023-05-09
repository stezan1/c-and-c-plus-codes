#include<iostream>
using namespace std;
class college
{
    char name[20],loc[20];
public:
    void getdata()
    {
        cout<<"enter name and location of college: ";
        cin>>name>>loc;
    }
    void display()
    {
        cout<<"name of college = "<<name<<" and location = "<<loc<<endl;
    }
};
class student:public college
{
    char name[20];
    int roll;
public:
    void getdata()
    {
        cout<<"enter name and roll no of student: ";
        cin>>name>>roll;
    }
    void display()
    {
        cout<<"name of student = "<<name<<" and roll no = "<<roll<<endl;
    }
};
class teacher:public college
{
    char name[20];
    int code;
public:
    void getdata()
    {
        cout<<"enter name and code of teacher: ";
        cin>>name>>code;
    }
    void display()
    {
        cout<<"name of college = "<<name<<" and code = "<<code<<endl;
    }
};
int main()
{
    teacher t;
    student s;
    t.college::getdata();
    t.getdata();
    //s.college::getdata();
    s.getdata();
    t.college::display();
    t.display();
    //s.college::display();
    s.display();
    return 0;
}
