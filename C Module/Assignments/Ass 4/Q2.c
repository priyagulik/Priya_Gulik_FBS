#include <stdio.h>
void main()
{
    int num,flag;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    for(int i=2;i<=num;i++)   
    {
        flag=0; 

        for(int j=2;j<=i/2;j++)  
         {
            if(i%j==0)
            {
                flag=1;  
                break;
            }
         }

        if(flag==0)  
        {
		
            printf("%d ",i);
        }
    }

    
}
