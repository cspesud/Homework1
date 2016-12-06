#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);
    int *X = (int*)malloc(sizeof(int)*(m+n));
    for(i=0;i<m+n;i++)
    {
        scanf("%d",&X[i]);
    }
    for(int i=m;i<m+n;i++)
    {
        printf("%d ",X[i]);
    }
    for(i=0;i<=m-1;i++)
    {
        printf("%d ",X[i]);
    }
    printf("\n");
    
    return 0;
}
