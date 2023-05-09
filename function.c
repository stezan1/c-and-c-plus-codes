
//  with return value and without passing arguments
#include<stdio.h>
#include<conio.h>
int sum();//function declare
void main()
{
    printf("sum of two number = %d",sum());//function call
    getch();
}
int sum()//function define
{
int a,b,sum;
printf("enter a and b:");
scanf("%d%d",&a,&b);
sum=a+b;
return(sum);
}