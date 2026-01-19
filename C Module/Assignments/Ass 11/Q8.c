#include<stdio.h>

void main()
{
    char str1[50];

    printf("Enter String: ");
    scanf("%s", str1);

    mystrrev(str1);   

    printf("Reversed String: %s", str1);
}

void mystrrev(char str[50])
{
    int i = 0, j, len = 0;
    char temp;

    
    while (str[len] != '\0')
    {
        len++;
    }

    
    j = len - 1;

   
    while (i < j)
    {
        temp = str[i];   // store first character
        str[i] = str[j]; // put last character at first position
        str[j] = temp;   // put stored char at last position

        i++;
        j--;
    }
}

