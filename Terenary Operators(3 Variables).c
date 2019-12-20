#include<stdio.h>
int main()
{
	int a=100,b=200,c=1000,d;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("%d",d);
	return 0;
}
