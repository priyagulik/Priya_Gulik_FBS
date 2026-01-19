#include <stdio.h>

void findMinMax(int arr[],int n, int *min, int *max);

int main() 
{
    int n,arr[100],min,max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter numbers: ",n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr,n,&min,&max);

    printf("Minimum number: %d\n",min);
    printf("Maximum number: %d\n",max);

    return 0;
}

void findMinMax(int arr[],int n,int *min,int *max) 
{
    *min=arr[0];
    *max=arr[0];

    for (int i=1;i<n;i++) 
    {
        if (arr[i]<*min) 
        {
            *min=arr[i];
        }
        if (arr[i]>*max) 
        {
            *max=arr[i];
        }
    }
}
