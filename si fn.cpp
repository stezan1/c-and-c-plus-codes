#include<stdio.h>
#include<conio.h>
int si(int);
int main()
{
	int i;
	si(i);
	getch();
}
int si(int i)
{
	int p,t,r;
	printf("enter p , t ,r :");
	scanf("%d%d%d",&p,&t,&r);
	i=p*t*r/100;
	printf("\nsi = %d",i);
}
