#include<stdio.h>
int main()
{
	int n,a[10][10],i,j;
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
			if(i!=0 && j!=0 && i!=n-1 && j!=n-1)
			{
				printf("%d",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
