//5. Write a C program to input five numbers and find their average.(with return type with parameter)

#include<stdio.h>
float avg(int,int,int,int ,int);
void main ()
{
  int n1,n2,n3,n4,n5;
  printf("Enter five numbers :");
  scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
  
 float res=avg(n1,n2,n3,n4,n5);
 printf("%f",res);
}

float avg(int n1,int n2,int n3,int n4,int n5)
{
	 float average=(n1+n2+n3+n4+n5)/5.0;
     return average;
}
