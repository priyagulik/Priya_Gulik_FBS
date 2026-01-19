#include <stdio.h>

void main()
{
    char str[50];
    
    printf("Enter String:");
    scanf("%s",str);
    
    strlwr(str);
    printf("Lower String: %s", str);
}


