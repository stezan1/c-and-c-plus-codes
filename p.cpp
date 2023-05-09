#include<stdio.h>
int main()
{
	int num[]={10,20,30,40,50},*ptr1,*ptr2;
	ptr1=&num[0];
	ptr2=&num[4];
	if(ptr1==ptr2)
	printf("they point same element");
	else
	printf("they donot point same element");
}
