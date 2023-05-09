#include<iostream>
using namespace std;
class person
{
    string name,address;
    int age;
    double cno;
public:
        person()
        {
            cout<<"enter name\n";
            cin>>name;
            cout<<"enter address\n";
            cin>>address;
            cout<<"enter age\n";
            cin>>age;
            cout<<"enter citizenship nmbr\n";
            cin>>cno;
        }
        person(person &p1)
        {
            name=p1.name;
            address=p1.address;
            age=p1.age;
            cno=p1.cno;
            if(p1.age>16)
                cout<<age<<"="<<"0";
            cout<<p1.name<<p1.address<<p1.age<<p1.cno;
        }
};

int main()
{
    person p1;
    person p2(p1);
    return 0;
}
