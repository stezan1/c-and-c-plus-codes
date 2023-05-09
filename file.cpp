#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[50];
	FILE *fp;
	fp=fopen("First_Name.txt","a");
	if(fp==NULL)
	{
		printf("file not opened");
		exit;
	}
	printf("enter first name :");
	gets(str);
	while(strlen(gets(str))>0)
	{
		fputs(str,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	
	
	fp=fopen("Last_Name.txt","a");
	if(fp==NULL)
	{
		printf("file not opened");
		exit;
	}
	printf("enter last name :");
	gets(str);
	while(strlen(gets(str))>0)
	{
		fputs(str,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	
	
}

