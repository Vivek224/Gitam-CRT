#include<stdio.h>
int main()
{
	int n,r,sum=0,num;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		sum+=r*r*r;
		n/=10;
	}
	if(num==sum)
	printf("%d is an Armstrong Number",num);
	else
	printf("%d is not an Armstrong Number",num);
	return 0;
}
