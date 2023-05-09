#include<iostream>
using namespace std;
class person
{
    private:
    char name;
    int age;
    long int cn;
    char address;

    public:
    person()
    {

    }
    person input(person &p1)
    {
        cout<<"name:";
        cin>>p1.name;
        cout<<"age:";
        cin>>p1.age;
        if(age>=16)
        {
        cout<<"citizen no. :";
        cin>>p1.cn;
        }
        cout<<"address:";
        cin>>p1.address;
    }
    person( person &p1)
    {
        name = p1.name;
        age = p1.age;
        if(age>=16)
        {
        cn = p1.cn;
        }
        else
        {
           cn = 0;
        }

        address = p1.address;
    };
    void display( person &p1)
    {
        cout<<"name:"<<p1.name<<endl;
        cout<<"age:"<<p1.age<<endl;
        cout<<"citizen no. :"<<p1.cn<<endl;
        cout<<"address:"<<p1.address<<endl;
    }
};

int main()
{
    person p1;
    person p2 = p1;
    p2=p2.input(p1);
    p2.display(p1);
    return 0;
}
