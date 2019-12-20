#include<stdio.h>
int main()
{
	long long int n,sum=0,root;
	scanf("%lld",&n);
	root=sum;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	while(sum>9)
	{
		root=sum;
		sum=((sum%10)+ (sum/10));
	}
	printf("Root is %d",sum);
return 0;
}
