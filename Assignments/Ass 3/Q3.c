#include<stdio.h>
void main() 
{
    int first,last,sum=0;
    
    printf("Enter first and last number: ");
    scanf("%d %d", &first, &last);

    while (first<=last) 
	{
        sum=sum+first; 
        first=first+1; 
    }

    printf("Sum = %d\n", sum);
    
}
