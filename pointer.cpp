#include<stdio.h>
int main()
{
    int *ptr,i,num[50],sum,n;
    ptr=num;
    printf("how many nmbrs : ");
    scanf("%d",&n);
    printf("enter %d numbers ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(num+1));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(num+1);
    }
    printf("sum =%d",sum);
}
