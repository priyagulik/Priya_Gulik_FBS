#include <stdio.h>

int main() 
{
    int a[50], i;

    printf("Enter  numbers: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Alternate elements: ");
    for(i = 0; i < 5; i += 2) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
