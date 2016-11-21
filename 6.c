#include <stdio.h>



int main()

{
    
    int i,j;
    
    int sum = 0;
    
    
    
    for (i = 0; i <1000000; i++)
        
    {
        
        int n1 = 0;
        
        int n2 = 0;
        
        int a = i;
        
        for (j = 0; j < 3; j++)
            
        {
            
            n1 += a % 10;
            
            a = a / 10;
            
        }
        
        for (j = 0; j < 3; j++)
            
        {
            
            n2 += a % 10;
            
            a = a / 10;
            
        }
        
        if (n1 == n2)
            
        {
            
            sum++;
            
        }
        
    }
    printf("%d",sum);
    printf("\n");
    system("pause");
    return 0;
}