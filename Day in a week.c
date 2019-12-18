#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("MONDAY");
			break;
		case 2:
			printf("TUESDAY");
			break;
		case 3:
			printf("WEDNESDAY");
			break;
		case 4:
			printf("THURSDAY");
			break;
		case 5:
			printf("FRIDAY");
			break;
		case 6:
			printf("SATURDAY");
			break;
		case 7:
			printf("SUNDAY");
			break;
		default:
			printf("Invalid input! Please enter week number between 1-7");
    }
	return 0;
}
