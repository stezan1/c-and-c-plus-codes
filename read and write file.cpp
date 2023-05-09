#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[50];
	FILE *fp;
	fp=fopen("myfile.txt","a");
	if(fp==NULL)
	{
		printf("file not opened");
		exit;
	}
	printf("enter string :"); 
	while(strlen(gets(str))>0)
	{
		printf("\n");
		fputs(str,fp);
	}
	rewind(fp);
	
	fp=fopen("myfile.txt","r");
	printf("ur string in file is :");
	while(fgets(str,50,fp)!=NULL)
	{
		puts(str);    /*printf("%s",str);*/
		printf("\n");
	}
	fclose(fp);
}
