#include<stdio.h>

void main()
{
	double price=500,fprice,discount;
	char ch='y';
	if(ch=='y')
	{
	   if(price>=500)
	   {
	  	 discount=price*0.20;
	  	 fprice=price-discount;
	  	
	   }	
	  else
	   {
	  	fprice=price-price*0.10;
	   }
	}
	else
	{
		if(price>=600)
		{
		  
	  	  fprice=price-price*0.15;
		}
		else
		{
			discount=0;
			fprice=price;
		    	
			
		}
		
	}
	if(discount==0)
	{
		printf("final price",fprice)
	}
	
	
	
}
