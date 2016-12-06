#include <stdio.h>


int main()

{
    
    int i;
    
    int n;
    
    int number = 0;
    
    int a[1000];
    
    
    
    printf("Please input the number of elements\n");
    
    scanf("%d", &n);
    
    printf("Input element\n");
    
    for (i = 0; i < n; i++)
        
    {
        
        scanf("%d", &a[i]);
        
    }
    
    for (i = 0; i < n; i++)
        
    {
        
        if (a[i] == 0)
            
        {
            
            number++;
            
        }
        
    }
    
    printf("The number of zero elements is %d\n", number);
    return 0;
}
