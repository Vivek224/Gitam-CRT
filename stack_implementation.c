#include<stdio.h>
int stack[20],top,choice,n,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("\nEnter the size of Array :");
	scanf("%d",&n);
	printf("\n\tStack Operations using array\n");
	printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n");
	do
	{
		printf("\nEnter Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("\n\tExit Point");
				break;
			}
			default:
			{
				printf("Please Enter a Valid Choice");
			}
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n\tStack Overflow");
	}
	else
	{
		printf("Enter a Value to be pushed :");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("Stack is underflow");
	}
	else
	{
		printf("The Popped elemnt is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\nThe Elements in the stack\n");
		for(i=top;i>=0;i--)
		 printf("\n%d",stack[i]);
		 printf("Enter next choice :");
	}
	else
	{
		printf("\nStack is Empty");
	}
}
