#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int a,b;
    printf("%s","Please input");
    printf("%s","First：");
    scanf("%d", &a);
    printf("%s","The second：");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%s %d %d ","Output result：",a,b);
    system("pause");
    return 0;
    
}