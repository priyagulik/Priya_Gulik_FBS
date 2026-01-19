#include <stdio.h>

void main()
{
    char str1[50],ch; 
    char *f;
    
    printf("Enter String:");
    scanf("%s",str1);
    
    printf("Enter Character to find:");
    scanf(" %c ",&ch);
    
    f=strchr(str1,ch);
    
    if(f!=NULL)
    {
    	printf("Character found");
	}
   
   else
   {
   	 printf("\n Character not found");
   }
    

}
