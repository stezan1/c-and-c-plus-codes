#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct doj
{
    int dd,mm,yy;
};
struct employee
{
    char name[20],address[20];
    int age;
    double phonenmbr;
    struct doj d;
};
int main()
{
    int n;
    struct employee e[100];
    FILE *fp;
    fp=fopen("employee.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit;
    }
    printf("how many records you want to print :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        printf("enter name :");
        gets(e[i].name);
        printf("enter age :");
        scanf("%d",&e[i].age);
        fflush(stdin);
        printf("enter address :");
        gets(e[i].address);
        fflush(stdin);
        printf("enter phone number :");
        scanf("%ld",&e[i].phonenmbr);
        printf("enter date of joining in dd/mm/yy :");
        scanf("%d%d%d",&e[i].d.dd,&e[i].d.mm,&e[i].d.yy);
        fwrite(&e,sizeof(e),1,fp);
    }


    rewind(fp);

    printf("the employee with address kathmandu are :\n");
    for(int i=0;i<n;i++)
    {
        fread(&e,sizeof(e),1,fp);
        if(strcmp("kathmandu",e[i].address)==0)
        {
        printf("name=%s\nage=%d\naddress=%s\ndob=%d/%d/%d\n",e[i].name,e[i].age,e[i].address,e[i].d.dd,e[i].d.mm,e[i].d.yy);
        }
    }
    fclose(fp);
}
