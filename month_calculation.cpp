/*  program to input milk in ltrs and months and calculate total amount to be paid  */

#include<iostream>
using namespace std;

int main()
{
    int mnth,ltr,total;
    char opt;
    cout<<"a : 1 ltr\nb : 1/2 ltr\nchoose option : ";
    cin>>opt;
    cout<<"enter month :";
    cin>>mnth;
    if(opt=='a')
    {
        total=30*60*mnth;
    }
    else if(opt=='b')
    {
        total=30*30*mnth;
    }
    else
    {
    cout<<"invalid options ,try again\n";
    }

    cout<<"total = "<<total;

}
