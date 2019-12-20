#include<stdio.h>
int main()
{
	int x=5,y=3,z=7,p;
	p=++x + --y * --z;
	printf("%d %d %d %d",x,y,z,p);
return 0;
}
