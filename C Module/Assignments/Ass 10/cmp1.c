#include<stdio.h>
void main()
{
	char str1[50];
	char str2[50];
	int res;
	 
	 printf("Enter String 1:");
	 scanf("%s",str1);
	 
	 printf("Enter String 2:");
	 scanf("%s",str2);
	 
	 res=strcmp(str1,str2);
	 
	 if(res==0)
	 {
	 	printf("Equal");
	 }
	 else{
	 	printf("Not Equal");
	 }
	
}