#include <stdio.h>

void printAlternate(int arr[], int n);

int main()
 {
    int n, arr[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter numbers: ",n);
    for (int i=0;i<n;i++) 
	{
        scanf("%d",&arr[i]);
    }

    printAlternate(arr, n);

    return 0;
}


void printAlternate(int arr[], int n)
 {
    printf("Alternate elements: ");
    for (int i=0;i<n;i++)
	 {
        if (i%2==0) 
		{ 
            printf("%d ", arr[i]);
        }
    }
}
