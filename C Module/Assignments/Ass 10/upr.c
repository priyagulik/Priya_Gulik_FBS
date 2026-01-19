#include <stdio.h>

void main()
{
    char str[50];
    
    printf("Enter String:");
    scanf("%s",str);
    
    strupr(str);
    printf("Upper String: %s", str);
}


