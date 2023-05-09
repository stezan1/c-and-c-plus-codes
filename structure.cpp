#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("enter n :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
		  printf("%2c",j+65);
		}
			printf("\n");
	}
	getch();
}
