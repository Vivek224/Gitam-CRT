/* PROGRAM TO PRINT SUM OF NUMBERS FROM 1 to N*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("Sum=%d",sum);
	return 0;
}
