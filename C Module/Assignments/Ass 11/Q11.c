#include<stdio.h>

void main()
{
    char str[50], ch;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to find: ");
    scanf(" %c", &ch);

    mystrchr(str, ch);
}

void mystrchr(char str[50],char ch)
{
    int flag = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character found at position: %d", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Character not found!");
}

