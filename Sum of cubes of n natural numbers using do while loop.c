/* PROGRAM TO PRINT SUM OF NUMBERS FROM 1 to N*/
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	do
	{
		sum=sum+i*i*i;
		i++;
	}while(i<n);
	printf("Sum=%d",sum);
return 0;
}
