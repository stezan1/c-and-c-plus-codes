#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter a and b :");
	scanf("%d%d",&a,&b);
	printf("\nnmbr before swapping : %d  %d ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nnmbr after swapping : %d  %d ",a,b);
	getch();
}
