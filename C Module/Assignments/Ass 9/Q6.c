#include <stdio.h>

int main() 
{
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter numbers: ", n);
    for (int i=0;i<n;i++)
	 {
        scanf("%d",&arr[i]);
    }

    printPrimes(arr, n);

    return 0;
}

void printPrimes(int arr[], int n) {
    int count;
    printf("Prime numbers:");
    for (int i=0;i<n;i++) 
	{
        count=0;
        for (int j=1;j<=arr[i];j++) 
		{
            if (arr[i]%j==0) 
			{
                count++;
            }
        }
        if (count==2) 
		{ 
            printf("%d ",arr[i]);
        }
    }
}

