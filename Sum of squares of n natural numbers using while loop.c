/* PROGRAM TO PRINT SUM OF SQUARES OF NUMBERS FROM 1 to N*/
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
		sum=sum+i*i;
		i++;
	}
	printf("Sum=%d",sum);
	return 0;
}
