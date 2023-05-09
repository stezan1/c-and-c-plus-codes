#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,num[100],temp;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("shorted value are :\n");
	for(i=0;i<n;i++)
	printf("%d\n",num[i]);
	getch();
}
