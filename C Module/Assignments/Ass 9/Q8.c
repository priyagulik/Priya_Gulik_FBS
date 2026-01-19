#include <stdio.h>

int main() 
{
    int a[100], b[100], c[200];
    int n1, n2, i, merge;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) 
	{
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) 
	{
        scanf("%d", &b[i]);
    }

    mergeArrays(a, b, c, n1, n2);

    printf("Merged array: ");
    merge= n1 + n2;
    i = 0;
    while (i < merge)
	 {
        printf("%d ", c[i]);
        i++;
    }

    return 0;
}

void mergeArrays(int a[], int b[], int c[], int n1, int n2) {
    int i, j;

    
    for (i = 0; i < n1; i++) 
	{
        c[i] = a[i];
    }
  
    for (j = 0; j < n2; j++) 
	{
        c[i] = b[j];
        i++;
    }
}

