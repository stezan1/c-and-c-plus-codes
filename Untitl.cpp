#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("nmbr before swap: a=%d b=%d",a,b);
	swap(a,b);
	getch();
}
 void swap(int x,int y)
 {
 	int temp;
 	temp=x;
 	x=y;
 	y=temp;
 	printf("\nnmbr after swap: x=%d y=%d",x,y);
 }
