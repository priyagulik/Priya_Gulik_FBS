
// 8. Write a C program to input the length and width of a rectangle and find its perimeter.
#include<stdio.h>

int area(int,int);
int peri(int ,int);
void main()
{
	int l,b;
	
	printf("Enter Length and Breadth of Rectangle:");
	scanf("%d %d",&l,&b);

    int res1=area(l,b);
     printf("Area is :%d",res1);
     
    int res2 =peri(l,b);
     printf("\nPerimeter is :%d",res2);
    
}

int area(int l,int b)
{
int	area= l*b;
   return  area;
}

int peri(int l,int b)
{
int	perimeter= 2*(l+b);
	return perimeter;
}




