#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i, j, length;
char text[50];
printf("\n Input any text:- ");
gets(text);
length = strlen(text);
for(i=0;i<length;i++)
{
for(j=0;j<=i;j++)
printf("%c", text[i]);
printf("\n");
}
printf("\n");
for(i=0;i<length;i++)
{
for(j=0;j<=i;j++)
printf("%c", text[j]);
printf("\n");
}
printf("\n");
for(i=length-1;i>=0;i--)
{
for(j=0;j<=i;j++)
printf("%c", text[j]);
printf("\n");
}
getch();
}
