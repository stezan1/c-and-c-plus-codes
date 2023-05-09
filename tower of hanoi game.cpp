#include<stdio.h>
#include<conio.h>
int i;
int toh(int n,char source,char aux,char dest)
{
	if(n!=0)
	{
		toh(n-1,source,dest,aux);
		printf("\nmove %d disc from %c to %c",n,source,dest);
		toh(n-1,aux,source,dest);
		i++;
	}	
}
int main()
{
	int n;
	printf("\nenter number of disc : ");
	scanf("%d",&n);
	toh(n,'A','B','C');
	printf("\nnumber of moves = %d",i);
	return 0;
}
