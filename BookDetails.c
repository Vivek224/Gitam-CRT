#include<stdio.h>
struct bookdetails
{
	int bid;
	char bname[20];
	char aname[20];
	float price;
};
int main()
{
	int i;
	struct bookdetails b[3];
	for(i=0;i<3;i++)
	{
		printf("Enter Book ID :");
		scanf("%d",&b[i].bid);
		printf("Enter Book Name :");
		scanf("%s",b[i].bname);
		printf("Enter Author Name :");
		scanf("%s",b[i].aname);
		printf("Enter Price :");
		scanf("%f",&b[i].price);
	}
	for(i=0;i<3;i++)
	{
		printf("\nBook ID: %d\t Book Name: %s",b[i].bid,b[i].bname);
		printf("\tAuthor Name: %s\t Price: %f",b[i].aname,(b[i].price*(10/100)+b[i].price));
	}
	return 0;
}
