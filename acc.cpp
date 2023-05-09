#include<iostream>
using namespace std;
class account
{
	string name;
	char acctype[20];
	double accnmbr;
	float balance,d,w;
	public:
		void getinfo();
		void displayinfo();
        void deposite();
        void withdraw();
};
void account::getinfo()
{
	cout<<"\nenter name :";
	cin>>name;
	cout<<"\nenter account number :";
	cin>>accnmbr;
	cout<<"\nenter account type :";
	cin>>acctype;
		cout<<"\nenter balance ammount :";
	cin>>balance;
}
void account::deposite()
{
	int d;
	cout<<"\nenter ammount to deposite :";
	cin>>d;
	balance=balance+d;
}
void account::withdraw()
{
	int w;
	cout<<"\nenter ammount to withdraw :";
	cin>>w;
if (w<balance)
 	{
 		balance=balance-w;
    }
else
    {
		cout<<"not enough balance";
	}
}
void account::displayinfo()
{
	cout<<"\naccount holder name ="<<name;
    cout<<"\ncurrent balance amount ="<<balance;
}
int main()
{
	int i,n;
	cout<<"\nenter nmbr of people :";
	cin>>n;
	account a[n];
	for(i=0;i<n;i++)
    {
	a[i].getinfo();
	a[i].withdraw();
	a[i].deposite();
	a[i].displayinfo();
    }
	return 0;
}
