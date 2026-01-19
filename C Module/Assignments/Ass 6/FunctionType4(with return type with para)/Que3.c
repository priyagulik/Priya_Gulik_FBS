/* 3. Write a C program to convert temperature from Celsius to Fahrenheit using the
formula: 
F = (C *9/5) + 32  (With return type with parameter)
*/

#include<stdio.h>
 float temperature(int );
void main()
{
	 int C;
	 printf("Enter Temperature:");
	 scanf("%d",&C);
	 float res=temperature(C);
	 printf("%f",res);
}

 float temperature(int C)
{
	float F=(C*9.0/5)+32;
	return F;

//	 printf("Temperature is:%d",C);
//	 printf("\nTemperature from Celsius to Fahrenheit is:%f",F);

}

	