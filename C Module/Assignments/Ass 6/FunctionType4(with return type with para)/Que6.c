//6. Write a C program to find the square and cube of a given number.(With return type with parameter)

#include<stdio.h>
int square(int);
int cube(int);
void main()
{
	int a ;
    
	printf("Enter Any number :");	
	scanf("%d",&a);
	
    int res1= square(a);
    int res2=cube(a);
    printf("Square is :%d\n Cube is :%d",res1,res2);

}

int square(int a)
{
	int square= a*a;	
	return square;
	

}

int cube(int a)
{
	int cube=a*a*a;
	return cube;
}
