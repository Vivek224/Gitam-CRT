#include<stdio.h>
int main()
{
	int a,b,c,sum;
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
		printf("They are the angles of the triangle\n");
	else
		printf("They are not the angles of the triangle\n");
	return 0;
}
