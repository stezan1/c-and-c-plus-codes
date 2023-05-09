#include<stdio.h>
#include<stdlib.h>
struct dob
{
    int dd,mm,yy;
};
struct student
{
    char name[20],address[20];
    int age;
    struct dob d;
};
int main()
{
    int n;
    struct student s;
    FILE *fp;
    fp=fopen("student.txt","w+");
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
        gets(s.name);
        printf("enter age :");
        scanf("%d",&s.age);
        fflush(stdin);
        printf("enter address :");
        gets(s.address);
        printf("enter dob ,dd/mm/yy :");
        scanf("%d%d%d",&s.d.dd,&s.d.mm,&s.d.yy);
        fwrite(&s,sizeof(s),1,fp);
    }


    rewind(fp);

    printf("the informations are :\n");
    for(int i=0;i<n;i++)
    {
        fread(&s,sizeof(s),1,fp);
        printf("name=%s\tage=%d\taddress=%s\tdob=%d/%d/%d\n",s.name,s.age,s.address,s.d.dd,s.d.mm,s.d.yy);
    }
    fclose(fp);
}
