//reverse

#include <stdio.h>

int main() 
{
    int a[5], n;

    printf("Enter  numbers: ");
    scanf("%d",&n)
    for(int i = 0; i < 5; i++)
    {
    	scanf("%d", &a[i]);
	}
    
    printf("Reversed array: ");
    
    for(int i = 4; i >= 0; i--)
    {
    	 printf("%d ", a[i]);
	}
       
    printf("\n");
    return 0;
}
