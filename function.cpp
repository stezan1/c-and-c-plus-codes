#include<stdio.h>
#include<conio.h>
struct employee
{
char name[40],post[20];
float salary;
};

int main()
{ 
    int i;
    struct employee e[5];
    printf("\nenter data of 5 employee.....");
    for(i=1;i<=3;i++)
    {
    printf("\nenter name of %d :",i);
    gets(e[i].name);
    fflush(stdin);
    printf("\nenter post of %d:",i);
    gets(e[i].post);
    fflush(stdin);
    printf("\nenter salary of %d:",i);
    scanf("%f",&e[i].salary);
    fflush(stdin);
    }
    for(i=1;i<3;i++)
    {
    printf("\nname = %s \t post = %s \t salary =%f \n",e[i].name,e[i].post,e[i].salary);
    }
}
