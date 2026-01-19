#include <stdio.h>

void main()
{
    char str[50];
    
    printf("Enter String:");
    scanf("%s",str);
    
    strrev(str);
    printf("Reversed String: %s", str);
}

