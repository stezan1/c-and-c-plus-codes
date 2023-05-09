#include<stdio.h>
int main()
{
	int i,j,r,c,num[5][5],sum;
	printf("enter size of matrix :");
	scanf("%d%d",&r,&c);
	printf("enter value of %d * %d matrix :\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(num[i]+j));
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",*(num[i]+j));
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   if(i==j)
		   {
		   		sum=sum+*(num[i]+j);
		   }
		}
	}
	printf("\nsum =%d",sum);
}
