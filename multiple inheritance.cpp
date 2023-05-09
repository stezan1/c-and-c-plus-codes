#include<iostream>
using namespace std ;
class publication
{
    char title[20];
    int price;
public:
    void getdata()
    {
        cout<<"enter title and price:";
        cin>>title>>price;
    }
    void display()
    {
        cout<<"title= "<<title<<"price= "<<price<<endl;
    }
};
class sales
{
    int total_sales;
public:
    void getdata()
    {
        cout<<"enter total sales :";
        cin>>total_sales;
    }
    void display()
    {
        cout<<"total sales= "<<total_sales<<endl;
    }
};
class book:public publication,public sales
{
    char author[20];
    int page;
public:
    void getdata()
    {
        cout<<"enter authors name and page:";
        cin>>author>>page;
    }
    void display()
    {
        cout<<"authors name= "<<author<<"page= "<<page<<endl;
    }
};
    int main()
    {
        book b;
        b.getdata();
        b.publication::getdata();
        b.sales::getdata();
        b.display();
        b.publication::display();
        b.sales::display();
        return 0;
    }
