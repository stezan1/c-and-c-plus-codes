#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum,sub,mul,div,choice;
	printf("***menu dreven program***");
	printf("\n1.addition");
	printf("\n2.sub");
	printf("\n3.mul");
	printf("\n4.div");
	printf("\n5.exit");
	printf("\nenter a and b :");
	scanf("%d%d",&a,&b);
	printf("enter choice :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			sum=a+b;
			printf("%d",sum);
			break;
		case 2:
			sub=a-b;
			printf("%d",sub);
			break;
		case 3:
			mul=a*b;
			printf("%d",mul);
			break;
		case 4:
			div=a/b;
			printf("%d",div);
		    break;
		
		default:
			printf("\ninvalid nmbr");
	}
	getch();
}
