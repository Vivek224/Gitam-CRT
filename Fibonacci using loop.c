#include<stdio.h>
int main()
{
	int n,i,a1=0,a2=1,sum;
	scanf("%d",&n);
	printf("%d\t%d\t",a1,a2);
	for(i=3;i<=n;i++)
	{
		sum=a1+a2;
		printf("%d\t",sum);
		a1=a2;
		a2=sum;
	}
return 0;
}
