#include <stdio.h>

int main() 
{
    int a[50],  temp;

    printf("Enter  numbers: ");
    for(int i = 0; i < 5; i++)
	{
    	scanf("%d", &a[i]);
	}
       

    for(int i = 0; i < 4; i++)
	 {
        for(int j = i+1; j < 5; j++) 
		{
            if(a[i] > a[j]) 
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
        
    printf("\n");
    return 0;
}
