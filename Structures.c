#include<stdio.h>
struct student
{
	int rno;
	char name[20];
};
int main()
{
	int i;
	struct student s[3];
	for(i=0;i<3;i++)
	{
		printf("Enter roll Number :");
		scanf("%d",&s[i].rno);
		printf("Enter Name :");
		scanf("%s",s[i].name);
	}
	for(i=0;i<3;i++)
	{
		printf("\nRoll Number :%d\nName :%s",s[i].rno,s[i].name);
	}
}
