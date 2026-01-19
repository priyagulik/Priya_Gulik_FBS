#include<stdio.h>

void main()
{
   char str1[50];
   char str2[50];
   
   printf("Enter String:");
   scanf("%s",str1);
   
   strcpy(str2,str1);
   
   printf("First String:%s",str1);
   printf("\nFirst String copied into Second String:%s",str2);
   
   	
}

