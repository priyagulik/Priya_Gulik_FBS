#include <stdio.h>

void main()
{
    char str1[50], str2[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (str2[0] == '\0')   
    {
        printf("Second string is empty\n");
    }
    else
    {
        while (str1[i] != '\0')   
            i++;

        while (str2[j] != '\0')   
        {
            str1[i] = str2[j];
            i++;
            j++;
        }

        str1[i] = '\0';  
        printf("Concatenated string: %s\n", str1);
    }
}
