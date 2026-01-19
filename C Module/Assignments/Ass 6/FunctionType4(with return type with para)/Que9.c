
// 9. Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>
float Triarea(int,int);
void main()
{
	int b;
	int h;
	
	printf("Enter base and height:");
	scanf("%d %d",&b,&h);
	
	float res=Triarea(b,h);
	printf("Area of Triangle is : %f",res);
}

float Triarea(int b,int h)
{
	int area;
	area= 0.5*b*h;
	return area;
}

