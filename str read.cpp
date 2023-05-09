#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	FILE *fp;
	fp=fopen("cks.txt","r");
	if(fp==NULL)
	{
		printf("file not opened");
		exit;
	}
	printf("your string in file is :");
	while(fgets(str,50,fp)!=NULL)
	{
	puts(str);
	printf("\n");
    }
	fclose(fp);
}
