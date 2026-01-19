#include <stdio.h>
void main()
{
    int n,rem,sum,temp,fact;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (int i=1;i<=n;i++)   
    {
        temp=i;
        sum=0;

        while(temp>0)       
        {
            rem=temp%10;   
            fact = 1;

            for(int j=1;j<=rem;j++)  
            {
                fact = fact * j;
            }

            sum = sum + fact;  
            temp = temp / 10;  
        }

        if (sum == i)
            printf("%d ", i);
    }
}
