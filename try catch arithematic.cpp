#include<iostream>
using namespace std;
int main()
{
    int a,b,choice,sum,mul,sub,div;
    char op;
    cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    cout<<"input operator  :"<<endl;
    cin>>op;
    

switch (op)
{
    case '+':
    sum=a+b;
    cout<<" sum = "<<sum;
    break;
    
    case '-':
    sub=a-b;
    cout<<" subtraction  = "<<sub;
    break;
    
    case '*':
    mul=a*b;
    cout<<" multiplication = "<<mul;
    break;
    
    case '/':
    try
    {
if (b!=0)
{
div=a/b;
cout<<"division = "<<div<<endl;
}
else
 throw(b);
    }
    catch(int y)
    {
        cout<<"cannot divide  by"<<y<<endl;
        cout<<"enter other number"<<endl;
    }
   return 0;
}
}
