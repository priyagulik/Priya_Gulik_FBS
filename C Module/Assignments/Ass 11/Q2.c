#include <stdio.h>
 

void main()
{
    char str[50];
    
    printf("Enter string: ");
    scanf("%s", str);
    
    int length = mylength(str);
    printf("Length is %d\n", length);
}

int mylength(char str[])
{
    int i = 0, count = 0;
    
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    
    return count;
}
