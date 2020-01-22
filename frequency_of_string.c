#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	int freq[256]={0};
	printf("Enter a String :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		freq[a[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i]!=0)
		{
			printf("%c ocuured %d times in the string\n",i,freq[i]);
		}
	}
	return 0;
}
