#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int a,b;
    int s=0;
    printf("%s","Please input");
    printf("%s","First：");
    scanf("%d", &a);
    printf("%s","The second：");
    scanf("%d", &b);
    while(a>=b){
        
        a=a-b;
        
        s++;
        
    }
    printf("%s %d","Output result：",s);
       
    return 0;
}
