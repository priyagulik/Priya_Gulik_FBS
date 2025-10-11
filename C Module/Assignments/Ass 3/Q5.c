#include<stdio.h>
void main() 
{
    int n, temp, sum = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;

    while (temp > 0)
	 {
        digit = temp % 10;
        sum = digit * digit * digit;
        temp /= 10;
    }
    if(sum==n) 
	{
	   printf("Armstrong");
    }  
    else
	{
	  printf("Not Armstrong");
    }
    
}