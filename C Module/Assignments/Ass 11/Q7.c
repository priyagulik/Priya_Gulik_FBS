#include<stdio.h>
void main()
{
  char str[50];
  
  printf("Enter String :");
  scanf("%s",str);
  
  mystrlwr(str);
  
  printf("Lower case of String is:%s",str);
  
  
  
}
mystrlwr(char str[50])
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	 i++;
	}
}