#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	float n1,n2,n3,n4,total;
	printf("enter number of units:\n");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Number of units consumed is:%f\n",n1);
			total=4*n1+(4*n1*15/100);
			printf("Total cost of first %f units is=%2f\n",n1,total);
			break;
		case 2:
			printf("Number of units consumed is:%f\n",n2);
			total=n2*7.5+(n2*7.5*15/100);
			printf("Total cost of next %f units is:%2f\n",n2,total);
			break;
		case 3:
			printf("Number of units consumed is:%f\n",n3);
			total=n3*8.5+(n3*8.5*15/100);
			printf("Total costs of next %f units is:%2f\n",n3,total);
			break;
		case 4:
			printf("Number of units consumed is:%f\n",n4);
			total=n4*9.5+(n4*9.5*15/100);
			printf("Total cost of next %f units is:%2f\n",n4,total);
			break;
		default:
			printf("\n Invalid choice");
	}
	getch();
}
