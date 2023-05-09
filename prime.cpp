#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,c;
	printf("enter n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i%j==0);
			{
				c=c+1;
			}
		}
		if(c==2);
		printf("\n%d",i);
	}
	
	getch();
}
