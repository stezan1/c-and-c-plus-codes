#include<iostream>
using namespace std;
template <class t>
class add
{
    t a,b;
    public:
       void getdata()
    {
        cout<<"\nenter a and b :\n";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"sum = "<<a+b<<endl;
    }
};
int main()
{
   add<int>obj1;
   add<float>obj2; 
   obj1.getdata();
   cout<<"sum of integer :\n";
   obj1.display();
   obj2.getdata();
   cout<<"sum of float :\n";
   obj2.display();
}