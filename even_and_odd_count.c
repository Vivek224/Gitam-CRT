#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,even_count,odd_count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		even_count=0;
		odd_count=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			 even_count++;
			else
			 odd_count++;	
		}
	printf("\n<%d,%d>\n",even_count,odd_count);
	}
	return 0;
}
