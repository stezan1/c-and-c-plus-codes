#include<stdio.h>
#include<conio.h>
#include<string.h>
struct customer
{
char name[50];
int acc_no, balance;
};
struct customer c[100];
int main()
{
int i, n, max;
printf("\n How many customers:- ");
scanf("%d", &n);
printf("\n Input following information of %d customers:- ", n);
for(i=0;i<n;i++)
{
fflush(stdin);
printf("\n Name[%d]:- ",i+1);
gets(c[i].name);
printf("\n Account number[%d]:- ", i+1);
scanf("%d", &c[i].acc_no);
printf("\n Balance[%d]:- ", i+1);
scanf("%d", &c[i].balance);
}
max=c[0].balance;
for(i=0;i<n;i++)
{
if(c[i].balance>max)
max = c[i].balance;
}
for(i=0;i<n;i++)
{
if(c[i].balance==max)
printf("\n%s\t%d\t%d",c[i].name,c[i].acc_no, c[i].balance);
}
getch();
}

