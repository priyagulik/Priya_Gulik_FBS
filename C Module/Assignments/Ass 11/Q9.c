#include<stdio.h>

void mystrstr(char str1[50], char str2[50]);

void main()
{
    char str1[50], str2[50];	

    printf("Enter String: ");
    scanf("%s", str1);

    printf("Enter Substring: ");
    scanf("%s", str2);

    mystrstr(str1, str2);
}

void mystrstr(char str1[50], char str2[50])
{
    int i, j, flag = 0;   /

    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] == str2[0])   
            j = 0;
            while(str2[j] != '\0' && str1[i + j] == str2[j])
            {
                j++;
            }

            if(str2[j] == '\0')   
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Substring found");
    else
        printf("not found");
}
