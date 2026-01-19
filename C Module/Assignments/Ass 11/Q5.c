#include<stdio.h>

void main()
{
  char str1[50];
  char str2[50];
  int n;
  
  printf("Enter string: ");
  scanf("%s", str1);
  
  printf("Enter how many characters to copy: ");
  scanf("%d", &n);
  
  mystrncpy(str2, str1, n);
  
  printf("Copied string is: %s", str2);
}

void mystrncpy(char str2[50], char str1[50],int n)
{
  int i = 0;
  
  while (i < n && str1[i] != '\0')
  {
      str2[i] = str1[i];
      i++;
  }
  
  str2[i] = '\0';   
}
