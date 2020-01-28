#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL;
void insertbeg(void);
void insertend(void);
void display(void);
int main()
{
	int ch;
	do
	{
		printf("\n\t1.Insert at Beginning\n\t2.Insert at End\n\t3.Display\n\t4.Exit\n");
		printf("Select an Option :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertbeg();
				break;
			case 2:
				insertend();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
		}
	}while(ch!=4);
}
void insertbeg()
{
	int item;
	printf("\nEnter the Number :");
	scanf("%d",&item);
	if(start==NULL)
	{
		start=(struct node *)malloc(sizeof(struct node));
		start->info=item;
		start->next=NULL;
	}
	else
	{
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=item;
		temp->next=start;
		start=temp;
	}
}
void insertend()
{
	int item;
	printf("\nEnter the Number :");
	scanf("%d",&item);
	if(start==NULL)
	{
		start=(struct node *)malloc(sizeof(struct node));
		start->info=item;
		start->next=NULL;
	}
	else
	{
		struct node *temp,*ptr=start;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=item;
		temp->next=NULL;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display()
{
	int i;
	struct node *temp=start;
	if(start==NULL)
	{
		printf("\nList is Empty");
	}
	else
	{
		printf("Elements of list are :");
		while(temp!=NULL)
		{
			printf("%d ",temp->info);
			temp=temp->next;
			printf("\n");
		}
	}
}
