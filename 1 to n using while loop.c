/* PROGRAM TO PRINT NUMBERS FROM 1 to N ODD NUMBERS*/
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==1)
		printf("%d\t",i);
		i+=1;
	}
return 0;
}
