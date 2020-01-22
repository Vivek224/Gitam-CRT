#include<stdio.h>
void printleaders(int a[],int n)
{
	int max=a[n-1];
	int i;
	printf("%d",max)
	for(i=n-2;i>=0;i--)
	{
		if(max<a[i])
		{
			printf("%d",a[i]);
			max=a[i];
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printleaders(a,n);
	return 0;
}
