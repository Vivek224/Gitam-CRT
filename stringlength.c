#include<stdio.h>
int main()
{
	char s[100],i;
	printf("Enter a string :");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++);
	printf("Length of given string :%d\n",i);
	return 0;
}
