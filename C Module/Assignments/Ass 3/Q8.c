#include <stdio.h>
void main() 
{
    int n = 145, temp, rem, sum = 0, fact, i;
    temp = n;

    while (n > 0) 
	{
        rem = n % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) 
		{
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
    {
        printf("Strong number");
    }
    else
    {
	
        printf("Not Strong number");
    }
}
