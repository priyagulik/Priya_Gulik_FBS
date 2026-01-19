#include <stdio.h>

int findSum(int arr[], int n) 
{
    int sum=0;
    for (int i=0;i<n;i++) 
	{
        sum=sum+arr[i]; 
    }
    return sum;
}

int main() 
{
    int n,arr[100];
    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter numbers: ",n);
    for (int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }

    printf("Sum of numbers: %d",findSum(arr,n));

    return 0;
}
