#include <stdio.h>

int main() 
{
    int arr[100],i;

    printf("Enter  numbers: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    for(i = 0; i < 5; i++) 
    {
        if(arr[i] % 2 == 0)
        {
        	printf("%d ", arr[i]);
		}
            
    }
    printf("\n");

    printf("Odd numbers: ");
    for(i = 0; i < 5; i++) 
    {
        if(arr[i] % 2 != 0)
        {
        	printf("%d ", arr[i]);
		}
            
    }
    printf("\n");

    return 0;
}
