#include<stdio.h>
int main()
{
	int n,a[10][10],i,j,fwd=0,rev=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				fwd+=a[i][j];
			}
			if(i+j==n-1)
			{
				rev+=a[i][j];
			}
		}
	}
	printf("%d",(fwd-rev));
	return 0;
}
