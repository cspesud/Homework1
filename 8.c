#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int findTimeS1InS2(char *s1, char *s2)
{
    int time = 0;
    if (strlen(s2) < strlen(s1))
    {
        return -1;
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        int flag = 0;
        for (int j = 0; j < strlen(s1); j++)
        {
            if (s1[j] == s2[i + j])flag++;
            if (flag == strlen(s1))time++;
        }
    }
    return time;
}
int main()
{
    
    char s[1000];
    char s1[1000];
    scanf("%s", s);
    scanf("%s", s1);
    
    int time = findTimeS1InS2(s, s1);
    printf("%d", time);
    return 0;
}