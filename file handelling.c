#include<stdio.h>
#include<conio.h>
struct employee
{
char name[40],post[20];
float salary;
};
void main()
{
FILE *fp;
struct employee e;
fp=fopen("Employee.data","w+");
if(fp==NULL)
{
printf("\n File doesn't exist");
return;
}
printf("\n Input Name:- ");
gets(e.name);
fprintf(fp, "Name = %s\n", e.name);
printf("\n Input post:- ");
gets(e.post);
fprintf(fp, "post = %s\n", e.post;
printf("\n Input Salary:- ");
scanf("%f", &e.salary);
fprintf(fp,"Salary = %10.2f",e.salary);
fclose(fp);
getch();
}
