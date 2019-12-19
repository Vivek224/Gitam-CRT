#include<stdio.h>
int main()
{
	int n,r,max=0;
	scanf("%d",&n);
	do
	{
		r=n%10;
		if(r>max)
		max=r;
		n/=10;
	}while(n!=0);
	printf("Maximum number is %d",max);
	return 0;
}
