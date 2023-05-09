#include <stdio.h>
int sum(int, int);
    int main()
{   
 
        int a,b,r;
        printf("Enter a and b :");
        scanf("%d%d", &a,&b);
        r = sum(a,b);
 	    printf("sum = %d ",r);
      
}
int sum(int x,int y)
{
	int z;
	z = x+y;
	return(z);
}

