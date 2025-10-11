#include<stdio.h>
void main() 
{
    int n,i=1;
    printf("Enter number: ");
    scanf("%d", &n);

    while (i <= 10) 
	{
        printf("%d ", n * i);
        i++;
    }
   
}
