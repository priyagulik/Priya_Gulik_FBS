#include <stdio.h>

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

    findOddEven(arr,n);

    return 0;
}

void findOddEven(int arr[], int n) 
{
    printf("Even numbers: ");
    for (int i=0;i<n;i++) 
	{
        if (arr[i]%2==0)
		 {
            printf("%d ",arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for (int i=0;i<n;i++) 
	{
    	
        if (arr[i]%2!=0) 
		{
            printf("%d ", arr[i]);
        }
    }
}
