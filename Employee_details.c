#include <stdio.h>
struct emp
{
   char ename[20];
   int eid;
   struct date
    {
       int date;
       int month;
       int year; 
    }doj;
};
int main()
{
	struct emp e;
	printf("Enter Emp ID :");
	scanf("%d",&e.eid);
	printf("Enter Emp Name :");
	scanf("%s",&e.ename);
	printf("Enter Date of Joining :");
	scanf("%d%d%d",&e.doj.date,&e.doj.month,&e.doj.year);
	printf("\nEmployee Name: %s",e.ename);  		 
	printf("\nEmployee ID: %d",e.eid);   
	printf("\nEmployee DOJ: %d/%d/%d",e.doj.date,e.doj.month,e.doj.year);
	return 0;
}
