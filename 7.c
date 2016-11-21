#include <stdio.h>

#include <string.h>


int main()

{
    
    char c[1000];
    
    int flag = 0;
    
    int i;
    
    printf("Please input \n");
    
    fgets(c, 1000, stdin);
    for (i = 0; i < strlen(c); i++)
        
    {
        
        if (c[i] == '(')
            
        {
            
            flag++;
            
        }
        
        if (c[i] == ')')
            
        {
            
            flag--;
            
        }
        
        if (flag < 0)
            
        {
            
            break;
            
        }
        
    }
    
    if (flag == 0)
        
    {
        
        printf("Bracket balance");
        
    }
    
    else
        
    {
        
        printf("Bracket imbalance");
        
    }
    
    system("pause");
    return 0;
    
}