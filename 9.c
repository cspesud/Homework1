#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    
    int n,mod,i,j,count=0;
    printf("Please input a number：");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        mod=(int)sqrt(i);
        for(j=2;j<=mod;j++)
            if(i%j==0)
                count++;
        if(count==0)
            printf("  %d",i);
        count=0;
    }
    printf("\n");
    system("pause");
    return 0;
}