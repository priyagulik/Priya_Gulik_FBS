#include<stdio.h>
void main()
{
	int n1;
	
	printf("enter number: ");
	scanf("%d",&n1);
	
	if(n1%3==0 && n1%5==0)
	{
		printf("\n divisible by both");
		
	}
	else
	{
		if(n1%3==0 )
		{
		  	printf("\n divisible by 3 but not 5");
		}
		else
		{
		   if(n1%5==0 )
		    {
		  	  printf("\n divisible by 5 but not 3");
		    }	
			else
			{
				printf("\n not divisible by both");
			}
		}
	}
}
