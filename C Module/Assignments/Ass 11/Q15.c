#include<stdio.h>

void mystrncat(char str1[100], char str2[50], int n);

void main()
{
    char str1[100], str2[50];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("Enter number of characters concat: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);
}

void mystrncat(char str1[100], char str2[50], int n)
{
    int i = 0, j = 0;

    
    while(str1[i] != '\0')
    {
        i++;
    }

    
    while(j < n && str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    
    str1[i] = '\0';

    printf("After concatenation: %s", str1);
}
