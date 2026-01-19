#include <stdio.h>

void addarrays(int a[],int b[],int c[],int n);

int main() 
{
    int arr[5],brr[5],crr[5];
    
    printf("Enter elements of first array: ");
    
    for(int i=0;i<5;i++) 
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter elements of second array: ");
    for(int i=0;i<5;i++) 
    {
        scanf("%d", &brr[i]);
    }

    // Add two arryas 
    for(int i=0;i<5;i++) 
    {
        crr[i] = arr[i]+brr[i];
    }

    // Print sum array
    printf("Sum array: ");
    for(int i=0;i<5;i++) 
    {
        printf("%d ",crr[i]);
    }
    printf("\n");

   
}
