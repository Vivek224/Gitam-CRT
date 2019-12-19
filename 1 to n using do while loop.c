/*PROGRAM TO PRINT 1 to N EVEN NUMBERS*/ 
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=2;
	do
	{
		printf("%d\t",i);
		i+=2;
	}while(i<=n);
return 0;
}
