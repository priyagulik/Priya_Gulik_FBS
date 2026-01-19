#include<stdio.h>

void main()
{
  char str1[50];
  char str2[50];
  
  printf("Enter string:");
  scanf("%s",str1);
  
  mystrcpy(str2,str1);
  printf("Copy String is: %s",str2);	
}

mystrcpy( char str2[50],char str1[50])
{
  int i=0;
  while(str1[i]!='\0')
   {
  	  str2[i]=str1[i];
  	  i++;
   }
   str2[i]='\0';	
}