#include <stdio.h>

void main()
{
    char str1[50]; 
    char str2[50];
    
    
    printf("Enter first String:");
    scanf("%s",str1);
    
    printf("Enter second String:");
    scanf("%s",str2);
    
    str1[50]=strcat(str1,str2);   
    printf("concatanation of two string: %s", str1);
    
}
