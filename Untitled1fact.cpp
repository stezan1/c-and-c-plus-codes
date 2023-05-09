#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int result,n;
	printf("enter value of n :");
	scanf("%d",&n);
	result=fact(n);
	printf("factorial=%d",result);
	getch();
}
int fact(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	fact=fact*i;
	return(fact);
	
}
