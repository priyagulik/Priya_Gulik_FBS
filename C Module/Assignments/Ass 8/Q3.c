#include <stdio.h>

int main() 
{
    int a[50], i, sum = 0;

    printf("Enter  numbers: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) 
    {
        sum += a[i];
    }

    printf("Sum of all numbers: %d\n", sum);
    return 0;
}
