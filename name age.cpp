#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,age[10];
	char name[20];
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	printf("name = %s",name[i]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
	printf("%d=age",age[i]);
}
