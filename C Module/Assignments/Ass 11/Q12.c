#include<stdio.h>

void mystrrchr(char str[50], char ch)
{
    int i, pos = -1;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            pos = i;
    }

    if(pos == -1)
        printf("Character not found!");
    else
        printf("Last occurrence at position: %d", pos);
}

void main()
{
    char str[50], ch;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to find last occurrence: ");
    scanf(" %c", &ch);

    mystrrchr(str, ch);
}
