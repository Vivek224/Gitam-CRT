#include<stdio.h>
int main()
{
	char str[100];
	int i,sum=0;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=48 && str[i]<=57)
		sum+=str[i]-48;
	}
	printf("%d",sum);
	return 0;
}
