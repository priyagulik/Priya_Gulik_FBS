#include <stdio.h>


int main() 
{
    int n, arr[100], i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter  numbers: ", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }

    printReversed(arr, n);

    return 0;
}
void printReversed(int arr[], int n) 
{
    int i;
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
}

