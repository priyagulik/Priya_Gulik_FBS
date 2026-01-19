#include<stdio.h>

void main()
{
    char str1[50],str2[50];
    int n;

    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    mystrncmp(str1,str2,n);
}

void mystrncmp(char str1[50], char str2[50], int n)
{
    int flag = 0;

    for(int i=0;i<n;i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("First %d characters are same", n);
    else
        printf("First %d characters are different", n);
}

