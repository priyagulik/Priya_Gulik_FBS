#include <stdio.h>
void main() 
{
    int no=10,flag=0;
    int i=2;

    while(i<=no/2) 
	{
        if(no%i== 0) 
		{
            flag=1;
            break;
        }
        i++;
    }

    if(no==1 || flag==1) 
	{
        printf("Not Prime");
    } 
	else
	{
        printf("Prime");
    }

    
}
