#include<stdio.h>
struct student
{
    int rollno,s1,s2,s3,total;
    char name[10];
}s[10];
void main()
{
    int i,n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll number : ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter the name : ");
        scanf("%s",s[i].name);
        printf("\nEnter the marks in 3 subjects : ");
        scanf("%d%d%d",&s[i].s1,&s[i].s2,&s[i].s3);
        s[i].total=s[i].s1+s[i].s2+s[i].s3;
    }
    printf("\nRoll No.Name\tSub1\tSub2\tSub3\tTotal\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",s[i].rollno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].total);
    }
}
