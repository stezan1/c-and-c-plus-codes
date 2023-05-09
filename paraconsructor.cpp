#include<iostream>
using namespace std;
class time
{

    int hr,mm,ss;
public:
    time()
    {

        hr=0;
        mm=0;
        ss=0;
    }
    time(int h,int m,int s)
    {

        hr=h;
        mm=m;
        ss=s;
    }
    void display()
    {
    cout<<hr<<":"<<mm<<":"<<ss<<endl;
    }
    void add(time t1,time t2);
};
void time::add(time t1,time t2)
{

    ss=t1.ss+t2.ss;
    mm=ss/60;
    ss=ss%60;
    mm=mm+t1.mm+t2.mm;
    hr=mm/60;
    mm=mm%60;
    hr=hr+t1.hr+t2.hr;
}
int main()
{

    time t1(5,6,45);
    time t2(3,7,33);
    time t3;
    t3.add(t1,t2);
    t3.display();
    return 0;
}
