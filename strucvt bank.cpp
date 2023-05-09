#include<stdio.h>
#include<conio.h>
#include<string.h>
struct customer
{
	char name[50];
    int acc_nmbr;
    float balance;
};
struct customer c[100];

int main()
{
	int i,n,max;
	printf("\nhow many customers:");
	scanf("%d",&n);
	printf("\ninput information of %d customers",n);
	for(i=0;i<n;i++)
	{
		printf("\n name[%d]",i+1);
		gets(c[i].name);
		printf("\naccount nmbr[%d]",i+1);
		scanf("%d",&c[i].acc_nmbr);
		printf("\nbalance[%d]",i+1);
		scanf("%d",&c[i].balance);
	}
	max=c[0].balance;
	for(i=0;i<n;i++)
	{
		if(c[i].balance>max)
		  max=c[i].balance;
	}
	for(i=0;i<n;i++)
    {
    	if(c[i].balance==max)
    	printf("\n%s\t%d\t%d",c[i].name,c[i].acc_nmbr,c[i].balance);
	}
	getch();
}
