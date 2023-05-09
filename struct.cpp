#include<stdio.h>
#include<conio.h>
int main()
{
struct address
{
int phone;
char city[50];
int street;
};

struct employee
{
char name[50];
struct address add;
};

struct employee e1;
printf("\n Input Name:- ");
scanf("%s",&e1.name);
printf("\n Input Phone No: - ");
scanf("%d",&e1.add.phone);
fflush(stdin);
printf("\n Input City:- ");
gets(e1.add.city);
printf("\n Input Street:- ");
scanf("%d",&e1.add.street);
fflush(stdin);
printf("\n %s\t %d\t%s\t%d",e1.name,e1.add.phone,e1.add.city,e1.add.street);
getch();
}

