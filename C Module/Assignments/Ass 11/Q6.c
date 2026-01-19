#include<stdio.h>
void main()
{
  char str[50];
  
  printf("Enter String :");
  scanf("%s",str);
  
  mystrupr(str);
  
  printf("Uppercase of String is:%s",str);
  
  
  
}
mystrupr(char str[50])
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	 i++;
	}
}