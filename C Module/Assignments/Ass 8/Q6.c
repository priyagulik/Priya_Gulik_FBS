#include <stdio.h>

int main()
 {
    int a[50], i, j;

    printf("Enter  numbers: ");
    for(i = 0; i < 5; i++)
    {
	
        scanf("%d", &a[i]);
    }

    printf("Prime numbers: ");
    for(i = 0; i < 5; i++) 
	{
        int count = 0;
        for(j = 2; j < a[i]; j++) 
		{
            if(a[i] % j == 0)
            {
               count++;	
			}
                
        }
        if(a[i] > 1 && count == 0)
          {
              printf("%d ", a[i]);
          }  
    }
    printf("\n");
    return 0;
}
