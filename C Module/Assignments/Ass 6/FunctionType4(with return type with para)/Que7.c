// 7. Write a C program to convert given minutes into hours and remaining minutes.(with return type with para)

#include<stdio.h>
int hours(int);
int remminutes(int);

void main()
 {
	int min;
	printf("Enter Minutes:");
	scanf("%d",&min);

	int res1=hours(min);
	printf("Hours are :%d",res1);

	int res2=remminutes(min);
	printf("\nRemaining Minutes are :%d",res2);
}

int hours(int min)
 {
	int hrs;
	hrs = min/60;
	return hrs;


}

int remminutes(int min)
 {
	int remmin ;
	remmin = min%60;
	return remmin;

}