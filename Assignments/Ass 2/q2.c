#include <stdio.h>

void main()
 {
    int s1, s2, s3;
    
    printf("Enter three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);


    if(s1==s2 && s2==s3)
	{
	  printf("Equilateral Triangle");
    }
    else 
	{
	  if(s1==s2 || s2==s3 || s1==s3) 
	   {
	     printf("Isosceles Triangle");
       }
      else 
	    {
		  printf("Scalene Triangle");
	    }

    }
}

