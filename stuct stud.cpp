#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name[50];
char address[50];
};
struct student s[100];
int main()
{
int i, j, n;
char temp[50];
printf("\n How many students:- ");
scanf("%d", &n);
printf("\n Input name and address of %d students:- ", n);
for(i=0;i<n;i++)
{
fflush(stdin);
printf("\n Name[%d]:- ",i+1);
gets(s[i].name);
printf("\n Address[%d]:- ", i+1);
gets(s[i].address);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmpi(s[i].name,s[j].name)>0)
{
strcpy(temp, s[i].name);
strcpy(s[i].name, s[j].name);
strcpy(s[j].name, temp);
strcpy(temp, s[i].address);
strcpy(s[i].address, s[j].address);
strcpy(s[j].address, temp);
}
}
}
printf("\n Sorted List:-\n");
printf("\n Name\t Address\n");
for(i=0;i<n;i++)
printf("\n%s \t %s", s[i].name, s[i].address);
getch();
}

