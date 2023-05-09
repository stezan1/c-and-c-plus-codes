#include<iostream>
using namespace std;
class factorial
{
	int f= 1,num,i;
	public :
		void fact()
		{
			cout<<"enter any number";
			cin>>num;
			for(i=1;i<=num;i++)
			{
				f=f*i;
			}
		}
		void display()
		{
		cout<<"factorial of "<<num<<" is "<<f;
	    }
};
int main()
{
	factorial f1;
	f1.fact();
	f1.display();
	return 0;
}
