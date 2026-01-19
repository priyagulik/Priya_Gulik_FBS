#include<stdio.h>

int main()
{
	char str1[50];
	char str2[50];
	
	printf("Enter string 1:");
	scanf("%s",str1);
	
	printf("Enter string 2:");
	scanf("%s",str2);
	
	mystrcmp(str1,str2);
}

int mystrcmp(char* str1,char* str2)
{
	int i;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
	  if(str1[i]!=str2[i])
	  {
	  	break;
	  }
	  i++;	
	}
	
	if(str1[i]==str2[i])
	{
		printf("Strings are equal");
	}
	else if(str1[i]>str2[i])
	{
		printf("string 1 greater");
	}
	else
	{
	printf("string 2 greater");	
	}
}
