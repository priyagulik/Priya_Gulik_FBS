#include <stdio.h>

int main() 
{
    int arr[5], brr[5], crr[5];
    int i;

    /
    printf("Enter 5 elements of first array: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input second array
    printf("Enter 5 elements of second array: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &brr[i]);
    }

    // Add arrays
    for(i = 0; i < 5; i++) 
    {
        crr[i] = arr[i] + brr[i];
    }

    // Print sum array
    printf("Sum array: ");
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", crr[i]);
    }
    printf("\n");

    return 0;
}
