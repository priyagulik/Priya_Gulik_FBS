#include <stdio.h>
void main() 
{
    int n=28, sum=0;
    for(int i=1;i<n;i++) 
	{
        if (n%i== 0)
            sum += i;
    }
    if(sum == n)
      {
	
        printf("%d is a Perfect number", n);
      }
    else
      {
	
        printf("%d is not a Perfect number", n);
      }
    
}
