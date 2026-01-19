#include <stdio.h>

int main() 
{
    int a[5], i, n, flag = 0;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &n);

    for(i = 0; i < 5; i++) 
    {
        if (a[i] == n) 
        {
            flag = 1;
            break; 
        }
    }

    if(flag) 
    {
        printf("Number found at index %d\n", i);
    } 
    else 
    {
        printf("Number not found\n");
    }

    return 0;
}
