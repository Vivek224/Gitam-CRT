#include <stdio.h>
int  main()
{
    int num,m,n;
    printf ("Enter range : ");
    scanf ("%d %d",&m,&n);
    for (num=m;num<=n;num++)
    {
        printf("%d ",num);
    }
    return 0;
}
