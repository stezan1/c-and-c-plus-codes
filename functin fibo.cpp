#include<stdio.h>
#include<conio.h>
void fibo(int);
int main()
{
	int n;
	printf("enter value of n :");
	scanf("%d",&n);
	fibo(n);
	getch();
}
void fibo(int num)
{
	int a=0,b=1,c,i;
	printf("fibonacci series are :");
	printf("%d,%d",a,b);
	for(i=0;i<num-2;i++)
	{
		c=a+b;
		printf(",%d",c);
		a=b;
		b=c;
	}
	getch();
}

