#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int queue[MAX],front=-1,rear=-1;
void insert(void);
void deletion(void);
void display(void);
int main()
{
	int ch;
	do
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter a Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				deletion();
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
void insert()
{
	int item;
		printf("Enter the number :");
		scanf("%d",&item);
	if(rear==MAX-1)
	{
		printf("Queue Overflow");
	}
	else
	{

	if(rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("Item is inserted");
}
}
void deletion()
{
	int item;
	if(front==-1)
	{
		printf("Queue Underflow");
	}
	else
	{
		printf("Remove an element");
	item=queue[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;;
	}
	else
	{
		front=front+1;
	}
	printf("Element Deleted is %d",item);
}
}
void display()
{
	int i;
	if(front==-1)
	 printf("Queue is Empty\n");
	else
	{
		printf("Queue is :\n");
		for(i=front;i<=rear;i++)
		 printf("%d",queue[i]);
		printf("\n");
	}
}
