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
void insertpos(void);
void deletebeg(void);
void deleteend(void);
void deletepos(void);
void display(void);
int main()
{
	int ch;
	do
	{
		printf("\n\t1.Insert at Beginning\n\t2.Insert at End\n\t3.Position\n\t4.Delete Beginning\n\t5.Delete End\n\t6.Delete at Position\n\t7.Display\n\t8.Exit\n");
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
				insertpos();
				break;
			case 4:
				deletebeg();
				break;
			case 5: 
				deleteend();
				break;
			case 6:
				deletepos();
				break;
			case 7:
				display();
				break;
			case 8:
				exit(0);
				break;
		}
	}while(ch!=7);
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
void insertpos()
{
	int item,pos;
	struct node *ptr,*temp;
	printf("\nEnter the position where the value is to be entered\n");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\nList is Empty,position doesnot exist\n");
		return;
	}
	else
	{
		if(start!=NULL)
		{
			ptr=start;
			for(int i=1;i<=pos-1;i++)
			{
				ptr=ptr->next;
				if(ptr==NULL)
				{
					printf("\nThe particular position does not exist\n");
					return;
				}
			}
		}
		else{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->info=item;
			temp->next=ptr->next;
			ptr->next=temp;
		}
	}
}
void deletebeg()
{
	struct node *dnode;
	if(start==NULL)
	{
		printf("\nThe list is Empty\n");
		return;
	}
	else
	{
		if(start->next==NULL)
		{
			dnode=start;
			start=NULL;
		}
		else
		{
			dnode=start;
			start=start->next;
			printf("Deleted node is %d",dnode->info);
			free(dnode);
		}
	}
}
void deleteend()
{
	if(start==NULL)
	{
		printf("\nList is Empty\n");
		return;
	}
	else
	{
		struct node *dnode;
		if(start->next==NULL)
		{
			dnode=start;
			start=NULL;
		}
		else
		{
			struct node *p1;
			struct node *p2;
			p1=start;
			p2=start->next;
			while(p2->next!=NULL)
			{
				p1=p2;
				p2=p2->next;
			}
			dnode=p2;
			p1->next=NULL;
				printf("\nThe deleted node is :%d\n",dnode->info);
				free(dnode);
		}
	}
}
void deletepos()
{
	struct node *p1;
	struct node *p2;
	p1=start;
	p2=start->next;
	if(p2==NULL)
	{
		printf("\nThe Particular node does not exist\n");
		return;
	}
	else
	{
	    int pos;
	    struct node *dnode;
		for( int i=1;i<pos-2;i++)
		{
			p1=p2;
			p2=p2->next;
			if(p2==NULL)
			{
				printf("\nNode Does not exist\n");
				return;
			}
		}
		dnode=p2;
		p1->next=p2->next;
		free(dnode);
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
