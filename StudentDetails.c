#include<stdio.h>
struct student
{
    int rollno,s1,s2,s3,total;
    char name[10];
    float average;
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
        s[i].average=s[i].total/3.0;
    }
    printf("\nRoll No.Name\tSub1\tSub2\tSub3\tTotal\tAverage\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%2f\n",s[i].rollno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].total,s[i].average);
    }
}
