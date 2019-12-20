#include<stdio.h>
int main()
{
	int x=100,y=200;
	if((x-=100)||(y-=100))
		printf("x= %d and y= %d",x,y);
	else
		printf("x= %d and y= %d",x,y);
	return 0;
}
