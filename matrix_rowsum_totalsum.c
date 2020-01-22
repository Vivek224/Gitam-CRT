#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],rsum,i,j,sum=0;      
	printf("Enter elements of the matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		rsum=0;
		for(j=0;j<3;j++)
		{
			rsum+=a[i][j];
			printf("%d\t",a[i][j]);
		}
		printf("=%d",rsum);
		sum+=rsum;
		printf("\n");
	}
	printf("Sum of elements in the matrix : %d",sum);
	return 0;
}
