#include<stdio.h>
#include <stdlib.h>
struct node
{
 int data; //instead of data we can use info
 struct node *next;
};
typedef struct node NODE;
NODE *start;
NODE *temp ,*hold;
void createmptylist(NODE *start)
{
 start = (NODE*)malloc(sizeof(NODE)); //start = NULL;
}
void delete_first()
{
	if(start==NULL)
	{
		printf("no node\n");
	}
	else if(start->next==NULL)
	{
		free(start);
		start=NULL;
	}
	else
	{
		temp=start->next;
		printf("%d deleted",start);
		free(start);
		start=temp;
	}
}
void delete_any_position()
{
    int i=0,pos;
    temp=start;
    printf("enter position to delte\n");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    hold=temp->next;
    temp->next=temp->next->next;
    free(hold);
}
void insert_at_begin(int item)
{
 NODE *ptr;
 ptr=(NODE *)malloc(sizeof(NODE));
 ptr->data=item;
 if(start==(NODE *)NULL)
 ptr->next=(NODE *)NULL;
 else
 ptr->next=start;
 start=ptr;
}
void insert_at_end(int item)
{
 NODE *ptr,*loc;
 ptr=(NODE *)malloc(sizeof(NODE));
 ptr->data=item;
 ptr->next=NULL;
 if(start==NULL)
 start=ptr;
 else
 {
 loc=start;
 while(loc->next!=(NODE *)NULL)
 loc=loc->next;
 loc->next=ptr;
 }
}
void insert_spe(int item,int pos)
{
 struct node *tmp,*q;
 int i;
 q=start;
 //Finding the position to add new element to the linked list
 for(i=1;i<pos-1;i++)
 {
 q=q->next;
 if(q==NULL)
 { 
 printf ("\n\n There are less than %d elements",pos);
 return;
 }
 }/*End of for*/
 tmp=(struct node*)malloc(sizeof (struct node));
 tmp->next=q->next;
 tmp->data=item;
 q->next=tmp;
}
//This function will display all the element(s) in the linked list
void traverse(NODE *start)
{
 NODE *tmp;
if(start == NULL)
{
printf("List is empty\n");
return;
}
tmp = start;
while(tmp != NULL)
 {
 printf("%d\t",tmp->data);
 tmp=tmp->next;
 }
}
int main()
{
 int choice,item,pos;
 createmptylist(start);
 while(1)
 {
 printf("1. Insert element at begin \n");
 printf("2. Insert element at end positon\n");
 printf("3. Insert at specific position\n");
 printf("4. Travers the list in order\n");
 printf("5. Delete node at first position\n");
 printf("6. Delete node at any position\n");
 printf("7. Exit\n");
 printf(" Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: printf("Enter the item\n");
 scanf("%d",&item);
 insert_at_begin(item);
 break;
 case 2: printf("Enter the item\n");
scanf("%d",&item);
 insert_at_end(item);
 break;
 case 3: printf("Enter the item and pos\n");
 scanf("%d%d",&item,&pos);
 insert_spe(item,pos);
 break;
 case 4: printf("\ntravers the list\n");
 traverse(start);
 break;
 case 5: delete_first(); 
 break;
 case 6: delete_any_position(); 
 break;
 case 7:
 exit(0);
 }
 }
} //End of main()
