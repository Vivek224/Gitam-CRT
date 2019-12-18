#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%5==0&&n%11==0)
	printf("The number is divisible by both 5 and 11\n");
	else
	printf("The number is not divisible by 5 and 11\n");
	return 0;
}
